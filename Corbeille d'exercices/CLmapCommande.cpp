#include "CLmapCommande.h"

System::String^ NS_Comp_Mappage::CLmapCommande::Select(void)
{
    return "SELECT commande.id_commande, commande.reference, commande.date_cmd, commande.date_livraison, nom_client, prenom_client from Commande" +
        " join Client on Commande.id_client = Client.id_client" +
        " ORDER BY commande.id_commande";
}
System::String^ NS_Comp_Mappage::CLmapCommande::Insert(int Id_paiement, int Id_Client)
{
    return "INSERT INTO Commande (reference, date_cmd, date_livraison, Id_paiement, Id_Client, reduction)" +
        "VALUES('" + this->reference + "','" + this->date_cmd + "','" + this->date_livraison + "',"
        + Id_paiement + ", " +  Id_Client + ", " + this->reduction + "); SELECT @@IDENTITY; ";
}
System::String^ NS_Comp_Mappage::CLmapCommande::SelectUneCommande(void) {
    return "SELECT commande.id_commande, commande.reference, commande.date_cmd, commande.date_livraison, nom_client, prenom_client, nom_article, montant_paye, qte_commandee, qte_stock from Commande" +
        " join Client on Commande.id_client = client.id_client" + 
        " join Paiement on Commande.id_paiement = paiement.id_paiement" +
        " join ligne_commande on Commande.Id_Commande = ligne_commande.Id_Commande" +
        " join Article on ligne_commande.Id_Article = Article.Id_Article" +
        " WHERE commande.id_commande = " + this->id_commande +" ;";
}
System::String^ NS_Comp_Mappage::CLmapCommande::Delete(void)
{
    return "DELETE FROM Commande WHERE Id_Commande = " + this->id_commande + ";";
}
System::String^ NS_Comp_Mappage::CLmapCommande::Update(int id_client)
{
    return "UPDATE Commande set [date_livraison] = '"
        + this->date_livraison + "', [id_client] = " + id_client + " WHERE id_commande = " + this->id_commande +"; ";
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
void NS_Comp_Mappage::CLmapCommande::setReduction(int reduc)
{
    this->reduction = reduc;
}

int NS_Comp_Mappage::CLmapCommande::getIdCommande(void) { return this->id_commande; }
System::String^ NS_Comp_Mappage::CLmapCommande::getReference(void) { return this->reference; }
System::String^ NS_Comp_Mappage::CLmapCommande::getDateCommande(void) { return this->date_cmd; }
System::String^ NS_Comp_Mappage::CLmapCommande::getDateLivraison(void) { return this->date_livraison; }