#include "CL_CAD.h"
#include "CL_map_TBPERSONNE.h"
#include "CL_svc_gestionPersonnes.h"

using namespace System;

namespace NS_Svc {
	CL_svc_gestionPersonnes::CL_svc_gestionPersonnes() {
		this->cad = gcnew NS_Composants::CL_CAD();
		this->personne = gcnew NS_Composants::CL_map_TBPERSONNE();
		this->ds = gcnew Data::DataSet();
	}
	DataSet^ CL_svc_gestionPersonnes::listePersonnes(String^ dataTableName)
	{
		this->ds->Clear();
		this->ds = this->cad->getRows(this->personne->SELECT(), dataTableName);
		return this->ds;
	}
	int CL_svc_gestionPersonnes::ajouter(String^ nom, String^ prenom)
	{
		int id_personne;
		this->personne->setNom(nom);
		this->personne->setPrenom(prenom);
		id_personne = this->cad->actionRowsID(this->personne->INSERT());
		return id_personne;
	}
	void CL_svc_gestionPersonnes::modifier(int id_personne, String^ nom, String^ prenom)
	{
		this->personne->setId(id_personne);
		this->personne->setNom(nom);
		this->personne->setPrenom(prenom);
		this->cad->actionRows(this->personne->UPDATE());
	}
	void CL_svc_gestionPersonnes::supprimer(int id_personne)
	{
		this->personne->setId(id_personne);
		this->cad->actionRows(this->personne->DELETE());
	}
}