#pragma once
#include "CLCAD.h"
#include "CLmapStatistiques.h"
#include "CLmapArticle.h"
#include "CLmapLigneCommande.h"
#include "CLmapPaiement.h"


namespace NS_Comp_Svc {

	ref class CLserviceStatistique {
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapStatistiques^ oMappStatistiques;
		NS_Comp_Mappage::CLmapArticle^ oMappArticle;
		NS_Comp_Mappage::CLmapLigneCommande^ oMappLigneCommande;
		NS_Comp_Mappage::CLmapPaiement^ oMappPaiement; 

	public:
		CLserviceStatistique();
		System::Data::DataSet^ afficherArticleSousLeSeuil(System::String^ dataTableName);
		System::Data::DataSet^ afficherArticleMoinsVendu(System::String^ dataTableName);
		System::Data::DataSet^ afficherArticlePlusVendu(System::String^ dataTableName);
		System::Data::DataSet^ afficherChiffreAffMois(System::String^, System::String^);
		System::Data::DataSet^ afficherMontantAchatClient(System::String^, System::String^);
	};
}