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

int NS_Comp_Svc::CLserviceStatistique::afficherChiffreAffMois(System::String^ date_chiffre_affaire) {
	this->oMappStatistiques->setDateChiffreAffaire(date_chiffre_affaire);
	System::String^ sql;
	sql = this->oMappStatistiques->SelectChiffreAffaire();
	return this->oCad->actionRowsID(sql);
}

int NS_Comp_Svc::CLserviceStatistique::afficherMontantAchatClient(System::String^ id_client) {
	this->oMappStatistiques->setIdClient(System::Convert::ToInt32(id_client));
	System::String^ sql;
	sql = this->oMappStatistiques->SelectClientMontantAchat();
	return this->oCad->actionRowsID(sql);
}