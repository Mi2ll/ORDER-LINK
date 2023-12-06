#include "CLservicesCommande.h"

NS_Comp_Svc::CLservicesCommande::CLservicesCommande(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappCommande = gcnew NS_Comp_Mappage::CLmapCommande();
	this->oMappClient = gcnew NS_Comp_Mappage::CLmapClient();
	this->oMappPaiement = gcnew NS_Comp_Mappage::CLmapPaiement();
	this->oMappArticle = gcnew NS_Comp_Mappage::CLmapArticle();
}
System::Data::DataSet^ NS_Comp_Svc::CLservicesCommande::rechercherUneCommande(System::String^ dataTableName, int id_commande)
{
	this->oMappCommande->setIdCommande(id_commande);

	System::String^ sql;

	sql = this->oMappCommande->Select();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservicesCommande::supprimerUneCommande(int id) {
	System::String^ sql;

	this->oMappCommande->setIdCommande(id);

	sql = this->oMappCommande->Delete();
	this->oCad->actionRows(sql);
}
/*
void NS_Comp_Svc::CLservicesCommande::modifierUneCommande(int id, System::String^ reference, System::String^ date_cmd, System::String^ date_livraison, int id_client, int id_paiement, int id_article, int qte_commandee) {
	System::String^ sql;
	int id_client;
	int id_paiement;

	this->oMappCommande->setIdCommande(id);
	if (reference != "") {
		this->oMappCommande->setReference(reference);
	}
	if (date_cmd != "") {
		this->oMappCommande->setDateCommande(date_cmd);
	}
	if (date_livraison != "")
	{
		this->oMappCommande->setDateLivraison(date_livraison);
	}
	// Mappage de Client -> this->oMappCommande->setIdCommande(id_client);
	this->oMappPaiement->setIdPaiement(id_paiement);

	if (nom != "" && prenom != "" && numero != "" && nom_rue != "" && code_postal != "" && ville != "") {
		sql = "SELECT id_adresse FROM Personnel WHERE id_personnel = " + id + ";";
		id_adresse = this->oCad->actionRowsID(sql);

		this->oMappPaiement->setIdPaiement(id_paiement);
		this->oMappClient->setIdClient(id_client);

		sql = this->oMappCommande->Update();
		this->oCad->actionRows(sql);

		sql = this->oMappPaiement->Update();
		this->oCad->actionRows(sql);

		sql = this->oMappclient->Update();
		this->oCad->actionRows(sql);
	}
}
*/

/*
	if (date_livraison != "") {
		this->oMappCommande->setDateLivraison(date_livraison);
	}
	this->oMappClient->setIdClient(id_client);
	// this->oMappPaiement->getIdPaiement();

	sql = this->oMappCommande->Select();
	int id = this->oCad->actionRowsID(sql);
	if (id_client != 0 && date_cmd != "" && date_livraison != "") {
		sql = this->oMappCommande->Insert(id);
		id = this->oCad->actionRowsID(sql);

		return id;
	}

	return -1;
}*/