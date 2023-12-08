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

	sql = "DELETE Ligne_commande WHERE id_commande = " + id + ";";
	this->oCad->actionRows(sql);

	sql = this->oMappCommande->Delete();
	this->oCad->actionRows(sql);
}
System::String^ NS_Comp_Svc::CLservicesCommande::setNewReference(int Id_Client, System::String^ date_cmd) {

	NS_Comp_Data::CLcad^ cad = gcnew NS_Comp_Data::CLcad();
	System::String^ sql = "SELECT LEFT(nom_client, 2) FROM [Client] WHERE Id_Client = " + Id_Client;
	System::String^ nom = this->oCad->actionRowsString(sql);

	sql = "SELECT LEFT(prenom_client, 2) FROM [Client] WHERE Id_Client = " + Id_Client;
	System::String^ prenom = this->oCad->actionRowsString(sql);

	System::String^ date = date_cmd->Substring(0, 4);

	sql = "SELECT LEFT([Adresse].ville, 3) FROM [Client]" +
		" LEFT JOIN[Adresse] ON[Client].Id_Adresse_facture = [Adresse].Id_Adresse" +
		" WHERE[Client].Id_Client = " + Id_Client;
	System::String^ ville = this->oCad->actionRowsString(sql);

	System::String^ reference = nom + prenom + date + ville;

	return reference;
}

System::String^ NS_Comp_Svc::CLservicesCommande::addIncrToReference(System::String^ reference) {
	NS_Comp_Data::CLcad^ cad = gcnew NS_Comp_Data::CLcad();
	System::String^ finalReference;

	System::String^ sqlNbLigne = "SELECT COUNT(*) AS NombreDeLignes FROM[Commande] WHERE reference LIKE '" + reference + "%';";
	System::String^ StrNbLigne = this->oCad->actionRowsString(sqlNbLigne);

	int longueur = StrNbLigne->Length;
	int NbLigne = System::Convert::ToInt32(StrNbLigne);
	int Increment = NbLigne + 1;
	Increment = System::Convert::ToInt32(Increment);

	if (longueur == 1) {
		finalReference = "0" + Increment;
		finalReference = reference + finalReference;
		return finalReference;
	}
	else {
		finalReference = reference + Increment;
		return finalReference;
	}
}

int NS_Comp_Svc::CLservicesCommande::ajouterUneCommande(System::String^ date_cmd, System::String^ date_livraison, int id_client)
{
	int id;
	int id_paiement;
	System::String^ sql;
	System::String^ Reference = setNewReference(id_client, date_cmd);
	System::String^ finalReference = addIncrToReference(Reference);
	int reduc = hasReduction(id_client, date_cmd);

	this->oMappCommande->setDateCommande(date_cmd);
	this->oMappCommande->setDateLivraison(date_livraison);
	this->oMappCommande->setReference(finalReference);
	this->oMappCommande->setReduction(reduc);

	sql = this->oMappPaiement->Insert();
	id_paiement = this->oCad->actionRowsID(sql);

	sql = this->oMappCommande->Insert(id_paiement, id_client);
	id = this->oCad->actionRowsID(sql);
	return id;
}

void NS_Comp_Svc::CLservicesCommande::ajouterLigneCommande(System::String^ article, int id_commande, int qte_commandee) {
	System::String^ sql;
	int id_article;
	int stock;

	if (qte_commandee == 0) {
		return;
	}

	sql = "SELECT qte_stock from Article WHERE nom_article = '" + article + "';";
	stock = this->oCad->actionRowsID(sql);

	if (stock < qte_commandee) {
		throw;
	}

	sql = "SELECT id_article from Article WHERE nom_article = '" + article + "';";
	id_article = this->oCad->actionRowsID(sql);

	this->oMappLigne->setQteCommandee(qte_commandee);

	sql = this->oMappLigne->Insert(id_article, id_commande);
	System::String^ prix = System::Convert::ToString(this->oCad->actionRowsID(sql));

	sql = "SELECT id_paiement from Commande where id_commande =" + id_commande + ";";
	int id_paiement = System::Convert::ToInt32(this->oCad->actionRowsID(sql));
	this->oMappPaiement->setIdPaiement(id_paiement);

	// application de la réduction (15% / 10% / 5%)

	// Récupérer l'id du client qui a fait la commande
	System::String^ sqlgetIDclient = "SELECT Id_Client FROM Commande WHERE Id_Commande = " + id_commande + ";";
	int idclient = System::Convert::ToInt32(this->oCad->actionRowsID(sqlgetIDclient));

	// Nombre de commandes qu'a effectué le client
	System::String^ sqlgetNmbCommandes = "SELECT COUNT(*) AS Nmb_commandes_client FROM[Client]"
		+ " JOIN[Commande] ON[Client].Id_Client = [Commande].Id_Client"
		+ " WHERE[Client].Id_Client = " + idclient + ";";
	int nmbCommandesClient = System::Convert::ToInt32(this->oCad->actionRowsID(sqlgetNmbCommandes));

	// Check si la commande a été réalisé le jour de naissance du client
	sql = "SELECT Reduction FROM [Commande] WHERE Id_Commande =" + id_commande + ";";
	int checkReduction = System::Convert::ToInt32(this->oCad->actionRowsID(sql));
	int p = System::Convert::ToInt32(prix);

	if (checkReduction == 1 && nmbCommandesClient == 1) {
		p = p * 0.85;
		System::String^ prixFinal = System::Convert::ToString(p);
		this->oMappPaiement->setMontantPaye(prixFinal);
	}
	else if (checkReduction == 1) {
		p = p * 0.9;
		System::String^ prixFinal = System::Convert::ToString(p);
		this->oMappPaiement->setMontantPaye(prixFinal);
	}
	else {
		this->oMappPaiement->setMontantPaye(prix);
	}
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
	System::String^ sql = "select qte_commandee from commande" +
		" join ligne_commande on commande.id_commande = ligne_commande.id_commande" +
		" join article on ligne_commande.Id_Article = article.Id_Article" +
		" where ligne_commande.Id_Article = (SELECT article.id_article where nom_article = '" + nom_article + "'" +
		" and commande.Id_Commande = " + id_commande + "); ";

	int qte = this->oCad->actionRowsID(sql);

	sql = "SELECT id_paiement from Commande where id_commande =" + id_commande + ";";
	int id_paiement = System::Convert::ToInt32(this->oCad->actionRowsID(sql));
	this->oMappPaiement->setIdPaiement(id_paiement);

	sql = "SELECT qte_commandee * (prix_ht + prix_ht * tva) FROM article join ligne_commande on article.id_article = ligne_commande.id_article WHERE article.nom_article = '" + nom_article + "' and id_commande = " + id_commande + "; ";
	System::String^ prix = System::Convert::ToString(0 - this->oCad->actionRowsID(sql));
	this->oMappPaiement->setMontantPaye(prix);
	sql = this->oMappPaiement->Update();
	this->oCad->actionRows(sql);


	sql = this->oMappLigne->Delete(nom_article, id_commande, qte);
	this->oCad->actionRows(sql);
}