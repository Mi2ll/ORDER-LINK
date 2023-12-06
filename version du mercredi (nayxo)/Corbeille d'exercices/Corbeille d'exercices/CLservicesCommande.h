#pragma once

#include "CLmapCommande.h"
#include "CLmapPaiement.h"
#include "CLmapClient.h" 
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
    public:
        CLservicesCommande(void);
        System::Data::DataSet^ rechercherUneCommande(System::String^, int);
        // int ajouterUneCommande(int, System::String^, System::String^, System::String^, int, int);
        void supprimerUneCommande(int);
        // void modifierUneCommande(int, System::String^, System::String^, System::String^, int, int);
    };
}