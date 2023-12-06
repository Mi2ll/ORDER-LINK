#include "CL_map_TBPERSONNE.h"

using namespace System;

namespace NS_Composants {
	CL_map_TBPERSONNE::CL_map_TBPERSONNE() {
		this->id_personne = 0;
		this->nom = "RIEN";
		this->prenom = "RIEN";
	}
	String^ CL_map_TBPERSONNE::SELECT() {
		return "SELECT id_personne, nom, prenom" + "FROM TB_PERSONNE2";
	}
	String^ CL_map_TBPERSONNE::INSERT() {
		return "INSERT INTO TB_PERSONNE2" + "(nom, prenom)" + "VALUES('" + this->getNom() + "', '" + this->getPrenom() + "');SELECT @@IDENTITY";
	}
	String^ CL_map_TBPERSONNE::UPDATE() {
		return "UPDATE TB_PERSONNE2" + "SET nom = '" + this->getNom() + "', prenom = '" + this->getPrenom()
			+ "'" + "WHERE (id_personne = " + this->getId() + ");";
	}
	String^ CL_map_TBPERSONNE::DELETE() {
		return "DELETE FROM TB_PERSONNE2 " + "WHERE(id_personne = " + this->getId() + ");";
	}
	void CL_map_TBPERSONNE::setId(int id_personne) {
		if (id_personne != 0) {
			this->id_personne = id_personne;
		}
	}
	void CL_map_TBPERSONNE::setNom(String^ nom) {
		if (nom != "") {
			this->nom = nom;
		}
	}
	void CL_map_TBPERSONNE::setPrenom(String^ prenom) {
		if (prenom != "") {
			this->prenom = prenom;
		}
	}
	int CL_map_TBPERSONNE::getId() {
		return this->id_personne;
	}
	String^ CL_map_TBPERSONNE::getNom() {
		return this->nom;
	}
	String^ CL_map_TBPERSONNE::getPrenom() {
		return this->prenom;
	}
}