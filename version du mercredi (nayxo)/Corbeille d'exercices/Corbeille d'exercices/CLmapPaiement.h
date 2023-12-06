#pragma once

namespace NS_Comp_Mappage
{
    ref class CLmapPaiement
    {
    private:
        System::String^ sSql;
        int id_paiement;
        System::String^ date_paiement;
        System::String^ montant_paye;
        System::String^ montant_ht;
        System::String^ tva;
    public:
        System::String^ Insert(void);
        System::String^ Delete(void);
        System::String^ Update(void);

        void setIdPaiement(int);
        void setDatePaiement(System::String^);
        void setMontantPaye(System::String^);
        void setMontantHT(System::String^);
        void setTVA(System::String^);

        int getIdPaiement(void);
        System::String^ getDatePaiement(void);
        System::String^ getMontantPaye(void);
        System::String^ getMontantHT(void);
        System::String^ getTVA(void);
    };
}