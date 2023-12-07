#pragma once

#include "CLmapArticle.h"
#include "CLCAD.h"

namespace NS_Comp_Svc
{
    ref class CLservicestock
    {
    private:
        NS_Comp_Data::CLcad^ oCad;
        NS_Comp_Mappage::CLmapArticle^ oMappArticle;

    public:
        CLservicestock(void);
        System::Data::DataSet^ rechercherUnArticle(System::String^, System::String^);
        int ajouterUnArticle(System::String^, int, int, System::String^, System::String^, System::String^, System::String^);
        void supprimerUnArticle(int);
        void modifierUnArticle(int, System::String^, int, int, System::String^, System::String^, System::String^, System::String^);
    };
}