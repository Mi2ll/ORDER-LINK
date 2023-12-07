#pragma once

namespace NS_Comp_Mappage
{
    ref class CLmapCommande
    {
    private:
        System::String^ sSql;
        int id_commande;
        System::String^ reference;
        System::String^ date_cmd;
        System::String^ date_livraison;
        int reduction;
    public:
        System::String^ Select(void);
        System::String^ Insert(int, int);
        System::String^ Delete(void);
        System::String^ Update(int);
        System::String^ SelectUneCommande(void);

        void setIdCommande(int);
        void setReduction(int);
        void setReference(System::String^);
        void setDateCommande(System::String^);
        void setDateLivraison(System::String^);

        int getIdCommande(void);
        System::String^ getReference(void);
        System::String^ getDateCommande(void);
        System::String^ getDateLivraison(void);
    };
}