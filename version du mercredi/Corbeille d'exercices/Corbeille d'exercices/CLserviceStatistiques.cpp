#include "CLserviceStatistiques.h"


NS_Comp_Svc::CLserviceStatistique::CLserviceStatistique(void) {
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappArticle = gcnew NS_Comp_Mappage::CLmapArticle();
	this->oMappLigneCommande = gcnew NS_Comp_Mappage::CLmapLigneCommande();
	this->oMappStatistiques = gcnew NS_Comp_Mappage::CLmapStatistiques();
}

System::Data::DataSet^ NS_Comp_Svc::CLserviceStatistique::afficherArticleSousLeSeuil(System::String^ dataTableName) {
	System::String^ sql;
	sql = this->oMappStatistiques->SelectSousSeuilReap();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLserviceStatistique::afficherArticleMoinsVendu(System::String^ dataTableName) {
	System::String^ sql;
	sql = this->oMappStatistiques->SelectLessPopular();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLserviceStatistique::afficherArticlePlusVendu(System::String^ dataTableName) {
	System::String^ sql;
	sql = this->oMappStatistiques->SelectMostPopular();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLserviceStatistique::afficherChiffreAffMois(System::String^ dataTableName, System::String^ date_chiffre_affaire) {
	this->oMappStatistiques->setDateChiffreAffaire(date_chiffre_affaire);
	System::String^ sql;
	sql = this->oMappStatistiques->SelectChiffreAffaire();
	//return this->oCad->actionRowsID(sql);
	return this->oCad->getRows(sql, dataTableName);
}

int NS_Comp_Svc::CLserviceStatistique::ValeurAchatStock() {
	System::String^ sql;
	sql = " SELECT sum((prix_ht + prix_ht * tva)*qte_stock) FROM Article ";

	int valeur = this->oCad->actionRowsID(sql);
	return valeur;
}

int NS_Comp_Svc::CLserviceStatistique::ValeurCommercialStock() {
	System::String^ sql;
	sql = "SELECT sum(qte_stock*(prix_ht)) FROM Article;";
	
	int valeur = this->oCad->actionRowsID(sql);
	return valeur;
}

int NS_Comp_Svc::CLserviceStatistique::PanierMoyen() {
	System::String^ sql;
	sql = "SELECT Avg(montant_paye) FROM paiement";

	int valeur = this->oCad->actionRowsID(sql);
	return valeur;
}