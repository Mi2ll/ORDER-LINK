#include "CLmapCommande.h"

System::String^ NS_Comp_Mappage::CLmapCommande::Select(void)
{
    return "SELECT * FROM Commande JOIN Paiement on [Commande].id_Paiement = [Paiement].id_paiement " +
        "JOIN Client on [Commande].Id_Client = [Client].Id_Client";
}
System::String^ NS_Comp_Mappage::CLmapCommande::Insert(int Id_paiement, int Id_Client)
{
    return "INSERT INTO Commande (reference, date_cmd, date_livraison, Id_paiement, Id_Client)" +
        "VALUES('" + this->reference + "','" + this->date_cmd + "','" + this->date_livraison + "','"
        + Id_paiement + Id_Client + "); SELECT @@IDENTITY; ";
}
System::String^ NS_Comp_Mappage::CLmapCommande::Delete(void)
{
    return "DELETE FROM Commande WHERE Id_Commande = " + this->id_commande + ";";
}
System::String^ NS_Comp_Mappage::CLmapCommande::Update(void)
{
    return "UPDATE Commande set [id_commande] = '" + this->id_commande + "', [reference] = '"
        + this->reference + "', [date_cmd] = '" + this->date_cmd + "', [date_livraison] = '"
        + this->date_livraison + ";";
}
void NS_Comp_Mappage::CLmapCommande::setIdCommande(int Id)
{
    this->id_commande = Id;
}
void NS_Comp_Mappage::CLmapCommande::setReference(System::String^ reference_cmd)
{
    this->reference = reference_cmd;
}
void NS_Comp_Mappage::CLmapCommande::setDateCommande(System::String^ dateCommande)
{
    this->date_cmd = dateCommande;
}
void NS_Comp_Mappage::CLmapCommande::setDateLivraison(System::String^ dateLivraison)
{
    this->date_livraison = dateLivraison;
}

int NS_Comp_Mappage::CLmapCommande::getIdCommande(void) { return this->id_commande; }
System::String^ NS_Comp_Mappage::CLmapCommande::getReference(void) { return this->reference; }
System::String^ NS_Comp_Mappage::CLmapCommande::getDateCommande(void) { return this->date_cmd; }
System::String^ NS_Comp_Mappage::CLmapCommande::getDateLivraison(void) { return this->date_livraison; }