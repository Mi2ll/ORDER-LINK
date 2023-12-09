#include "CLserviceStats.h"
#include "CLSimulation.h"


NS_Comp_Svc::CLserviceStatistique::CLserviceStatistique(void) {
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappArticle = gcnew NS_Comp_Mappage::CLmapArticle();
	this->oMappLigneCommande = gcnew NS_Comp_Mappage::CLmapLigneCommande();
	this->oMappStatistiques = gcnew NS_Comp_Mappage::CLmapStatistiques();
}

System::Data::DataSet^ NS_Comp_Svc::CLserviceStatistique::afficherArticleSousLeSeuil(System::String^ dataTableName) {
	System::String^ sql;
	sql = this->oMappStatistiques->SelectSousSeuilReap();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLserviceStatistique::afficherArticleMoinsVendu(System::String^ dataTableName) {
	System::String^ sql;
	sql = this->oMappStatistiques->SelectLessPopular();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLserviceStatistique::afficherArticlePlusVendu(System::String^ dataTableName) {
	System::String^ sql;
	sql = this->oMappStatistiques->SelectMostPopular();
	return this->oCad->getRows(sql, dataTableName);
}

int NS_Comp_Svc::CLserviceStatistique::afficherChiffreAffMois(System::String^ date_chiffre_affaire) {
	this->oMappStatistiques->setDateChiffreAffaire(date_chiffre_affaire);
	System::String^ sql;
	sql = this->oMappStatistiques->SelectChiffreAffaire();
	return this->oCad->actionRowsID(sql);
}

int NS_Comp_Svc::CLserviceStatistique::afficherMontantAchatClient(System::String^ id_client) {
	this->oMappStatistiques->setIdClient(System::Convert::ToInt32(id_client));
	System::String^ sql;
	sql = this->oMappStatistiques->SelectClientMontantAchat();
	return this->oCad->actionRowsID(sql);
}

int NS_Comp_Svc::CLserviceStatistique::ValeurAchatStock(System::String^ marge, System::String^ remise, System::String^ demarque) {
	System::String^ sql;
	int marge_int = System::Convert::ToInt32(marge);
	int remise_int = System::Convert::ToInt32(remise);
	int demarque_int = System::Convert::ToInt32(demarque);

	if (marge_int < 10) {
		marge = "0" + marge;
	}
	if (remise_int < 10) {
		remise = "0" + remise;
	}
	if (demarque_int < 10) {
		demarque = "0" + demarque;
	}

	sql = " SELECT ((sum((prix_ht + prix_ht * tva)*qte_stock) * 1." + marge + ") * (1-0." + remise + ")) * (1-0." + demarque + ") FROM Article ";

	int valeur = this->oCad->actionRowsID(sql);
	return valeur;
}

int NS_Comp_Svc::CLserviceStatistique::ValeurCommercialStock() {
	System::String^ sql;
	sql = "SELECT sum(qte_stock*(prix_ht)) FROM Article;";

	int valeur = this->oCad->actionRowsID(sql);
	return valeur;
}

int NS_Comp_Svc::CLserviceStatistique::PanierMoyen() {
	System::String^ sql;
	sql = "SELECT Avg(montant_paye) FROM paiement";

	int valeur = this->oCad->actionRowsID(sql);
	return valeur;
}

float NS_Comp_Svc::CLserviceStatistique::Simulation(int valeur, System::String^ tva, System::String^ marge, System::String^ remise, System::String^ demarque) {
	CLSimulation^ oSimu = gcnew CLSimulation();

	if (System::Convert::ToInt32(tva) < 10) {
		tva = "0" + tva;
	}
	if (System::Convert::ToInt32(marge) < 10) {
		marge = "0" + marge;
	}
	if (System::Convert::ToInt32(remise) < 10) {
		remise = "0" + remise;
	}
	if (System::Convert::ToInt32(demarque) < 10) {
		demarque = "0" + demarque;
	}

	oSimu->setTva(tva);
	oSimu->setMarge(marge);
	oSimu->setRemise(remise);
	oSimu->setDemarque(demarque);

	CLSimulation::FonctionMembreDelegate^ ptrFonction = gcnew CLSimulation::FonctionMembreDelegate(oSimu, &CLSimulation::tvaCalcul);
	valeur = ptrFonction(valeur);

	ptrFonction = gcnew CLSimulation::FonctionMembreDelegate(oSimu, &CLSimulation::margeCalcul);
	valeur = ptrFonction(valeur);

	ptrFonction = gcnew CLSimulation::FonctionMembreDelegate(oSimu, &CLSimulation::remiseCalcul);
	valeur = ptrFonction(valeur);
	
	ptrFonction = gcnew CLSimulation::FonctionMembreDelegate(oSimu, &CLSimulation::demarqueCalcul);
	valeur = ptrFonction(valeur);

	return valeur;
}