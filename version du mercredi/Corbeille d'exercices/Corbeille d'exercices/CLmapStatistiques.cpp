#include "CLmapStatistiques.h"

System::String^ NS_Comp_Mappage::CLmapStatistiques::getDateChiffreAffaire(void) { return this->date_chiffre_affaire; }
System::String^ NS_Comp_Mappage::CLmapStatistiques::getDemarqueInconnue(void) { return this->demarque_inconnue; }
System::String^ NS_Comp_Mappage::CLmapStatistiques::getMargeCommerciale(void) { return this->marge_commerciale; }
System::String^ NS_Comp_Mappage::CLmapStatistiques::getRemiseCommerciale(void) { return this->remise_commerciale; }
System::String^ NS_Comp_Mappage::CLmapStatistiques::getTva(void) { return this->tva; }

void NS_Comp_Mappage::CLmapStatistiques::setDateChiffreAffaire(System::String^ date_chiffre_affaire) { this->date_chiffre_affaire = date_chiffre_affaire; }
void NS_Comp_Mappage::CLmapStatistiques::setDemarqueInconnue(System::String^ demarque_inconnue) { this->demarque_inconnue = demarque_inconnue; }
void NS_Comp_Mappage::CLmapStatistiques::setMargeCommerciale(System::String^ marge_commerciale) { this->marge_commerciale = marge_commerciale; }
void NS_Comp_Mappage::CLmapStatistiques::setRemiseCommerciale(System::String^ remise_commerciale) { this->remise_commerciale = remise_commerciale; }
void NS_Comp_Mappage::CLmapStatistiques::setTva(System::String^ remise_tva) { this->tva = tva; }


System::String^ NS_Comp_Mappage::CLmapStatistiques::SelectLessPopular(void) {
	return "SELECT ligne_commande.id_article, SUM(ligne_commande.qte_commandee) FROM ligne_commande FULL OUTER JOIN id_article ON ligne_commande.id_article = Article.id_article GROUP BY ligne_commande.id_article";
}

System::String^ NS_Comp_Mappage::CLmapStatistiques::SelectMostPopular(void) {
	return "SELECT ligne_commande.id_article, SUM(ligne_commande.qte_commandee) FROM ligne_commande FULL OUTER JOIN id_article ON ligne_commande.id_article = Article.id_article GROUP BY ligne_commande.id_article";
}
System::String^ NS_Comp_Mappage::CLmapStatistiques::SelectSousSeuilReap(void) {
	return "SELECT * FROM Article WHERE qte_stock < seuil_reappro";
}


