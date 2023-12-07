#pragma once

#include "CLmapCommande.h"
#include "CLmapPaiement.h"
#include "CLmapClient.h" 
#include "CLmapLigneCommande.h"
#include "CLmapArticle.h"
#include "CLCAD.h"

namespace NS_Comp_Svc
{
    ref class CLservicesCommande
    {
    private:
        NS_Comp_Data::CLcad^ oCad;
        NS_Comp_Mappage::CLmapCommande^ oMappCommande;
        NS_Comp_Mappage::CLmapPaiement^ oMappPaiement;
        NS_Comp_Mappage::CLmapClient^ oMappClient;
        NS_Comp_Mappage::CLmapArticle^ oMappArticle;
        NS_Comp_Mappage::CLmapLigneCommande^ oMappLigne;
    public:
        CLservicesCommande(void);
        System::Data::DataSet^ rechercherLesCommandes(System::String^, int);
        System::Data::DataSet^ rechercherUneCommande(System::String^, int);
        int ajouterUneCommande(System::String^, System::String^, int);
        void supprimerUneCommande(int);
        void modifierUneCommande(int, int, System::String^);
        void ajouterLigneCommande(System::String^, int, int);
        void supprimerLigneCommande(System::String^, int);
        int hasReduction(int, System::String^);
    };
}