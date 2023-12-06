#include "CLserviceClient.h" 

NS_Comp_Svc::CLservicesClient::CLservicesClient(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappClient = gcnew NS_Comp_Mappage::CLmapClient();
	this->oMappAdresseFact = gcnew NS_Comp_Mappage::CLmapAdresse();
	this->oMappAdresseLivre = gcnew NS_Comp_Mappage::CLmapAdresse();
}
System::Data::DataSet^ NS_Comp_Svc::CLservicesClient::rechercherUnClient(System::String^ dataTableName, System::String^ nom, System::String^ prenom)
{
	this->oMappClient->setNomClient(nom);
	this->oMappClient->setPrenomClient(prenom);

	System::String^ sql;

	sql = this->oMappClient->Select();
	return this->oCad->getRows(sql, dataTableName);
}
int NS_Comp_Svc::CLservicesClient::ajouterUnClient(System::String^ nom, System::String^ prenom, System::String^ date_naissance, System::String^ numero_livre, System::String^ nom_rue_livre, System::String^ code_postal_livre, System::String^ ville_livre, System::String^ numero_fact, System::String^ nom_rue_fact, System::String^ code_postal_fact, System::String^ ville_fact)
{
	int id;
	int id_fact;
	int id_livre;
	System::String^ sql;
	if (nom != "") {
		this->oMappClient->setNomClient(nom);
	}
	if (prenom != "") {
		this->oMappClient->setPrenomClient(prenom);
	}
	if (numero_livre != "") {
		this->oMappAdresseFact->setNumero(numero_fact);
	}
	if (date_naissance != "") {
		this->oMappClient->setDateNaissance(date_naissance);
	}
	if (nom_rue_livre != "") {
		this->oMappAdresseFact->setNomRue(nom_rue_fact);
	}
	if (code_postal_livre != "") {
		this->oMappAdresseFact->setCodePostal(code_postal_fact);
	}
	if (ville_livre!= "") {
		this->oMappAdresseFact->setVille(ville_fact);
	}
	if (numero_livre != "") {
		this->oMappAdresseLivre->setNumero(numero_livre);
	}
	if (nom_rue_livre != "") {
		this->oMappAdresseLivre->setNomRue(nom_rue_livre);
	}
	if (code_postal_livre != "") {
		this->oMappAdresseLivre->setCodePostal(code_postal_livre);
	}
	if (ville_livre != "") {
		this->oMappAdresseLivre->setVille(ville_livre);
	}
	if (nom != "" && prenom != "" && numero_fact != "" && nom_rue_fact != "" && code_postal_fact != "" && ville_fact != "" && numero_livre != "" && nom_rue_livre != "" && code_postal_livre != "" && ville_livre != "") {
		sql = this->oMappAdresseFact->Select();
		id_fact = this->oCad->actionRowsID(sql);
		if (id_fact == 0) {
			sql = this->oMappAdresseFact->Insert();
			id_fact = this->oCad->actionRowsID(sql);
		}

		sql = this->oMappAdresseLivre->Select();
		id_livre = this->oCad->actionRowsID(sql);
		if (id_livre == 0) {
			sql = this->oMappAdresseLivre->Insert();
			id_livre = this->oCad->actionRowsID(sql);
		}

		sql = this->oMappClient->Insert(id_fact, id_livre);
		id = this->oCad->actionRowsID(sql);

		return id;
	}
	return -1;
}
void NS_Comp_Svc::CLservicesClient::supprimerUnClient(int id) {
	System::String^ sql;

	this->oMappClient->setIdClient(id);

	sql = this->oMappClient->Delete();
	this->oCad->actionRows(sql);
}
void NS_Comp_Svc::CLservicesClient::modifierUnClient(int id, System::String^ nom, System::String^ prenom, System::String^ date_naissance, System::String^ numero_livre, System::String^ nom_rue_livre, System::String^ code_postal_livre, System::String^ ville_livre, System::String^ numero_fact, System::String^ nom_rue_fact, System::String^ code_postal_fact, System::String^ ville_fact) {
	System::String^ sql;
	int id_adresse;

	this->oMappClient->setIdClient(id);
	if (nom != "") {
		this->oMappClient->setNomClient(nom);
	}
	if (prenom != "") {
		this->oMappClient->setPrenomClient(prenom);
	}
	if (date_naissance != "")
	{
		this->oMappClient->setDateNaissance(date_naissance);
	}
	if (numero_fact != "") {
		this->oMappAdresseFact->setNumero(numero_fact);
	}
	if (nom_rue_fact != "") {
		this->oMappAdresseFact->setNomRue(nom_rue_fact);
	}
	if (code_postal_fact != "") {
		this->oMappAdresseFact->setCodePostal(code_postal_fact);
	}
	if (ville_fact != "") {
		this->oMappAdresseFact->setVille(ville_fact);
	}
	if (numero_livre != "") {
		this->oMappAdresseLivre->setNumero(numero_livre);
	}
	if (nom_rue_livre != "") {
		this->oMappAdresseLivre->setNomRue(nom_rue_livre);
	}
	if (code_postal_livre != "") {
		this->oMappAdresseLivre->setCodePostal(code_postal_livre);
	}
	if (ville_livre != "") {
		this->oMappAdresseLivre->setVille(ville_livre);
	}
	if (nom != "" && prenom != "" && numero_fact != "" && nom_rue_fact != "" && code_postal_fact != "" && ville_fact != "" && numero_livre != "" && nom_rue_livre != "" && code_postal_livre != "" && ville_livre != "") {
		
		sql = "SELECT id_adresse_facture FROM Client WHERE id_client = " + id + ";";
		id_adresse = this->oCad->actionRowsID(sql);
		this->oMappAdresseFact->setIdAdresse(id_adresse);

		sql = this->oMappAdresseFact->Update();
		this->oCad->actionRows(sql);

		sql = "SELECT id_adresse_livre FROM Client WHERE id_client = " + id + ";";
		id_adresse = this->oCad->actionRowsID(sql);
		this->oMappAdresseLivre->setIdAdresse(id_adresse);

		sql = this->oMappAdresseLivre->Update();
		this->oCad->actionRows(sql);

		sql = this->oMappClient->Update();
		this->oCad->actionRows(sql);
	}
}
