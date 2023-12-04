#include "CLmapAdresse.h"

System::String^ NS_Comp_Mappage::CLmapAdresse::Insert(void)
{
	return "INSERT INTO Adresse (numero, rue, ville, code_postal) VALUES('" + this->numero + "','" + this->nom_rue + "','" + this->ville + "','" + this->code_postal + "'); SELECT @@IDENTITY; ";
}
System::String^ NS_Comp_Mappage::CLmapAdresse::Delete(void)
{
	return "DELETE FROM [Adresse] WHERE id_adresse = " + this->id_adresse + ";";
}
System::String^ NS_Comp_Mappage::CLmapAdresse::Update(void)
{
	return "UPDATE [Adresse] set [rue] = '" + this->nom_rue + "', [numero] = '" + this->numero + "', [ville] = '" + this->ville + "', [code_postal] = '" + this->code_postal + "' WHERE id_adresse = " + this->id_adresse + "; ";
}
void NS_Comp_Mappage::CLmapAdresse::setIdAdresse(int id_adresse)
{
	this->id_adresse = id_adresse;
}
void NS_Comp_Mappage::CLmapAdresse::setNomRue(System::String^ nom_rue)
{
	this->nom_rue = nom_rue;
}
void NS_Comp_Mappage::CLmapAdresse::setNumero(System::String^ numero)
{
	this->numero = numero;
}void NS_Comp_Mappage::CLmapAdresse::setCodePostal(System::String^ code_postal)
{
	this->code_postal = code_postal;
}void NS_Comp_Mappage::CLmapAdresse::setVille(System::String^ ville)
{
	this->ville = ville;
}
int NS_Comp_Mappage::CLmapAdresse::getIdAdresse(void) { return this->id_adresse; }
System::String^ NS_Comp_Mappage::CLmapAdresse::getNomRue(void) { return this->nom_rue; }
System::String^ NS_Comp_Mappage::CLmapAdresse::getVille(void) { return this->ville; }
System::String^ NS_Comp_Mappage::CLmapAdresse::getCodePostal(void) { return this->code_postal; }
System::String^ NS_Comp_Mappage::CLmapAdresse::getNumero(void) { return this->numero; }
