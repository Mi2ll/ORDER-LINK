#pragma once
#include "CLCAD.h"
#include "CLmapStatistiques.h"
#include "CLmapArticle.h"
#include "CLmapLigneCommande.h"


namespace NS_Comp_Svc {

	ref class CLserviceStatistique {
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapStatistiques^ oMappStatistiques;
		NS_Comp_Mappage::CLmapArticle^ oMappArticle;
		NS_Comp_Mappage::CLmapLigneCommande^ oMappLigneCommande;

	public:
		CLserviceStatistique();
		System::Data::DataSet^ afficherArticleSousLeSeuil(System::String^ dataTableName);
		System::Data::DataSet^ afficherArticleMoinsVendu(System::String^ dataTableName);
		System::Data::DataSet^ afficherArticlePlusVendu(System::String^ dataTableName);
	};
}