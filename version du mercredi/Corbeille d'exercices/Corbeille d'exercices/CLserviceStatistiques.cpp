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