#include "CLmapLigneCommande.h"

System::String^ NS_Comp_Mappage::CLmapLigneCommande::Select(void)
{
    return "SELECT * FROM Ligne_commande JOIN Commande on [Ligne_commande].id_Commande = [Commande].id_Commande " +
        "JOIN Article on [Ligne_commande].Id_Article = [Article].Id_Article";
}
System::String^ NS_Comp_Mappage::CLmapLigneCommande::Insert(int Id_article, int id_commande)
{
    return "INSERT INTO Ligne_commande (qte_commandee, Id_Article, Id_Commande)" +
        "VALUES('" + this->qte_commandee + Id_article + id_commande + "); SELECT @@IDENTITY; ";
}
System::String^ NS_Comp_Mappage::CLmapLigneCommande::Delete(void)
{
    return "DELETE FROM Ligne_commande WHERE Id_Ligne_commande = " + this->id_ligne_commande + ";";
}
System::String^ NS_Comp_Mappage::CLmapLigneCommande::Update()
{
    return "UPDATE Ligne_commande set [Id_Ligne_commande] = '" + this->id_ligne_commande + "', [qte_commandee] = '"
        + this->qte_commandee + ";";
}
void NS_Comp_Mappage::CLmapLigneCommande::setIdLigneCommande(int Id)
{
    this->id_ligne_commande = Id;
}
void NS_Comp_Mappage::CLmapLigneCommande::setQteCommandee(int quantite)
{
    this->qte_commandee = quantite;
}

int NS_Comp_Mappage::CLmapLigneCommande::getIdLigneCommande(void) { return this->id_ligne_commande; }
int NS_Comp_Mappage::CLmapLigneCommande::getQteCommandee(void) { return this->qte_commandee; }