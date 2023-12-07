#include "CLmapPersonnel.h"

System::String^ NS_Comp_Mappage::CLmapPersonnel::Select(void)
{
	return "SELECT * FROM Personnel LEFT JOIN Adresse on [Personnel].id_adresse = [Adresse].id_adresse WHERE nom_personnel LIKE '%" + this->nom_personnel + "%' and prenom_personnel LIKE '%" + this->prenom_personnel + "%'; ";
}
System::String^ NS_Comp_Mappage::CLmapPersonnel::Insert(int id_adresse)
{
	return "INSERT INTO Personnel (nom_personnel, prenom_personnel, date_embauche, id_superieur, id_adresse) VALUES('" + this->nom_personnel + "','" + this->prenom_personnel + "','" + this->date_embauche + "','" + this->id_superieur + "'," + id_adresse + "); SELECT @@IDENTITY; ";
}
System::String^ NS_Comp_Mappage::CLmapPersonnel::Delete(void)
{
	return "DELETE FROM Personnel WHERE id_personnel = " + this->id_personnel + ";";
}
System::String^ NS_Comp_Mappage::CLmapPersonnel::Update(void)
{
	return "UPDATE Personnel set [nom_personnel] = '" + this->nom_personnel + "', [prenom_personnel] = '" + this->prenom_personnel + "', [date_embauche] = '" + this->date_embauche + "', [id_superieur] = '" + this->id_superieur + "' WHERE id_personnel = " + this->id_personnel + ";";
}
void NS_Comp_Mappage::CLmapPersonnel::setIdPersonnel(int Id)
{
	this->id_personnel = Id;
}
void NS_Comp_Mappage::CLmapPersonnel::setNomPersonnel(System::String^ nom)
{
	this->nom_personnel = nom;
}
void NS_Comp_Mappage::CLmapPersonnel::setPrenomPersonnel(System::String^ prenom)
{
	this->prenom_personnel = prenom;
}
void NS_Comp_Mappage::CLmapPersonnel::setIdSuperieur(int idSuperieur)
{
	this->id_superieur = idSuperieur;
}
void NS_Comp_Mappage::CLmapPersonnel::setDateEmbauche(System::String^ date_embauche)
{
	this->date_embauche = date_embauche;
}
int NS_Comp_Mappage::CLmapPersonnel::getIdPersonnel(void) { return this->id_personnel; }
System::String^ NS_Comp_Mappage::CLmapPersonnel::getNomPersonnel(void) { return this->nom_personnel; }
System::String^ NS_Comp_Mappage::CLmapPersonnel::getPrenomPersonnel(void) { return this->prenom_personnel; }
int NS_Comp_Mappage::CLmapPersonnel::getIdSuperieur(void) { return this->id_superieur; }
System::String^ NS_Comp_Mappage::CLmapPersonnel::getDateEmbauche(void) { return this->date_embauche; }
