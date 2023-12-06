#include "CLmapPaiement.h"

System::String^ NS_Comp_Mappage::CLmapPaiement::Insert(void)
{
    return "INSERT INTO Paiement (date_paiement, montant_paye, montant_ht, tva) VALUES('" + this->date_paiement + "','" + this->montant_paye + "','" + this->montant_ht + "','" + this->tva + "'); SELECT @@IDENTITY; ";
}
System::String^ NS_Comp_Mappage::CLmapPaiement::Delete(void)
{
    return "DELETE FROM [Paiement] WHERE Id_Paiement = " + this->id_paiement + ";";
}
System::String^ NS_Comp_Mappage::CLmapPaiement::Update(void)
{
    return "UPDATE [Paiement] set [date_paiement] = '" + this->date_paiement + "', [montant_paye] = '" + this->montant_paye + "', [montant_ht] = '" + this->montant_ht + "', [tva] = '" + this->tva + "' WHERE Id_Paiement = " + this->id_paiement + "; ";
}
void NS_Comp_Mappage::CLmapPaiement::setIdPaiement(int id_paiement)
{
    this->id_paiement = id_paiement;
}
void NS_Comp_Mappage::CLmapPaiement::setDatePaiement(System::String^ date_paiement)
{
    this->date_paiement = date_paiement;
}
void NS_Comp_Mappage::CLmapPaiement::setMontantHT(System::String^ montant_ht)
{
    this->montant_ht = montant_ht;
}
void NS_Comp_Mappage::CLmapPaiement::setMontantPaye(System::String^ montant_paye)
{
    this->montant_paye = montant_paye;
}
void NS_Comp_Mappage::CLmapPaiement::setTVA(System::String^ TvA)
{
    this->tva = TvA;
}

int NS_Comp_Mappage::CLmapPaiement::getIdPaiement(void) { return this->id_paiement; }
System::String^ NS_Comp_Mappage::CLmapPaiement::getMontantPaye(void) { return this->montant_paye; }
System::String^ NS_Comp_Mappage::CLmapPaiement::getMontantHT(void) { return this->montant_ht; }
System::String^ NS_Comp_Mappage::CLmapPaiement::getTVA(void) { return this->tva; }
System::String^ NS_Comp_Mappage::CLmapPaiement::getDatePaiement(void) { return this->date_paiement; }