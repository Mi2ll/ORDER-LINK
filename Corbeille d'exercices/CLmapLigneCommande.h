#pragma once
#include "CLmapCommande.h"
#include "CLmapArticle.h"

namespace NS_Comp_Mappage
{
    ref class CLmapLigneCommande
    {
    private:
        System::String^ sSql;
        int id_ligne_commande;
        int qte_commandee;
    public:
        System::String^ Select(void);
        System::String^ Insert(int, int);
        System::String^ Delete(System::String^, int, int);
        System::String^ Update(void);

        void setIdLigneCommande(int);
        void setQteCommandee(int);

        int getIdLigneCommande(void);
        int getQteCommandee(void);
    };
}