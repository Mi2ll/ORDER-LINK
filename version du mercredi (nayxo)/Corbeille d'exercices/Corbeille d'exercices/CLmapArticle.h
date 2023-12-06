#pragma once

namespace NS_Comp_Mappage
{
    ref class CLmapArticle
    {
    private:
        System::String^ sSql;
        System::String^ NomArticle;
        int Id_article;
        int qte_stock;
        int seuil_reappro;
        System::String^ prix_ht;
        System::String^ tva;
        System::String^ nature;
        System::String^ couleur;
    public:
        System::String^ Select(void);
        System::String^ Insert();
        System::String^ Delete(void);
        System::String^ Update(void);

        void setIdArticle(int);
        void setNomArticle(System::String^);
        void setQteStock(int);
        void setSeuil(int);
        void setPrixHt(System::String^);
        void setTva(System::String^);
        void setNature(System::String^);
        void setCouleur(System::String^);

        int getIdArticle(void);
        System::String^ getNomArticle(void);
        int getQteStock(void);
        int getSeuil(void);
        System::String^ getPrixHt(void);
        System::String^ getTva(void);
        System::String^ getNature(void);
        System::String^ getCouleur(void);
    };
}