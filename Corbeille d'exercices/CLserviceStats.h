#pragma once
#include "CLCAD.h"
#include "CLmapStats.h"
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

		int ValeurCommercialStock();
		int ValeurAchatStock();
		int PanierMoyen();
		System::Data::DataSet^ afficherArticleSousLeSeuil(System::String^ dataTableName);
		System::Data::DataSet^ afficherArticleMoinsVendu(System::String^ dataTableName);
		System::Data::DataSet^ afficherArticlePlusVendu(System::String^ dataTableName);
		int afficherChiffreAffMois(System::String^);
		int afficherMontantAchatClient(System::String^);
	};
}