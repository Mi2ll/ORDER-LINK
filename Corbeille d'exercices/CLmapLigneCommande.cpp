#include "CLmapLigneCommande.h"

System::String^ NS_Comp_Mappage::CLmapLigneCommande::Select(void)
{
    return "SELECT * FROM Ligne_commande JOIN Commande on [Ligne_commande].id_Commande = [Commande].id_Commande " +
        "JOIN Article on [Ligne_commande].Id_Article = [Article].Id_Article";
}
System::String^ NS_Comp_Mappage::CLmapLigneCommande::Insert(int Id_article, int id_commande)
{
    return "INSERT INTO Ligne_commande (qte_commandee, Id_Article, Id_Commande)" +
        "VALUES(" + this->qte_commandee + ", " + Id_article + ", " + id_commande + "); SELECT qte_commandee * (prix_ht + prix_ht * tva) FROM article join ligne_commande on article.id_article = ligne_commande.id_article WHERE article.id_article = " + Id_article + " and id_commande = " + id_commande + "; " +
        "UPDATE Article set [qte_stock] = qte_stock - " + this->qte_commandee + "where ID_article = '" + Id_article + "'; ";
}
System::String^ NS_Comp_Mappage::CLmapLigneCommande::Delete(System::String^ nom_article, int id_commande, int qte)
{
    return "DELETE from Ligne_commande where id_ligne_commande = (select Id_ligne_commande from commande" +
        " join ligne_commande on commande.id_commande = ligne_commande.id_commande" +
        " join article on ligne_commande.Id_Article = article.Id_Article" +
        " where ligne_commande.Id_Article = (SELECT article.id_article where nom_article = '" + nom_article + "')" +
        " and commande.Id_Commande = " + id_commande + ");" + 
        "UPDATE Article set [qte_stock] = qte_stock + " + qte + "where nom_article = '" + nom_article + "'; ";
}
System::String^ NS_Comp_Mappage::CLmapLigneCommande::Update(int id_article, int id_commande)
{
    return "UPDATE Ligne_commande set [qte_commandee] = qte_commandee + " + this->qte_commandee + " WHERE id_ligne_commande = " + this->id_ligne_commande + ";  SELECT " + this->qte_commandee + " * (prix_ht + prix_ht * tva) FROM article join ligne_commande on article.id_article = ligne_commande.id_article WHERE article.id_article = " + id_article + " and id_commande = " + id_commande + "; " +
        "UPDATE Article set[qte_stock] = qte_stock - " + this->qte_commandee + "where ID_article = '" + id_article + "'; ";
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