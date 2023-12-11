#include "CLservicePersonnel.h" //Vrai orderlink

NS_Comp_Svc::CLservicesPersonnel::CLservicesPersonnel(void)
{
    this->oCad = gcnew NS_Comp_Data::CLcad();
    this->oMappPersonnel = gcnew NS_Comp_Mappage::CLmapPersonnel();
    this->oMappAdresse = gcnew NS_Comp_Mappage::CLmapAdresse();
}
System::Data::DataSet^ NS_Comp_Svc::CLservicesPersonnel::rechercherUnPersonnel(System::String^ dataTableName, System::String^ nom, System::String^ prenom)
{
    this->oMappPersonnel->setNomPersonnel(nom);
    this->oMappPersonnel->setPrenomPersonnel(prenom);

    System::String^ sql;

    sql = this->oMappPersonnel->Select();
    return this->oCad->getRows(sql, dataTableName);
}
int NS_Comp_Svc::CLservicesPersonnel::ajouterUnPersonnel(System::String^ nom, System::String^ prenom, int id_superieur, System::String^ date_embauche, System::String^ numero, System::String^ nom_rue, System::String^ code_postal, System::String^ ville)
{
    int id;
    System::String^ sql;
    if (nom != "") {
        this->oMappPersonnel->setNomPersonnel(nom);
    }
    if (prenom != "") {
        this->oMappPersonnel->setPrenomPersonnel(prenom);
    }
    if (numero != "") {
        this->oMappAdresse->setNumero(numero);
    }
    this->oMappPersonnel->setIdSuperieur(id_superieur);
    if (date_embauche != "") {
        this->oMappPersonnel->setDateEmbauche(date_embauche);
    }
    if (nom_rue != "") {
        this->oMappAdresse->setNomRue(nom_rue);
    }
    if (code_postal != "") {
        this->oMappAdresse->setCodePostal(code_postal);
    }
    if (ville != "") {
        this->oMappAdresse->setVille(ville);
    }
    if (nom != "" && prenom != "" && numero != "" && nom_rue != "" && code_postal != "" && ville != "") {
        sql = this->oMappAdresse->Insert();
        id = this->oCad->actionRowsID(sql);

        sql = this->oMappPersonnel->Insert(id);
        id = this->oCad->actionRowsID(sql);

        return id;
    }
    throw gcnew System::InvalidOperationException("Certaines valeurs obligatoires sont manquantes.");
    return -1;
}
void NS_Comp_Svc::CLservicesPersonnel::supprimerUnPersonnel(int id) {
    System::String^ sql;

    this->oMappPersonnel->setIdPersonnel(id);

    sql = this->oMappPersonnel->Delete();
    this->oCad->actionRows(sql);

}
void NS_Comp_Svc::CLservicesPersonnel::modifierUnPersonnel(int id, System::String^ nom, System::String^ prenom, int id_superieur, System::String^ date_embauche, System::String^ numero, System::String^ nom_rue, System::String^ code_postal, System::String^ ville) {
    System::String^ sql;
    int id_adresse;

    this->oMappPersonnel->setIdPersonnel(id);
    if (nom != "") {
        this->oMappPersonnel->setNomPersonnel(nom);
    }
    if (prenom != "") {
        this->oMappPersonnel->setPrenomPersonnel(prenom);
    }
    this->oMappPersonnel->setIdSuperieur(id_superieur);
    if (date_embauche != "")
    {
        this->oMappPersonnel->setDateEmbauche(date_embauche);
    }
    if (numero != "") {
        this->oMappAdresse->setNumero(numero);
    }
    if (nom_rue != "") {
        this->oMappAdresse->setNomRue(nom_rue);
    }
    if (code_postal != "") {
        this->oMappAdresse->setCodePostal(code_postal);
    }
    if (ville != "") {
        this->oMappAdresse->setVille(ville);
    }
    if (nom != "" && prenom != "" && numero != "" && nom_rue != "" && code_postal != "" && ville != "") {
        sql = "SELECT id_adresse FROM Personnel WHERE id_personnel = " + id + ";";
        id_adresse = this->oCad->actionRowsID(sql);

        this->oMappAdresse->setIdAdresse(id_adresse);

        sql = this->oMappAdresse->Update();
        this->oCad->actionRows(sql);

        sql = this->oMappPersonnel->Update();
        this->oCad->actionRows(sql);
    }
}