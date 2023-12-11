#include "CLservicestock.h"
#include "CLmapArticle.h"
#include <iostream>
#using <System.dll>
#using <System.Windows.Forms.dll>

NS_Comp_Svc::CLservicestock::CLservicestock(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappArticle = gcnew NS_Comp_Mappage::CLmapArticle();
}



System::Data::DataSet^ NS_Comp_Svc::CLservicestock::rechercherUnArticle(System::String^ dataTableName, System::String^ nom)
{
	this->oMappArticle->setNomArticle(nom);

	System::String^ sql;

	sql = this->oMappArticle->Select();
	return this->oCad->getRows(sql, dataTableName);
}



int NS_Comp_Svc::CLservicestock::ajouterUnArticle(System::String^ nom, int qte_stock, int seuil, System::String^ prix_ht, System::String^ tva, System::String^ nature, System::String^ couleur)
{
	int id;
	System::String^ sql;
	if (nom != "") {
		this->oMappArticle->setNomArticle(nom);
	}
	if (qte_stock != 0) {
		this->oMappArticle->setQteStock(qte_stock);
	}
	if (seuil != 0) {
		this->oMappArticle->setSeuil(seuil);
	}
	if (prix_ht != "") {
		this->oMappArticle->setPrixHt(prix_ht);
	}
	if (tva != "") {
		this->oMappArticle->setTva(tva);
	}
	if (nature != "") {
		this->oMappArticle->setNature(nature);
	}
	if (couleur != "") {
		this->oMappArticle->setCouleur(couleur);
	}
	if (nom != "" && qte_stock != 0 && seuil != 0 && prix_ht != "" && tva != "" && nature != "" && couleur != "") {

		sql = this->oMappArticle->Insert();
		id = this->oCad->actionRowsID(sql);

		return id;
	}
	return -1;
}


void NS_Comp_Svc::CLservicestock::supprimerUnArticle(int id) {
	System::String^ sql;

	this->oMappArticle->setIdArticle(id);

	sql = this->oMappArticle->Delete();
	this->oCad->actionRows(sql);
}


void NS_Comp_Svc::CLservicestock::modifierUnArticle(int id, System::String^ nom, int qte_stock, int seuil, System::String^ prix_ht, System::String^ tva, System::String^ nature, System::String^ couleur) {
	System::String^ sql;
	int IdArticle;

	this->oMappArticle->setIdArticle(id);
	if (nom != "") {
		this->oMappArticle->setNomArticle(nom);
		{
			if (qte_stock != 0) {
				this->oMappArticle->setQteStock(qte_stock);
			}
			if (seuil != 0) {
				this->oMappArticle->setSeuil(seuil);
			}
			if (prix_ht != "") {
				this->oMappArticle->setPrixHt(prix_ht);
			}
			if (tva != "") {
				this->oMappArticle->setTva(tva);
			}
			if (nature != "") {
				this->oMappArticle->setNature(nature);
			}
			if (couleur != "") {
				this->oMappArticle->setCouleur(couleur);
			}
			if (nom != "" && qte_stock != 0 && seuil != 0 && prix_ht != "" && tva != "" && nature != "" && couleur != "") {
				sql = "SELECT Id_Article FROM Article WHERE Id_Article = " + id + ";";
				IdArticle = this->oCad->actionRowsID(sql);

				sql = "SELECT prix_ht FROM Article WHERE Id_Article = " + id + ";";
				float prix_avant = this->oCad->actionRowsID(sql);

				System::DateTime now = System::DateTime::Now;
				System::String^ date = now.ToString("yyyy-MM-dd");

				this->oMappArticle->setIdArticle(IdArticle);

				sql = this->oMappArticle->Update(prix_avant, date);
				this->oCad->actionRows(sql);
			}
		}
	}
}