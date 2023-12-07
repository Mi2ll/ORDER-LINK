#include "CLservicesCommande.h"

NS_Comp_Svc::CLservicesCommande::CLservicesCommande(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappCommande = gcnew NS_Comp_Mappage::CLmapCommande();
	this->oMappClient = gcnew NS_Comp_Mappage::CLmapClient();
	this->oMappPaiement = gcnew NS_Comp_Mappage::CLmapPaiement();
	this->oMappArticle = gcnew NS_Comp_Mappage::CLmapArticle();
	this->oMappLigne = gcnew NS_Comp_Mappage::CLmapLigneCommande();
}
System::Data::DataSet^ NS_Comp_Svc::CLservicesCommande::rechercherLesCommandes(System::String^ dataTableName, int id_commande)
{
	this->oMappCommande->setIdCommande(id_commande);

	System::String^ sql;

	sql = this->oMappCommande->Select();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservicesCommande::rechercherUneCommande(System::String^ dataTableName, int id_commande)
{
	this->oMappCommande->setIdCommande(id_commande);

	System::String^ sql;

	sql = this->oMappCommande->SelectUneCommande();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservicesCommande::supprimerUneCommande(int id) {
	System::String^ sql;

	this->oMappCommande->setIdCommande(id);

	sql = this->oMappCommande->Delete();
	this->oCad->actionRows(sql);
}

int NS_Comp_Svc::CLservicesCommande::ajouterUneCommande(System::String^ date_cmd, System::String^ date_livraison, int id_client)
{
	int id;
	int id_paiement;
	System::String^ sql;
	int caca = hasReduction(id_client, date_cmd);

	this->oMappCommande->setDateCommande(date_cmd);
	this->oMappCommande->setDateLivraison(date_livraison);
	this->oMappCommande->setReduction(caca);

	sql = this->oMappPaiement->Insert();
	id_paiement = this->oCad->actionRowsID(sql);

	sql = this->oMappCommande->Insert(id_paiement, id_client);
	id = this->oCad->actionRowsID(sql);
	return id;
}

void NS_Comp_Svc::CLservicesCommande::ajouterLigneCommande(System::String^ article, int id_commande, int qte_commandee) {
	System::String^ sql;
	int id_article;

	sql = "SELECT id_article from Article WHERE nom_article = '" + article + "';";
	id_article = this->oCad->actionRowsID(sql);

	this->oMappLigne->setQteCommandee(qte_commandee);

	sql = this->oMappLigne->Insert(id_article, id_commande);
	System::String^ prix = System::Convert::ToString(this->oCad->actionRowsID(sql));

	sql = "SELECT id_paiement from Commande where id_commande =" + id_commande + ";";
	int id_paiement = System::Convert::ToInt32(this->oCad->actionRowsID(sql));
	this->oMappPaiement->setIdPaiement(id_paiement);

	this->oMappPaiement->setMontantPaye(prix);
	sql = this->oMappPaiement->Update();
	this->oCad->actionRows(sql);
}


int NS_Comp_Svc::CLservicesCommande::hasReduction(int id_client, System::String^ date_commande) {
	NS_Comp_Data::CLcad^ cad = gcnew NS_Comp_Data::CLcad();

	System::String^ sqlMonthDay = "SELECT RIGHT(date_naissance, 5)  FROM [Client] WHERE Id_Client = " + id_client + ";";
	System::String^ MonthDayClient = this->oCad->actionRowsString(sqlMonthDay);

	int longueur = date_commande->Length;

	// Obtention les 5 derniers caractères
	int positionDebut = (longueur > 5) ? longueur - 5 : 0;
	System::String^ MDcmd = date_commande->Substring(positionDebut);

	System::Console::WriteLine(MonthDayClient);
	System::Console::WriteLine(MDcmd);



	if (System::String::Equals(MonthDayClient, MDcmd)) {
		return 1;
	}
	else {
		return 0;
	}
}

void NS_Comp_Svc::CLservicesCommande::modifierUneCommande(int id_commande, int id_client, System::String^ date_livraison) {
	if (id_commande > 0) {
		this->oMappCommande->setIdCommande(id_commande);
	}
	this->oMappCommande->setDateLivraison(date_livraison);

	System::String^ sql = this->oMappCommande->Update(id_client);
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservicesCommande::supprimerLigneCommande(System::String^ nom_article, int id_commande) {
	System::String^ sql = this->oMappLigne->Delete(nom_article, id_commande);
	this->oCad->actionRows(sql);
}