#include "CLmapArticle.h"

System::String ^ NS_Comp_Mappage::CLmapArticle::Select(void) {
	return "SELECT * FROM Article";
}

System::String^ NS_Comp_Mappage::CLmapArticle::Insert() {
	return "INSERT INTO Article (nom_article, qte_stock, seuil_reappro, prix_ht, tva, nature, couleur) VALUES ('" + this->NomArticle + "', " + this->qte_stock + ", " + this->seuil_reappro + ", " + this->prix_ht + ", " + this->tva + ", '" + this->nature + "', '" + this->couleur + "'); SELECT @@IDENTITY ;";
}

System::String^ NS_Comp_Mappage::CLmapArticle::Update(void) {
	return "UPDATE Article SET nom_article = '" + this->NomArticle + "', qte_stock = '" + this->qte_stock + "', seuil_reappro = '" + this->seuil_reappro + "', prix_ht = '" + this->prix_ht + "', tva = '" + this->tva + "', nature = '" + this->nature + "', couleur = '" + this->couleur + "' WHERE id_article = " + this->Id_article;

}

System::String^ NS_Comp_Mappage::CLmapArticle::Delete(void) {
	return "DELETE FROM Article WHERE Id_article = " + this->Id_article + ";";
}

void NS_Comp_Mappage::CLmapArticle::setIdArticle(int id) {
	this->Id_article = id;
}

void NS_Comp_Mappage::CLmapArticle::setNomArticle(System::String^ nom) {
	this->NomArticle = nom;
}


void NS_Comp_Mappage::CLmapArticle::setQteStock(int qtestock) {
	this->qte_stock = qtestock;
}

void NS_Comp_Mappage::CLmapArticle::setSeuil(int seuil) {
	this->seuil_reappro = seuil;
}

void NS_Comp_Mappage::CLmapArticle::setPrixHt(System::String^ prixht) {
	this->prix_ht = prixht;
}

void NS_Comp_Mappage::CLmapArticle::setTva(System::String^ tva) {
	this->tva = tva;
}


void NS_Comp_Mappage::CLmapArticle::setNature(System::String^ nature) {
	this->nature = nature;
}

void NS_Comp_Mappage::CLmapArticle::setCouleur(System::String^ couleur) {
	this->couleur = couleur;
}

int NS_Comp_Mappage::CLmapArticle::getIdArticle(void) { return this->Id_article; }
System::String^ NS_Comp_Mappage::CLmapArticle::getNomArticle(void) { return this->NomArticle; }
int NS_Comp_Mappage::CLmapArticle::getQteStock(void) { return this->qte_stock; }
int NS_Comp_Mappage::CLmapArticle::getSeuil(void) { return this->seuil_reappro; }
System::String^ NS_Comp_Mappage::CLmapArticle::getPrixHt(void) { return this->prix_ht; }
System::String^ NS_Comp_Mappage::CLmapArticle::getTva(void) { return this->tva; }
System::String^ NS_Comp_Mappage::CLmapArticle::getNature(void) { return this->nature; }
System::String^ NS_Comp_Mappage::CLmapArticle::getCouleur(void) { return this->couleur; }