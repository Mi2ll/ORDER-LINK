#include "CLmapClient.h"

System::String^ NS_Comp_Mappage::CLmapClient::Select(void)
{
	return "SELECT * FROM Client LEFT JOIN Adresse on [Client].id_adresse_facture = [Adresse].id_adresse WHERE nom_client LIKE '%" + this->nom_client + "%' and prenom_client LIKE '%" + this->prenom_client + "%'; ";
}
System::String^ NS_Comp_Mappage::CLmapClient::Insert(int id_fact, int id_livre)
{
	return "INSERT INTO Client (nom_client, prenom_client, date_naissance, id_adresse_facture, id_adresse_livre) VALUES('" + this->nom_client + "','" + this->prenom_client + "','" + this->date_naissance + "'," + id_fact + "," + id_livre + "); SELECT @@IDENTITY; ";
}
System::String^ NS_Comp_Mappage::CLmapClient::Delete(void)
{
	return "DELETE FROM Client WHERE id_client = " + this->id_client + ";";
}
System::String^ NS_Comp_Mappage::CLmapClient::Update(void)
{
	return "UPDATE Client set [nom_client] = '" + this->nom_client + "', [prenom_client] = '" + this->prenom_client + "', [date_naissance] = '" + this->date_naissance + "' WHERE id_client = " + this->id_client + ";";
}
void NS_Comp_Mappage::CLmapClient::setIdClient(int Id)
{
	this->id_client = Id;
}
void NS_Comp_Mappage::CLmapClient::setNomClient(System::String^ nom)
{
	this->nom_client = nom;
}
void NS_Comp_Mappage::CLmapClient::setPrenomClient(System::String^ prenom)
{
	this->prenom_client = prenom;
}
void NS_Comp_Mappage::CLmapClient::setDateNaissance(System::String^ date_naissance)
{
	this->date_naissance = date_naissance;
}
int NS_Comp_Mappage::CLmapClient::getIdClient(void) { return this->id_client; }
System::String^ NS_Comp_Mappage::CLmapClient::getNomClient(void) { return this->nom_client; }
System::String^ NS_Comp_Mappage::CLmapClient::getPrenomClient(void) { return this->prenom_client; }
System::String^ NS_Comp_Mappage::CLmapClient::getDateNaissance(void) { return this->date_naissance; }
