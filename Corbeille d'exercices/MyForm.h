#pragma once
#include "CLCAD.h"
#include "CLservicePersonnel.h"
#include "CLserviceClient.h"
#include "CLserviceStock.h"
#include "CLservicesCommande.h"
#include "CLserviceStats.h"

namespace interfaceprojetpoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Globalization;

	/// <summary>
	/// Description résumée de MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Simulation;
	protected:
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ demarque_stat;
	private: System::Windows::Forms::ComboBox^ remise_stat;
	private: System::Windows::Forms::ComboBox^ marge_stat;
	private: System::Windows::Forms::ComboBox^ tva_stat;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::TextBox^ custom_remise_stat;
	private: System::Windows::Forms::TextBox^ custom_demarque_stat;
	private: System::Windows::Forms::TextBox^ custom_marge_stat;
	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Label^ label48;
	private: System::Windows::Forms::Label^ label49;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::NumericUpDown^ id_client_statistique;
	private: System::Windows::Forms::Button^ btn_calculermontantclient;
	private: System::Windows::Forms::TextBox^ montanttotal;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::RadioButton^ use_default_param;
	private: System::Windows::Forms::RadioButton^ use_custom_param;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::TextBox^ valeur_achat__stat;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::TextBox^ valeur_co__stat;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::TextBox^ panier_moyen_stat;
	private: System::Windows::Forms::Button^ btn_mostpopular;
	private: System::Windows::Forms::Button^ btn_lesspopular;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ calculer_chiffre_affaire;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::TextBox^ chiffre_affaire;
	private: System::Windows::Forms::Button^ btn_select_item_in_reap;
	private: System::Windows::Forms::DataGridView^ dataGridView6;
	private: System::Windows::Forms::Button^ personnel_suivant;
	private: System::Windows::Forms::Button^ personnel_precedent;

	private: int id_cli = 0;


		void LoadComboBoxData()
		{
			try
			{
				System::String^ query = "SELECT [nom_article] FROM Article";
				System::Data::DataSet^ dataSet = myDatabase->getRows(query, "Article");

				// Liaison de la ComboBox avec les données du DataSet
				this->article->DisplayMember = "nom_article";
				this->article->ValueMember = "nom_article";
				this->article->DataSource = dataSet->Tables["Article"];
				this->article->SelectedIndex = -1;
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Erreur lors du chargement des données : " + ex->Message);
			}
		}

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel3;

	private: System::Windows::Forms::Label^ Title;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ Personnel;
	private: System::Windows::Forms::TabPage^ Clients;
	private: System::Windows::Forms::TabPage^ Commandes;
	private: System::Windows::Forms::TabPage^ Stock;
	private: System::Windows::Forms::TabPage^ Statistiques;
	private: System::Windows::Forms::TextBox^ txtbx_nom_rue;



		   private: NS_Comp_Svc::CLserviceStatistique^ oSvcStats;
	private: NS_Comp_Svc::CLservicesCommande^ oSvcCommande;
	private: NS_Comp_Data::CLcad^ myDatabase;
	private: NS_Comp_Svc::CLservicesClient^ oSvcClient;
	private: NS_Comp_Svc::CLservicesPersonnel^ oSvc;
	private: NS_Comp_Svc::CLservicestock^ oSvcS;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::TextBox^ txtbx_prenom_personnel;

	private: System::Windows::Forms::TextBox^ txtbx_nom_personnel;
	private: System::Windows::Forms::Button^ btn_select_personnel;






	private: System::Windows::Forms::GroupBox^ gb_options_personnel;


	private: System::Windows::Forms::Button^ btn_confirmer_personnel;











	private: System::Windows::Forms::Button^ buttonClose;
	private: System::Windows::Forms::RadioButton^ rb_nouveau_personnel;
	private: System::Windows::Forms::RadioButton^ rb_modifier_personnel;
	private: System::Windows::Forms::RadioButton^ rb_supprimer_personnel;



	private: System::Windows::Forms::TextBox^ txtbx_code_postal;


	private: System::Windows::Forms::NumericUpDown^ id_personnel;
	private: System::Windows::Forms::TextBox^ txtbx_numero_adresse;
	private: System::Windows::Forms::TextBox^ txtbx_ville;

	private: System::Windows::Forms::NumericUpDown^ id_superieur;
	private: System::Windows::Forms::DateTimePicker^ date_embauche;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dgv_enr;
	private: System::Windows::Forms::Button^ btn_select_commandes;
	private: System::Windows::Forms::Button^ btn_supprimer_commande;
	private: System::Windows::Forms::Button^ btn_modifier_commande;
	private: System::Windows::Forms::Button^ btn_ajouter_commande;
	private: System::Windows::Forms::DataGridView^ dgv_client;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ codepostal_client_livre;





	private: System::Windows::Forms::NumericUpDown^ id_client;
	private: System::Windows::Forms::TextBox^ num_rue_client_livre;
	private: System::Windows::Forms::TextBox^ ville_client_livre;
private: System::Windows::Forms::DateTimePicker^ date_naissance;











	private: System::Windows::Forms::GroupBox^ options_client;
	private: System::Windows::Forms::RadioButton^ rb_supprimer_client;


	private: System::Windows::Forms::RadioButton^ rb_nouveau_client;
	private: System::Windows::Forms::RadioButton^ rb_modifier_client;
	private: System::Windows::Forms::Button^ confirmer_client;
	private: System::Windows::Forms::Button^ afficher_clients;
	private: System::Windows::Forms::TextBox^ nom_rue_client_livre;









	private: System::Windows::Forms::TextBox^ prenom_client;

	private: System::Windows::Forms::TextBox^ nom_client;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::NumericUpDown^ nb_article;

	private: System::Windows::Forms::ComboBox^ article;

	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::NumericUpDown^ id_commande;
	private: System::Windows::Forms::Button^ btn_ajouter_article;
	private: System::Windows::Forms::Button^ btn_supprimer_article;




	private: System::Windows::Forms::Label^ label22;


	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::Button^ btn_afficher_client;

	private: System::Windows::Forms::TextBox^ id_client_commande;
	private: System::Windows::Forms::NumericUpDown^ seuilreapro;



	private: System::Windows::Forms::NumericUpDown^ qte_article;

	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::DataGridView^ dataGridView5;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::NumericUpDown^ id_article;
	private: System::Windows::Forms::GroupBox^ option_stock;
	private: System::Windows::Forms::RadioButton^ supprimer_stock;





	private: System::Windows::Forms::RadioButton^ nouveau_stock;
	private: System::Windows::Forms::RadioButton^ modifier_stock;
	private: System::Windows::Forms::Button^ btn_confirmer_stock;
	private: System::Windows::Forms::Button^ btn_select_stock;




	private: System::Windows::Forms::TextBox^ prix_article;

	private: System::Windows::Forms::TextBox^ nom_article;
	private: System::Windows::Forms::TextBox^ couleur_article;


	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::ComboBox^ nature_article;

	private: System::Windows::Forms::ComboBox^ tva;

	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::TextBox^ codepostal_client_fact;

	private: System::Windows::Forms::TextBox^ num_rue_client_fact;
	private: System::Windows::Forms::TextBox^ ville_client_fact;


	private: System::Windows::Forms::TextBox^ nom_rue_client_fact;

	private: System::Windows::Forms::Button^ btn_copier_adresse;
private: System::Windows::Forms::Button^ client_suivant;
private: System::Windows::Forms::Button^ client_precedent;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::DateTimePicker^ date_cmd;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::DateTimePicker^ date_livraison;
private: System::Windows::Forms::Button^ button1;






















	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->rb_nouveau_personnel = (gcnew System::Windows::Forms::RadioButton());
			this->rb_modifier_personnel = (gcnew System::Windows::Forms::RadioButton());
			this->rb_supprimer_personnel = (gcnew System::Windows::Forms::RadioButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->buttonClose = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->Title = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->Personnel = (gcnew System::Windows::Forms::TabPage());
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtbx_code_postal = (gcnew System::Windows::Forms::TextBox());
			this->id_personnel = (gcnew System::Windows::Forms::NumericUpDown());
			this->txtbx_numero_adresse = (gcnew System::Windows::Forms::TextBox());
			this->txtbx_ville = (gcnew System::Windows::Forms::TextBox());
			this->id_superieur = (gcnew System::Windows::Forms::NumericUpDown());
			this->date_embauche = (gcnew System::Windows::Forms::DateTimePicker());
			this->gb_options_personnel = (gcnew System::Windows::Forms::GroupBox());
			this->btn_confirmer_personnel = (gcnew System::Windows::Forms::Button());
			this->btn_select_personnel = (gcnew System::Windows::Forms::Button());
			this->txtbx_nom_rue = (gcnew System::Windows::Forms::TextBox());
			this->txtbx_prenom_personnel = (gcnew System::Windows::Forms::TextBox());
			this->txtbx_nom_personnel = (gcnew System::Windows::Forms::TextBox());
			this->Clients = (gcnew System::Windows::Forms::TabPage());
			this->client_suivant = (gcnew System::Windows::Forms::Button());
			this->client_precedent = (gcnew System::Windows::Forms::Button());
			this->btn_copier_adresse = (gcnew System::Windows::Forms::Button());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->codepostal_client_fact = (gcnew System::Windows::Forms::TextBox());
			this->num_rue_client_fact = (gcnew System::Windows::Forms::TextBox());
			this->ville_client_fact = (gcnew System::Windows::Forms::TextBox());
			this->nom_rue_client_fact = (gcnew System::Windows::Forms::TextBox());
			this->dgv_client = (gcnew System::Windows::Forms::DataGridView());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->codepostal_client_livre = (gcnew System::Windows::Forms::TextBox());
			this->id_client = (gcnew System::Windows::Forms::NumericUpDown());
			this->num_rue_client_livre = (gcnew System::Windows::Forms::TextBox());
			this->ville_client_livre = (gcnew System::Windows::Forms::TextBox());
			this->date_naissance = (gcnew System::Windows::Forms::DateTimePicker());
			this->options_client = (gcnew System::Windows::Forms::GroupBox());
			this->rb_supprimer_client = (gcnew System::Windows::Forms::RadioButton());
			this->rb_nouveau_client = (gcnew System::Windows::Forms::RadioButton());
			this->rb_modifier_client = (gcnew System::Windows::Forms::RadioButton());
			this->confirmer_client = (gcnew System::Windows::Forms::Button());
			this->afficher_clients = (gcnew System::Windows::Forms::Button());
			this->nom_rue_client_livre = (gcnew System::Windows::Forms::TextBox());
			this->prenom_client = (gcnew System::Windows::Forms::TextBox());
			this->nom_client = (gcnew System::Windows::Forms::TextBox());
			this->Commandes = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->date_livraison = (gcnew System::Windows::Forms::DateTimePicker());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->date_cmd = (gcnew System::Windows::Forms::DateTimePicker());
			this->id_client_commande = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->btn_afficher_client = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->btn_supprimer_article = (gcnew System::Windows::Forms::Button());
			this->btn_ajouter_article = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->id_commande = (gcnew System::Windows::Forms::NumericUpDown());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->nb_article = (gcnew System::Windows::Forms::NumericUpDown());
			this->article = (gcnew System::Windows::Forms::ComboBox());
			this->btn_supprimer_commande = (gcnew System::Windows::Forms::Button());
			this->btn_modifier_commande = (gcnew System::Windows::Forms::Button());
			this->btn_ajouter_commande = (gcnew System::Windows::Forms::Button());
			this->btn_select_commandes = (gcnew System::Windows::Forms::Button());
			this->Stock = (gcnew System::Windows::Forms::TabPage());
			this->couleur_article = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->nature_article = (gcnew System::Windows::Forms::ComboBox());
			this->tva = (gcnew System::Windows::Forms::ComboBox());
			this->seuilreapro = (gcnew System::Windows::Forms::NumericUpDown());
			this->qte_article = (gcnew System::Windows::Forms::NumericUpDown());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->id_article = (gcnew System::Windows::Forms::NumericUpDown());
			this->option_stock = (gcnew System::Windows::Forms::GroupBox());
			this->supprimer_stock = (gcnew System::Windows::Forms::RadioButton());
			this->nouveau_stock = (gcnew System::Windows::Forms::RadioButton());
			this->modifier_stock = (gcnew System::Windows::Forms::RadioButton());
			this->btn_confirmer_stock = (gcnew System::Windows::Forms::Button());
			this->btn_select_stock = (gcnew System::Windows::Forms::Button());
			this->prix_article = (gcnew System::Windows::Forms::TextBox());
			this->nom_article = (gcnew System::Windows::Forms::TextBox());
			this->Statistiques = (gcnew System::Windows::Forms::TabPage());
			this->Simulation = (gcnew System::Windows::Forms::Button());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->demarque_stat = (gcnew System::Windows::Forms::ComboBox());
			this->remise_stat = (gcnew System::Windows::Forms::ComboBox());
			this->marge_stat = (gcnew System::Windows::Forms::ComboBox());
			this->tva_stat = (gcnew System::Windows::Forms::ComboBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->custom_remise_stat = (gcnew System::Windows::Forms::TextBox());
			this->custom_demarque_stat = (gcnew System::Windows::Forms::TextBox());
			this->custom_marge_stat = (gcnew System::Windows::Forms::TextBox());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->id_client_statistique = (gcnew System::Windows::Forms::NumericUpDown());
			this->btn_calculermontantclient = (gcnew System::Windows::Forms::Button());
			this->montanttotal = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->use_default_param = (gcnew System::Windows::Forms::RadioButton());
			this->use_custom_param = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->valeur_achat__stat = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->valeur_co__stat = (gcnew System::Windows::Forms::TextBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->panier_moyen_stat = (gcnew System::Windows::Forms::TextBox());
			this->btn_mostpopular = (gcnew System::Windows::Forms::Button());
			this->btn_lesspopular = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->calculer_chiffre_affaire = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->chiffre_affaire = (gcnew System::Windows::Forms::TextBox());
			this->btn_select_item_in_reap = (gcnew System::Windows::Forms::Button());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->personnel_suivant = (gcnew System::Windows::Forms::Button());
			this->personnel_precedent = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->Personnel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_personnel))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_superieur))->BeginInit();
			this->gb_options_personnel->SuspendLayout();
			this->Clients->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_client))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_client))->BeginInit();
			this->options_client->SuspendLayout();
			this->Commandes->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_commande))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nb_article))->BeginInit();
			this->Stock->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seuilreapro))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->qte_article))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_article))->BeginInit();
			this->option_stock->SuspendLayout();
			this->Statistiques->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_client_statistique))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
			this->SuspendLayout();
			// 
			// rb_nouveau_personnel
			// 
			this->rb_nouveau_personnel->AutoSize = true;
			this->rb_nouveau_personnel->Location = System::Drawing::Point(4, 22);
			this->rb_nouveau_personnel->Name = L"rb_nouveau_personnel";
			this->rb_nouveau_personnel->Size = System::Drawing::Size(73, 19);
			this->rb_nouveau_personnel->TabIndex = 11;
			this->rb_nouveau_personnel->TabStop = true;
			this->rb_nouveau_personnel->Text = L"Nouveau";
			this->rb_nouveau_personnel->UseVisualStyleBackColor = true;
			// 
			// rb_modifier_personnel
			// 
			this->rb_modifier_personnel->AutoSize = true;
			this->rb_modifier_personnel->Location = System::Drawing::Point(4, 51);
			this->rb_modifier_personnel->Name = L"rb_modifier_personnel";
			this->rb_modifier_personnel->Size = System::Drawing::Size(70, 19);
			this->rb_modifier_personnel->TabIndex = 12;
			this->rb_modifier_personnel->TabStop = true;
			this->rb_modifier_personnel->Text = L"Modifier";
			this->rb_modifier_personnel->UseVisualStyleBackColor = true;
			// 
			// rb_supprimer_personnel
			// 
			this->rb_supprimer_personnel->AutoSize = true;
			this->rb_supprimer_personnel->Location = System::Drawing::Point(4, 79);
			this->rb_supprimer_personnel->Name = L"rb_supprimer_personnel";
			this->rb_supprimer_personnel->Size = System::Drawing::Size(81, 19);
			this->rb_supprimer_personnel->TabIndex = 13;
			this->rb_supprimer_personnel->TabStop = true;
			this->rb_supprimer_personnel->Text = L"Supprimer";
			this->rb_supprimer_personnel->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->panel1->Controls->Add(this->buttonClose);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1195, 84);
			this->panel1->TabIndex = 0;
			// 
			// buttonClose
			// 
			this->buttonClose->BackColor = System::Drawing::Color::Firebrick;
			this->buttonClose->Location = System::Drawing::Point(1152, 5);
			this->buttonClose->Name = L"buttonClose";
			this->buttonClose->Size = System::Drawing::Size(31, 21);
			this->buttonClose->TabIndex = 1;
			this->buttonClose->Text = L"X";
			this->buttonClose->UseVisualStyleBackColor = false;
			this->buttonClose->Click += gcnew System::EventHandler(this, &MainForm::buttonClose_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::MenuText;
			this->panel3->Controls->Add(this->Title);
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(220, 84);
			this->panel3->TabIndex = 2;
			// 
			// Title
			// 
			this->Title->AutoSize = true;
			this->Title->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title->ForeColor = System::Drawing::SystemColors::Control;
			this->Title->Location = System::Drawing::Point(32, 25);
			this->Title->Name = L"Title";
			this->Title->Size = System::Drawing::Size(147, 37);
			this->Title->TabIndex = 2;
			this->Title->Text = L"Entreprise";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->Personnel);
			this->tabControl1->Controls->Add(this->Clients);
			this->tabControl1->Controls->Add(this->Commandes);
			this->tabControl1->Controls->Add(this->Stock);
			this->tabControl1->Controls->Add(this->Statistiques);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Top;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(0, 84);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1195, 571);
			this->tabControl1->TabIndex = 2;
			// 
			// Personnel
			// 
			this->Personnel->Controls->Add(this->personnel_suivant);
			this->Personnel->Controls->Add(this->personnel_precedent);
			this->Personnel->Controls->Add(this->dgv_enr);
			this->Personnel->Controls->Add(this->label10);
			this->Personnel->Controls->Add(this->label9);
			this->Personnel->Controls->Add(this->label8);
			this->Personnel->Controls->Add(this->label7);
			this->Personnel->Controls->Add(this->label5);
			this->Personnel->Controls->Add(this->label4);
			this->Personnel->Controls->Add(this->label3);
			this->Personnel->Controls->Add(this->label2);
			this->Personnel->Controls->Add(this->label1);
			this->Personnel->Controls->Add(this->txtbx_code_postal);
			this->Personnel->Controls->Add(this->id_personnel);
			this->Personnel->Controls->Add(this->txtbx_numero_adresse);
			this->Personnel->Controls->Add(this->txtbx_ville);
			this->Personnel->Controls->Add(this->id_superieur);
			this->Personnel->Controls->Add(this->date_embauche);
			this->Personnel->Controls->Add(this->gb_options_personnel);
			this->Personnel->Controls->Add(this->btn_confirmer_personnel);
			this->Personnel->Controls->Add(this->btn_select_personnel);
			this->Personnel->Controls->Add(this->txtbx_nom_rue);
			this->Personnel->Controls->Add(this->txtbx_prenom_personnel);
			this->Personnel->Controls->Add(this->txtbx_nom_personnel);
			this->Personnel->Location = System::Drawing::Point(4, 24);
			this->Personnel->Name = L"Personnel";
			this->Personnel->Padding = System::Windows::Forms::Padding(3);
			this->Personnel->Size = System::Drawing::Size(1187, 543);
			this->Personnel->TabIndex = 0;
			this->Personnel->Text = L"Personnel";
			this->Personnel->UseVisualStyleBackColor = true;
			// 
			// dgv_enr
			// 
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(466, 7);
			this->dgv_enr->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->RowHeadersWidth = 62;
			this->dgv_enr->RowTemplate->Height = 28;
			this->dgv_enr->Size = System::Drawing::Size(698, 528);
			this->dgv_enr->TabIndex = 33;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(9, 376);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(30, 15);
			this->label10->TabIndex = 32;
			this->label10->Text = L"Ville";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(9, 329);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(69, 15);
			this->label9->TabIndex = 31;
			this->label9->Text = L"Code Postal";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(9, 281);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(82, 15);
			this->label8->TabIndex = 30;
			this->label8->Text = L"Nom de la rue";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(10, 233);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(87, 15);
			this->label7->TabIndex = 29;
			this->label7->Text = L"Numéro de rue";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 169);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(101, 15);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Date d\'embauche";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 118);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 15);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Prénom";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 57);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 15);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Nom";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 4);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 15);
			this->label2->TabIndex = 24;
			this->label2->Text = L"ID personnel";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(237, 5);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 15);
			this->label1->TabIndex = 23;
			this->label1->Text = L"ID supérieur";
			// 
			// txtbx_code_postal
			// 
			this->txtbx_code_postal->Location = System::Drawing::Point(12, 348);
			this->txtbx_code_postal->Name = L"txtbx_code_postal";
			this->txtbx_code_postal->Size = System::Drawing::Size(392, 23);
			this->txtbx_code_postal->TabIndex = 22;
			// 
			// id_personnel
			// 
			this->id_personnel->Location = System::Drawing::Point(12, 26);
			this->id_personnel->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->id_personnel->Name = L"id_personnel";
			this->id_personnel->Size = System::Drawing::Size(163, 23);
			this->id_personnel->TabIndex = 20;
			// 
			// txtbx_numero_adresse
			// 
			this->txtbx_numero_adresse->Location = System::Drawing::Point(13, 250);
			this->txtbx_numero_adresse->Name = L"txtbx_numero_adresse";
			this->txtbx_numero_adresse->Size = System::Drawing::Size(203, 23);
			this->txtbx_numero_adresse->TabIndex = 19;
			// 
			// txtbx_ville
			// 
			this->txtbx_ville->Location = System::Drawing::Point(12, 394);
			this->txtbx_ville->Name = L"txtbx_ville";
			this->txtbx_ville->Size = System::Drawing::Size(392, 23);
			this->txtbx_ville->TabIndex = 18;
			// 
			// id_superieur
			// 
			this->id_superieur->Location = System::Drawing::Point(240, 26);
			this->id_superieur->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->id_superieur->Name = L"id_superieur";
			this->id_superieur->Size = System::Drawing::Size(163, 23);
			this->id_superieur->TabIndex = 17;
			// 
			// date_embauche
			// 
			this->date_embauche->CustomFormat = L"yyyy-MM-dd";
			this->date_embauche->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->date_embauche->Location = System::Drawing::Point(12, 194);
			this->date_embauche->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->date_embauche->Name = L"date_embauche";
			this->date_embauche->Size = System::Drawing::Size(392, 23);
			this->date_embauche->TabIndex = 16;
			// 
			// gb_options_personnel
			// 
			this->gb_options_personnel->Controls->Add(this->rb_supprimer_personnel);
			this->gb_options_personnel->Controls->Add(this->rb_nouveau_personnel);
			this->gb_options_personnel->Controls->Add(this->rb_modifier_personnel);
			this->gb_options_personnel->Location = System::Drawing::Point(12, 432);
			this->gb_options_personnel->Name = L"gb_options_personnel";
			this->gb_options_personnel->Size = System::Drawing::Size(130, 105);
			this->gb_options_personnel->TabIndex = 15;
			this->gb_options_personnel->TabStop = false;
			this->gb_options_personnel->Text = L"Options";
			// 
			// btn_confirmer_personnel
			// 
			this->btn_confirmer_personnel->Location = System::Drawing::Point(175, 441);
			this->btn_confirmer_personnel->Name = L"btn_confirmer_personnel";
			this->btn_confirmer_personnel->Size = System::Drawing::Size(78, 92);
			this->btn_confirmer_personnel->TabIndex = 14;
			this->btn_confirmer_personnel->Text = L"Confirmer";
			this->btn_confirmer_personnel->UseVisualStyleBackColor = true;
			this->btn_confirmer_personnel->Click += gcnew System::EventHandler(this, &MainForm::btn_confirmer_personnel_Click);
			// 
			// btn_select_personnel
			// 
			this->btn_select_personnel->Location = System::Drawing::Point(278, 443);
			this->btn_select_personnel->Name = L"btn_select_personnel";
			this->btn_select_personnel->Size = System::Drawing::Size(136, 59);
			this->btn_select_personnel->TabIndex = 10;
			this->btn_select_personnel->Text = L"Afficher le personnel";
			this->btn_select_personnel->UseVisualStyleBackColor = true;
			this->btn_select_personnel->Click += gcnew System::EventHandler(this, &MainForm::select_personnel_click);
			// 
			// txtbx_nom_rue
			// 
			this->txtbx_nom_rue->Location = System::Drawing::Point(12, 300);
			this->txtbx_nom_rue->Name = L"txtbx_nom_rue";
			this->txtbx_nom_rue->Size = System::Drawing::Size(392, 23);
			this->txtbx_nom_rue->TabIndex = 5;
			// 
			// txtbx_prenom_personnel
			// 
			this->txtbx_prenom_personnel->Location = System::Drawing::Point(12, 137);
			this->txtbx_prenom_personnel->Name = L"txtbx_prenom_personnel";
			this->txtbx_prenom_personnel->Size = System::Drawing::Size(392, 23);
			this->txtbx_prenom_personnel->TabIndex = 2;
			this->txtbx_prenom_personnel->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::txtbx_nom_personnel_KeyPress);
			this->txtbx_prenom_personnel->Leave += gcnew System::EventHandler(this, &MainForm::txtbx_prenom_personnel_Leave);
			// 
			// txtbx_nom_personnel
			// 
			this->txtbx_nom_personnel->Location = System::Drawing::Point(12, 77);
			this->txtbx_nom_personnel->Name = L"txtbx_nom_personnel";
			this->txtbx_nom_personnel->Size = System::Drawing::Size(392, 23);
			this->txtbx_nom_personnel->TabIndex = 1;
			this->txtbx_nom_personnel->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::txtbx_nom_personnel_KeyPress);
			this->txtbx_nom_personnel->Leave += gcnew System::EventHandler(this, &MainForm::txtbx_nom_personnel_Leave);
			// 
			// Clients
			// 
			this->Clients->Controls->Add(this->client_suivant);
			this->Clients->Controls->Add(this->client_precedent);
			this->Clients->Controls->Add(this->btn_copier_adresse);
			this->Clients->Controls->Add(this->label36);
			this->Clients->Controls->Add(this->label35);
			this->Clients->Controls->Add(this->label31);
			this->Clients->Controls->Add(this->label32);
			this->Clients->Controls->Add(this->label33);
			this->Clients->Controls->Add(this->label34);
			this->Clients->Controls->Add(this->codepostal_client_fact);
			this->Clients->Controls->Add(this->num_rue_client_fact);
			this->Clients->Controls->Add(this->ville_client_fact);
			this->Clients->Controls->Add(this->nom_rue_client_fact);
			this->Clients->Controls->Add(this->dgv_client);
			this->Clients->Controls->Add(this->label6);
			this->Clients->Controls->Add(this->label11);
			this->Clients->Controls->Add(this->label12);
			this->Clients->Controls->Add(this->label13);
			this->Clients->Controls->Add(this->label14);
			this->Clients->Controls->Add(this->label15);
			this->Clients->Controls->Add(this->label16);
			this->Clients->Controls->Add(this->label17);
			this->Clients->Controls->Add(this->codepostal_client_livre);
			this->Clients->Controls->Add(this->id_client);
			this->Clients->Controls->Add(this->num_rue_client_livre);
			this->Clients->Controls->Add(this->ville_client_livre);
			this->Clients->Controls->Add(this->date_naissance);
			this->Clients->Controls->Add(this->options_client);
			this->Clients->Controls->Add(this->confirmer_client);
			this->Clients->Controls->Add(this->afficher_clients);
			this->Clients->Controls->Add(this->nom_rue_client_livre);
			this->Clients->Controls->Add(this->prenom_client);
			this->Clients->Controls->Add(this->nom_client);
			this->Clients->Location = System::Drawing::Point(4, 24);
			this->Clients->Name = L"Clients";
			this->Clients->Padding = System::Windows::Forms::Padding(3);
			this->Clients->Size = System::Drawing::Size(1187, 543);
			this->Clients->TabIndex = 1;
			this->Clients->Text = L"Clients";
			this->Clients->UseVisualStyleBackColor = true;
			// 
			// client_suivant
			// 
			this->client_suivant->Enabled = false;
			this->client_suivant->Location = System::Drawing::Point(370, 515);
			this->client_suivant->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->client_suivant->Name = L"client_suivant";
			this->client_suivant->Size = System::Drawing::Size(48, 20);
			this->client_suivant->TabIndex = 68;
			this->client_suivant->Text = L">";
			this->client_suivant->UseVisualStyleBackColor = true;
			this->client_suivant->Click += gcnew System::EventHandler(this, &MainForm::client_suivant_Click);
			// 
			// client_precedent
			// 
			this->client_precedent->Enabled = false;
			this->client_precedent->Location = System::Drawing::Point(282, 515);
			this->client_precedent->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->client_precedent->Name = L"client_precedent";
			this->client_precedent->Size = System::Drawing::Size(48, 20);
			this->client_precedent->TabIndex = 67;
			this->client_precedent->Text = L"<";
			this->client_precedent->UseVisualStyleBackColor = true;
			this->client_precedent->Click += gcnew System::EventHandler(this, &MainForm::client_precedent_Click);
			// 
			// btn_copier_adresse
			// 
			this->btn_copier_adresse->Location = System::Drawing::Point(190, 213);
			this->btn_copier_adresse->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->btn_copier_adresse->Name = L"btn_copier_adresse";
			this->btn_copier_adresse->Size = System::Drawing::Size(55, 27);
			this->btn_copier_adresse->TabIndex = 66;
			this->btn_copier_adresse->Text = L"Copier";
			this->btn_copier_adresse->UseVisualStyleBackColor = true;
			this->btn_copier_adresse->Click += gcnew System::EventHandler(this, &MainForm::btn_copier_adresse_Click);
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(32, 217);
			this->label36->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(111, 15);
			this->label36->TabIndex = 65;
			this->label36->Text = L"Adresse de livraison";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(262, 217);
			this->label35->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(125, 15);
			this->label35->TabIndex = 64;
			this->label35->Text = L"Adresse de facturation";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(225, 386);
			this->label31->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(30, 15);
			this->label31->TabIndex = 63;
			this->label31->Text = L"Ville";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(225, 339);
			this->label32->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(69, 15);
			this->label32->TabIndex = 62;
			this->label32->Text = L"Code Postal";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(225, 291);
			this->label33->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(82, 15);
			this->label33->TabIndex = 61;
			this->label33->Text = L"Nom de la rue";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(226, 243);
			this->label34->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(87, 15);
			this->label34->TabIndex = 60;
			this->label34->Text = L"Numéro de rue";
			// 
			// codepostal_client_fact
			// 
			this->codepostal_client_fact->Location = System::Drawing::Point(228, 358);
			this->codepostal_client_fact->Name = L"codepostal_client_fact";
			this->codepostal_client_fact->Size = System::Drawing::Size(204, 23);
			this->codepostal_client_fact->TabIndex = 59;
			// 
			// num_rue_client_fact
			// 
			this->num_rue_client_fact->Location = System::Drawing::Point(229, 260);
			this->num_rue_client_fact->Name = L"num_rue_client_fact";
			this->num_rue_client_fact->Size = System::Drawing::Size(203, 23);
			this->num_rue_client_fact->TabIndex = 58;
			// 
			// ville_client_fact
			// 
			this->ville_client_fact->Location = System::Drawing::Point(229, 404);
			this->ville_client_fact->Name = L"ville_client_fact";
			this->ville_client_fact->Size = System::Drawing::Size(204, 23);
			this->ville_client_fact->TabIndex = 57;
			// 
			// nom_rue_client_fact
			// 
			this->nom_rue_client_fact->Location = System::Drawing::Point(228, 311);
			this->nom_rue_client_fact->Name = L"nom_rue_client_fact";
			this->nom_rue_client_fact->Size = System::Drawing::Size(204, 23);
			this->nom_rue_client_fact->TabIndex = 56;
			// 
			// dgv_client
			// 
			this->dgv_client->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_client->Location = System::Drawing::Point(466, 7);
			this->dgv_client->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->dgv_client->Name = L"dgv_client";
			this->dgv_client->RowHeadersWidth = 62;
			this->dgv_client->RowTemplate->Height = 28;
			this->dgv_client->Size = System::Drawing::Size(698, 528);
			this->dgv_client->TabIndex = 55;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(9, 386);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(30, 15);
			this->label6->TabIndex = 54;
			this->label6->Text = L"Ville";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(9, 339);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(69, 15);
			this->label11->TabIndex = 53;
			this->label11->Text = L"Code Postal";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(9, 291);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(82, 15);
			this->label12->TabIndex = 52;
			this->label12->Text = L"Nom de la rue";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(10, 243);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(87, 15);
			this->label13->TabIndex = 51;
			this->label13->Text = L"Numéro de rue";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(9, 155);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(102, 15);
			this->label14->TabIndex = 50;
			this->label14->Text = L"Date de naissance";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(9, 105);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(49, 15);
			this->label15->TabIndex = 49;
			this->label15->Text = L"Prénom";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(9, 57);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(34, 15);
			this->label16->TabIndex = 48;
			this->label16->Text = L"Nom";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(9, 4);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(53, 15);
			this->label17->TabIndex = 47;
			this->label17->Text = L"ID Client";
			// 
			// codepostal_client_livre
			// 
			this->codepostal_client_livre->Location = System::Drawing::Point(12, 358);
			this->codepostal_client_livre->Name = L"codepostal_client_livre";
			this->codepostal_client_livre->Size = System::Drawing::Size(204, 23);
			this->codepostal_client_livre->TabIndex = 45;
			// 
			// id_client
			// 
			this->id_client->Location = System::Drawing::Point(12, 26);
			this->id_client->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->id_client->Name = L"id_client";
			this->id_client->Size = System::Drawing::Size(163, 23);
			this->id_client->TabIndex = 44;
			// 
			// num_rue_client_livre
			// 
			this->num_rue_client_livre->Location = System::Drawing::Point(13, 260);
			this->num_rue_client_livre->Name = L"num_rue_client_livre";
			this->num_rue_client_livre->Size = System::Drawing::Size(203, 23);
			this->num_rue_client_livre->TabIndex = 43;
			// 
			// ville_client_livre
			// 
			this->ville_client_livre->Location = System::Drawing::Point(12, 404);
			this->ville_client_livre->Name = L"ville_client_livre";
			this->ville_client_livre->Size = System::Drawing::Size(204, 23);
			this->ville_client_livre->TabIndex = 42;
			// 
			// date_naissance
			// 
			this->date_naissance->CustomFormat = L"yyyy-MM-dd";
			this->date_naissance->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->date_naissance->Location = System::Drawing::Point(12, 172);
			this->date_naissance->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->date_naissance->Name = L"date_naissance";
			this->date_naissance->Size = System::Drawing::Size(420, 23);
			this->date_naissance->TabIndex = 40;
			// 
			// options_client
			// 
			this->options_client->Controls->Add(this->rb_supprimer_client);
			this->options_client->Controls->Add(this->rb_nouveau_client);
			this->options_client->Controls->Add(this->rb_modifier_client);
			this->options_client->Location = System::Drawing::Point(12, 432);
			this->options_client->Name = L"options_client";
			this->options_client->Size = System::Drawing::Size(130, 105);
			this->options_client->TabIndex = 39;
			this->options_client->TabStop = false;
			this->options_client->Text = L"Options";
			// 
			// rb_supprimer_client
			// 
			this->rb_supprimer_client->AutoSize = true;
			this->rb_supprimer_client->Location = System::Drawing::Point(4, 79);
			this->rb_supprimer_client->Name = L"rb_supprimer_client";
			this->rb_supprimer_client->Size = System::Drawing::Size(81, 19);
			this->rb_supprimer_client->TabIndex = 13;
			this->rb_supprimer_client->TabStop = true;
			this->rb_supprimer_client->Text = L"Supprimer";
			this->rb_supprimer_client->UseVisualStyleBackColor = true;
			// 
			// rb_nouveau_client
			// 
			this->rb_nouveau_client->AutoSize = true;
			this->rb_nouveau_client->Location = System::Drawing::Point(4, 22);
			this->rb_nouveau_client->Name = L"rb_nouveau_client";
			this->rb_nouveau_client->Size = System::Drawing::Size(73, 19);
			this->rb_nouveau_client->TabIndex = 11;
			this->rb_nouveau_client->TabStop = true;
			this->rb_nouveau_client->Text = L"Nouveau";
			this->rb_nouveau_client->UseVisualStyleBackColor = true;
			// 
			// rb_modifier_client
			// 
			this->rb_modifier_client->AutoSize = true;
			this->rb_modifier_client->Location = System::Drawing::Point(4, 51);
			this->rb_modifier_client->Name = L"rb_modifier_client";
			this->rb_modifier_client->Size = System::Drawing::Size(70, 19);
			this->rb_modifier_client->TabIndex = 12;
			this->rb_modifier_client->TabStop = true;
			this->rb_modifier_client->Text = L"Modifier";
			this->rb_modifier_client->UseVisualStyleBackColor = true;
			// 
			// confirmer_client
			// 
			this->confirmer_client->Location = System::Drawing::Point(175, 441);
			this->confirmer_client->Name = L"confirmer_client";
			this->confirmer_client->Size = System::Drawing::Size(78, 92);
			this->confirmer_client->TabIndex = 38;
			this->confirmer_client->Text = L"Confirmer";
			this->confirmer_client->UseVisualStyleBackColor = true;
			this->confirmer_client->Click += gcnew System::EventHandler(this, &MainForm::confirmer_client_Click);
			// 
			// afficher_clients
			// 
			this->afficher_clients->Location = System::Drawing::Point(282, 441);
			this->afficher_clients->Name = L"afficher_clients";
			this->afficher_clients->Size = System::Drawing::Size(136, 59);
			this->afficher_clients->TabIndex = 37;
			this->afficher_clients->Text = L"Afficher les clients";
			this->afficher_clients->UseVisualStyleBackColor = true;
			this->afficher_clients->Click += gcnew System::EventHandler(this, &MainForm::afficher_clients_Click);
			// 
			// nom_rue_client_livre
			// 
			this->nom_rue_client_livre->Location = System::Drawing::Point(12, 311);
			this->nom_rue_client_livre->Name = L"nom_rue_client_livre";
			this->nom_rue_client_livre->Size = System::Drawing::Size(204, 23);
			this->nom_rue_client_livre->TabIndex = 36;
			// 
			// prenom_client
			// 
			this->prenom_client->Location = System::Drawing::Point(12, 122);
			this->prenom_client->Name = L"prenom_client";
			this->prenom_client->Size = System::Drawing::Size(420, 23);
			this->prenom_client->TabIndex = 35;
			// 
			// nom_client
			// 
			this->nom_client->Location = System::Drawing::Point(12, 74);
			this->nom_client->Name = L"nom_client";
			this->nom_client->Size = System::Drawing::Size(420, 23);
			this->nom_client->TabIndex = 34;
			this->nom_client->Leave += gcnew System::EventHandler(this, &MainForm::nom_client_Leave);
			// 
			// Commandes
			// 
			this->Commandes->Controls->Add(this->button1);
			this->Commandes->Controls->Add(this->label38);
			this->Commandes->Controls->Add(this->date_livraison);
			this->Commandes->Controls->Add(this->label37);
			this->Commandes->Controls->Add(this->date_cmd);
			this->Commandes->Controls->Add(this->id_client_commande);
			this->Commandes->Controls->Add(this->dataGridView4);
			this->Commandes->Controls->Add(this->btn_afficher_client);
			this->Commandes->Controls->Add(this->panel2);
			this->Commandes->Controls->Add(this->dataGridView3);
			this->Commandes->Controls->Add(this->label23);
			this->Commandes->Controls->Add(this->dataGridView2);
			this->Commandes->Controls->Add(this->label22);
			this->Commandes->Controls->Add(this->btn_supprimer_article);
			this->Commandes->Controls->Add(this->btn_ajouter_article);
			this->Commandes->Controls->Add(this->label20);
			this->Commandes->Controls->Add(this->id_commande);
			this->Commandes->Controls->Add(this->label19);
			this->Commandes->Controls->Add(this->label18);
			this->Commandes->Controls->Add(this->nb_article);
			this->Commandes->Controls->Add(this->article);
			this->Commandes->Controls->Add(this->btn_supprimer_commande);
			this->Commandes->Controls->Add(this->btn_modifier_commande);
			this->Commandes->Controls->Add(this->btn_ajouter_commande);
			this->Commandes->Controls->Add(this->btn_select_commandes);
			this->Commandes->Location = System::Drawing::Point(4, 24);
			this->Commandes->Name = L"Commandes";
			this->Commandes->Size = System::Drawing::Size(1187, 543);
			this->Commandes->TabIndex = 2;
			this->Commandes->Text = L"Commandes";
			this->Commandes->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(193, 510);
			this->button1->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(163, 22);
			this->button1->TabIndex = 73;
			this->button1->Text = L"Afficher la commande";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(9, 129);
			this->label38->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(95, 15);
			this->label38->TabIndex = 72;
			this->label38->Text = L"Date de livraison";
			// 
			// date_livraison
			// 
			this->date_livraison->CustomFormat = L"yyyy-MM-dd";
			this->date_livraison->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->date_livraison->Location = System::Drawing::Point(13, 155);
			this->date_livraison->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->date_livraison->Name = L"date_livraison";
			this->date_livraison->Size = System::Drawing::Size(256, 23);
			this->date_livraison->TabIndex = 71;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(9, 71);
			this->label37->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(112, 15);
			this->label37->TabIndex = 70;
			this->label37->Text = L"Date de commande";
			// 
			// date_cmd
			// 
			this->date_cmd->CustomFormat = L"yyyy-MM-dd";
			this->date_cmd->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->date_cmd->Location = System::Drawing::Point(13, 96);
			this->date_cmd->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->date_cmd->Name = L"date_cmd";
			this->date_cmd->Size = System::Drawing::Size(256, 23);
			this->date_cmd->TabIndex = 69;
			// 
			// id_client_commande
			// 
			this->id_client_commande->Location = System::Drawing::Point(11, 214);
			this->id_client_commande->Name = L"id_client_commande";
			this->id_client_commande->Size = System::Drawing::Size(164, 23);
			this->id_client_commande->TabIndex = 68;
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(285, 64);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersWidth = 62;
			this->dataGridView4->Size = System::Drawing::Size(284, 196);
			this->dataGridView4->TabIndex = 63;
			// 
			// btn_afficher_client
			// 
			this->btn_afficher_client->Location = System::Drawing::Point(193, 207);
			this->btn_afficher_client->Name = L"btn_afficher_client";
			this->btn_afficher_client->Size = System::Drawing::Size(74, 40);
			this->btn_afficher_client->TabIndex = 62;
			this->btn_afficher_client->Text = L"Afficher liste client";
			this->btn_afficher_client->UseVisualStyleBackColor = true;
			this->btn_afficher_client->Click += gcnew System::EventHandler(this, &MainForm::btn_afficher_client_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Black;
			this->panel2->Location = System::Drawing::Point(587, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(2, 545);
			this->panel2->TabIndex = 3;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(613, 9);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 62;
			this->dataGridView3->Size = System::Drawing::Size(559, 465);
			this->dataGridView3->TabIndex = 60;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(7, 348);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(106, 15);
			this->label23->TabIndex = 59;
			this->label23->Text = L"Afficher les articles";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(13, 370);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 62;
			this->dataGridView2->Size = System::Drawing::Size(557, 129);
			this->dataGridView2->TabIndex = 58;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(9, 196);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(53, 15);
			this->label22->TabIndex = 56;
			this->label22->Text = L"ID Client";
			// 
			// btn_supprimer_article
			// 
			this->btn_supprimer_article->Location = System::Drawing::Point(472, 320);
			this->btn_supprimer_article->Name = L"btn_supprimer_article";
			this->btn_supprimer_article->Size = System::Drawing::Size(97, 44);
			this->btn_supprimer_article->TabIndex = 53;
			this->btn_supprimer_article->Text = L"Supprimer article";
			this->btn_supprimer_article->UseVisualStyleBackColor = true;
			this->btn_supprimer_article->Click += gcnew System::EventHandler(this, &MainForm::btn_supprimer_article_Click);
			// 
			// btn_ajouter_article
			// 
			this->btn_ajouter_article->Location = System::Drawing::Point(472, 270);
			this->btn_ajouter_article->Name = L"btn_ajouter_article";
			this->btn_ajouter_article->Size = System::Drawing::Size(97, 44);
			this->btn_ajouter_article->TabIndex = 52;
			this->btn_ajouter_article->Text = L"Ajouter article";
			this->btn_ajouter_article->UseVisualStyleBackColor = true;
			this->btn_ajouter_article->Click += gcnew System::EventHandler(this, &MainForm::btn_ajouter_article_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(9, 13);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(84, 15);
			this->label20->TabIndex = 51;
			this->label20->Text = L"ID commande";
			// 
			// id_commande
			// 
			this->id_commande->Location = System::Drawing::Point(13, 38);
			this->id_commande->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->id_commande->Name = L"id_commande";
			this->id_commande->Size = System::Drawing::Size(163, 23);
			this->id_commande->TabIndex = 50;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(394, 282);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(53, 15);
			this->label19->TabIndex = 49;
			this->label19->Text = L"Quantité";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(8, 281);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(41, 15);
			this->label18->TabIndex = 48;
			this->label18->Text = L"Article";
			// 
			// nb_article
			// 
			this->nb_article->Location = System::Drawing::Point(397, 300);
			this->nb_article->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->nb_article->Name = L"nb_article";
			this->nb_article->Size = System::Drawing::Size(57, 23);
			this->nb_article->TabIndex = 45;
			// 
			// article
			// 
			this->article->FormattingEnabled = true;
			this->article->Location = System::Drawing::Point(11, 300);
			this->article->Name = L"article";
			this->article->Size = System::Drawing::Size(368, 23);
			this->article->TabIndex = 15;
			// 
			// btn_supprimer_commande
			// 
			this->btn_supprimer_commande->Location = System::Drawing::Point(459, 9);
			this->btn_supprimer_commande->Name = L"btn_supprimer_commande";
			this->btn_supprimer_commande->Size = System::Drawing::Size(90, 45);
			this->btn_supprimer_commande->TabIndex = 14;
			this->btn_supprimer_commande->Text = L"Supprimer Commande";
			this->btn_supprimer_commande->UseVisualStyleBackColor = true;
			this->btn_supprimer_commande->Click += gcnew System::EventHandler(this, &MainForm::btn_supprimer_commande_Click);
			// 
			// btn_modifier_commande
			// 
			this->btn_modifier_commande->Location = System::Drawing::Point(23, 246);
			this->btn_modifier_commande->Name = L"btn_modifier_commande";
			this->btn_modifier_commande->Size = System::Drawing::Size(134, 31);
			this->btn_modifier_commande->TabIndex = 13;
			this->btn_modifier_commande->Text = L"Modifier Commande";
			this->btn_modifier_commande->UseVisualStyleBackColor = true;
			this->btn_modifier_commande->Click += gcnew System::EventHandler(this, &MainForm::btn_modifier_commande_Click);
			// 
			// btn_ajouter_commande
			// 
			this->btn_ajouter_commande->Location = System::Drawing::Point(285, 13);
			this->btn_ajouter_commande->Name = L"btn_ajouter_commande";
			this->btn_ajouter_commande->Size = System::Drawing::Size(135, 35);
			this->btn_ajouter_commande->TabIndex = 12;
			this->btn_ajouter_commande->Text = L"Nouvelle Commande";
			this->btn_ajouter_commande->UseVisualStyleBackColor = true;
			this->btn_ajouter_commande->Click += gcnew System::EventHandler(this, &MainForm::btn_ajouter_commande_Click);
			// 
			// btn_select_commandes
			// 
			this->btn_select_commandes->Location = System::Drawing::Point(837, 480);
			this->btn_select_commandes->Name = L"btn_select_commandes";
			this->btn_select_commandes->Size = System::Drawing::Size(120, 52);
			this->btn_select_commandes->TabIndex = 11;
			this->btn_select_commandes->Text = L"Afficher les commandes";
			this->btn_select_commandes->UseVisualStyleBackColor = true;
			this->btn_select_commandes->Click += gcnew System::EventHandler(this, &MainForm::btn_select_commandes_Click);
			// 
			// Stock
			// 
			this->Stock->Controls->Add(this->couleur_article);
			this->Stock->Controls->Add(this->label27);
			this->Stock->Controls->Add(this->nature_article);
			this->Stock->Controls->Add(this->tva);
			this->Stock->Controls->Add(this->seuilreapro);
			this->Stock->Controls->Add(this->qte_article);
			this->Stock->Controls->Add(this->label28);
			this->Stock->Controls->Add(this->dataGridView5);
			this->Stock->Controls->Add(this->label21);
			this->Stock->Controls->Add(this->label24);
			this->Stock->Controls->Add(this->label25);
			this->Stock->Controls->Add(this->label26);
			this->Stock->Controls->Add(this->label29);
			this->Stock->Controls->Add(this->label30);
			this->Stock->Controls->Add(this->id_article);
			this->Stock->Controls->Add(this->option_stock);
			this->Stock->Controls->Add(this->btn_confirmer_stock);
			this->Stock->Controls->Add(this->btn_select_stock);
			this->Stock->Controls->Add(this->prix_article);
			this->Stock->Controls->Add(this->nom_article);
			this->Stock->Location = System::Drawing::Point(4, 24);
			this->Stock->Name = L"Stock";
			this->Stock->Size = System::Drawing::Size(1187, 543);
			this->Stock->TabIndex = 3;
			this->Stock->Text = L"Stock";
			this->Stock->UseVisualStyleBackColor = true;
			// 
			// couleur_article
			// 
			this->couleur_article->Location = System::Drawing::Point(12, 350);
			this->couleur_article->Name = L"couleur_article";
			this->couleur_article->Size = System::Drawing::Size(402, 23);
			this->couleur_article->TabIndex = 62;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(9, 321);
			this->label27->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(48, 15);
			this->label27->TabIndex = 61;
			this->label27->Text = L"Couleur";
			// 
			// nature_article
			// 
			this->nature_article->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->nature_article->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->nature_article->FormattingEnabled = true;
			this->nature_article->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"Smartphones et tablettes", L"Ordinateurs et ordinateurs portables",
					L"Appareils audio et vidéo", L"Appareils photo et caméras", L"Accessoires électroniques ", L"Équipements de jeu ", L"Équipements de bureau ",
					L"Composants électroniques", L"Équipements de réseau", L"Produits domotiques ", L"Équipements médicaux électroniques"
			});
			this->nature_article->Location = System::Drawing::Point(12, 276);
			this->nature_article->Name = L"nature_article";
			this->nature_article->Size = System::Drawing::Size(292, 23);
			this->nature_article->TabIndex = 60;
			// 
			// tva
			// 
			this->tva->FormattingEnabled = true;
			this->tva->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"0.20", L"0.055", L"0.021" });
			this->tva->Location = System::Drawing::Point(278, 207);
			this->tva->Name = L"tva";
			this->tva->Size = System::Drawing::Size(121, 23);
			this->tva->TabIndex = 59;
			// 
			// seuilreapro
			// 
			this->seuilreapro->Location = System::Drawing::Point(230, 147);
			this->seuilreapro->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->seuilreapro->Name = L"seuilreapro";
			this->seuilreapro->Size = System::Drawing::Size(169, 23);
			this->seuilreapro->TabIndex = 58;
			// 
			// qte_article
			// 
			this->qte_article->Location = System::Drawing::Point(12, 148);
			this->qte_article->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->qte_article->Name = L"qte_article";
			this->qte_article->Size = System::Drawing::Size(169, 23);
			this->qte_article->TabIndex = 57;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(10, 129);
			this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(53, 15);
			this->label28->TabIndex = 56;
			this->label28->Text = L"Quantité";
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Location = System::Drawing::Point(450, 7);
			this->dataGridView5->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowHeadersWidth = 62;
			this->dataGridView5->RowTemplate->Height = 28;
			this->dataGridView5->Size = System::Drawing::Size(714, 528);
			this->dataGridView5->TabIndex = 55;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(9, 256);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(43, 15);
			this->label21->TabIndex = 54;
			this->label21->Text = L"Nature";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(275, 188);
			this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(29, 15);
			this->label24->TabIndex = 53;
			this->label24->Text = L"TVA";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(9, 188);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(27, 15);
			this->label25->TabIndex = 52;
			this->label25->Text = L"Prix";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(229, 129);
			this->label26->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(170, 15);
			this->label26->TabIndex = 51;
			this->label26->Text = L"Seuil de ré-approvisionnement";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(9, 66);
			this->label29->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(91, 15);
			this->label29->TabIndex = 48;
			this->label29->Text = L"Nom de l\'article";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(9, 8);
			this->label30->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(57, 15);
			this->label30->TabIndex = 47;
			this->label30->Text = L"ID Article";
			// 
			// id_article
			// 
			this->id_article->Location = System::Drawing::Point(12, 30);
			this->id_article->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->id_article->Name = L"id_article";
			this->id_article->Size = System::Drawing::Size(169, 23);
			this->id_article->TabIndex = 44;
			// 
			// option_stock
			// 
			this->option_stock->Controls->Add(this->supprimer_stock);
			this->option_stock->Controls->Add(this->nouveau_stock);
			this->option_stock->Controls->Add(this->modifier_stock);
			this->option_stock->Location = System::Drawing::Point(12, 432);
			this->option_stock->Name = L"option_stock";
			this->option_stock->Size = System::Drawing::Size(130, 105);
			this->option_stock->TabIndex = 39;
			this->option_stock->TabStop = false;
			this->option_stock->Text = L"Options";
			// 
			// supprimer_stock
			// 
			this->supprimer_stock->AutoSize = true;
			this->supprimer_stock->Location = System::Drawing::Point(4, 79);
			this->supprimer_stock->Name = L"supprimer_stock";
			this->supprimer_stock->Size = System::Drawing::Size(81, 19);
			this->supprimer_stock->TabIndex = 13;
			this->supprimer_stock->TabStop = true;
			this->supprimer_stock->Text = L"Supprimer";
			this->supprimer_stock->UseVisualStyleBackColor = true;
			// 
			// nouveau_stock
			// 
			this->nouveau_stock->AutoSize = true;
			this->nouveau_stock->Location = System::Drawing::Point(4, 22);
			this->nouveau_stock->Name = L"nouveau_stock";
			this->nouveau_stock->Size = System::Drawing::Size(73, 19);
			this->nouveau_stock->TabIndex = 11;
			this->nouveau_stock->TabStop = true;
			this->nouveau_stock->Text = L"Nouveau";
			this->nouveau_stock->UseVisualStyleBackColor = true;
			// 
			// modifier_stock
			// 
			this->modifier_stock->AutoSize = true;
			this->modifier_stock->Location = System::Drawing::Point(4, 51);
			this->modifier_stock->Name = L"modifier_stock";
			this->modifier_stock->Size = System::Drawing::Size(70, 19);
			this->modifier_stock->TabIndex = 12;
			this->modifier_stock->TabStop = true;
			this->modifier_stock->Text = L"Modifier";
			this->modifier_stock->UseVisualStyleBackColor = true;
			// 
			// btn_confirmer_stock
			// 
			this->btn_confirmer_stock->Location = System::Drawing::Point(175, 441);
			this->btn_confirmer_stock->Name = L"btn_confirmer_stock";
			this->btn_confirmer_stock->Size = System::Drawing::Size(78, 92);
			this->btn_confirmer_stock->TabIndex = 38;
			this->btn_confirmer_stock->Text = L"Confirmer";
			this->btn_confirmer_stock->UseVisualStyleBackColor = true;
			this->btn_confirmer_stock->Click += gcnew System::EventHandler(this, &MainForm::btn_confirmer_stock_Click_1);
			// 
			// btn_select_stock
			// 
			this->btn_select_stock->Location = System::Drawing::Point(278, 456);
			this->btn_select_stock->Name = L"btn_select_stock";
			this->btn_select_stock->Size = System::Drawing::Size(136, 59);
			this->btn_select_stock->TabIndex = 37;
			this->btn_select_stock->Text = L"Afficher le stock";
			this->btn_select_stock->UseVisualStyleBackColor = true;
			this->btn_select_stock->Click += gcnew System::EventHandler(this, &MainForm::btn_select_stock_Click);
			// 
			// prix_article
			// 
			this->prix_article->Location = System::Drawing::Point(12, 207);
			this->prix_article->Name = L"prix_article";
			this->prix_article->Size = System::Drawing::Size(192, 23);
			this->prix_article->TabIndex = 36;
			// 
			// nom_article
			// 
			this->nom_article->Location = System::Drawing::Point(12, 87);
			this->nom_article->Name = L"nom_article";
			this->nom_article->Size = System::Drawing::Size(387, 23);
			this->nom_article->TabIndex = 34;
			// 
			// Statistiques
			// 
			this->Statistiques->Controls->Add(this->Simulation);
			this->Statistiques->Controls->Add(this->numericUpDown4);
			this->Statistiques->Controls->Add(this->numericUpDown3);
			this->Statistiques->Controls->Add(this->numericUpDown2);
			this->Statistiques->Controls->Add(this->numericUpDown1);
			this->Statistiques->Controls->Add(this->button2);
			this->Statistiques->Controls->Add(this->demarque_stat);
			this->Statistiques->Controls->Add(this->remise_stat);
			this->Statistiques->Controls->Add(this->marge_stat);
			this->Statistiques->Controls->Add(this->tva_stat);
			this->Statistiques->Controls->Add(this->label42);
			this->Statistiques->Controls->Add(this->label43);
			this->Statistiques->Controls->Add(this->label44);
			this->Statistiques->Controls->Add(this->custom_remise_stat);
			this->Statistiques->Controls->Add(this->custom_demarque_stat);
			this->Statistiques->Controls->Add(this->custom_marge_stat);
			this->Statistiques->Controls->Add(this->label46);
			this->Statistiques->Controls->Add(this->label47);
			this->Statistiques->Controls->Add(this->label48);
			this->Statistiques->Controls->Add(this->label49);
			this->Statistiques->Controls->Add(this->groupBox4);
			this->Statistiques->Controls->Add(this->groupBox3);
			this->Statistiques->Controls->Add(this->groupBox2);
			this->Statistiques->Controls->Add(this->btn_mostpopular);
			this->Statistiques->Controls->Add(this->btn_lesspopular);
			this->Statistiques->Controls->Add(this->groupBox1);
			this->Statistiques->Controls->Add(this->btn_select_item_in_reap);
			this->Statistiques->Controls->Add(this->dataGridView6);
			this->Statistiques->Location = System::Drawing::Point(4, 24);
			this->Statistiques->Name = L"Statistiques";
			this->Statistiques->Size = System::Drawing::Size(1187, 543);
			this->Statistiques->TabIndex = 4;
			this->Statistiques->Text = L"Statistiques";
			this->Statistiques->UseVisualStyleBackColor = true;
			// 
			// Simulation
			// 
			this->Simulation->Location = System::Drawing::Point(146, 386);
			this->Simulation->Name = L"Simulation";
			this->Simulation->Size = System::Drawing::Size(125, 39);
			this->Simulation->TabIndex = 182;
			this->Simulation->Text = L"Simulation";
			this->Simulation->UseVisualStyleBackColor = true;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(416, 344);
			this->numericUpDown4->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(90, 23);
			this->numericUpDown4->TabIndex = 181;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(416, 298);
			this->numericUpDown3->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(90, 23);
			this->numericUpDown3->TabIndex = 180;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(416, 250);
			this->numericUpDown2->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(90, 23);
			this->numericUpDown2->TabIndex = 179;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(416, 201);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(90, 23);
			this->numericUpDown1->TabIndex = 178;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(300, 380);
			this->button2->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 45);
			this->button2->TabIndex = 177;
			this->button2->Text = L"Calculer";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// demarque_stat
			// 
			this->demarque_stat->FormattingEnabled = true;
			this->demarque_stat->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"0.02", L"0.03", L"0.05" });
			this->demarque_stat->Location = System::Drawing::Point(237, 345);
			this->demarque_stat->Name = L"demarque_stat";
			this->demarque_stat->Size = System::Drawing::Size(115, 23);
			this->demarque_stat->TabIndex = 176;
			// 
			// remise_stat
			// 
			this->remise_stat->FormattingEnabled = true;
			this->remise_stat->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"0.05", L"0.06" });
			this->remise_stat->Location = System::Drawing::Point(236, 296);
			this->remise_stat->Name = L"remise_stat";
			this->remise_stat->Size = System::Drawing::Size(115, 23);
			this->remise_stat->TabIndex = 175;
			// 
			// marge_stat
			// 
			this->marge_stat->FormattingEnabled = true;
			this->marge_stat->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"0.05", L"0.10", L"0.15" });
			this->marge_stat->Location = System::Drawing::Point(236, 248);
			this->marge_stat->Name = L"marge_stat";
			this->marge_stat->Size = System::Drawing::Size(115, 23);
			this->marge_stat->TabIndex = 174;
			// 
			// tva_stat
			// 
			this->tva_stat->FormattingEnabled = true;
			this->tva_stat->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"0.20", L"0.055", L"0.021" });
			this->tva_stat->Location = System::Drawing::Point(236, 201);
			this->tva_stat->Name = L"tva_stat";
			this->tva_stat->Size = System::Drawing::Size(115, 23);
			this->tva_stat->TabIndex = 173;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(41, 325);
			this->label42->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(116, 15);
			this->label42->TabIndex = 172;
			this->label42->Text = L"Démarque inconnue";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(41, 278);
			this->label43->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(117, 15);
			this->label43->TabIndex = 171;
			this->label43->Text = L"Remise commerciale";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(41, 230);
			this->label44->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(113, 15);
			this->label44->TabIndex = 170;
			this->label44->Text = L"Marge commerciale";
			// 
			// custom_remise_stat
			// 
			this->custom_remise_stat->Location = System::Drawing::Point(44, 298);
			this->custom_remise_stat->Name = L"custom_remise_stat";
			this->custom_remise_stat->Size = System::Drawing::Size(128, 23);
			this->custom_remise_stat->TabIndex = 169;
			// 
			// custom_demarque_stat
			// 
			this->custom_demarque_stat->Location = System::Drawing::Point(44, 343);
			this->custom_demarque_stat->Name = L"custom_demarque_stat";
			this->custom_demarque_stat->Size = System::Drawing::Size(128, 23);
			this->custom_demarque_stat->TabIndex = 168;
			// 
			// custom_marge_stat
			// 
			this->custom_marge_stat->Location = System::Drawing::Point(44, 250);
			this->custom_marge_stat->Name = L"custom_marge_stat";
			this->custom_marge_stat->Size = System::Drawing::Size(128, 23);
			this->custom_marge_stat->TabIndex = 167;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(234, 326);
			this->label46->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(116, 15);
			this->label46->TabIndex = 166;
			this->label46->Text = L"Démarque inconnue";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(233, 279);
			this->label47->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(117, 15);
			this->label47->TabIndex = 165;
			this->label47->Text = L"Remise commerciale";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(233, 231);
			this->label48->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(113, 15);
			this->label48->TabIndex = 164;
			this->label48->Text = L"Marge commerciale";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(234, 183);
			this->label49->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(29, 15);
			this->label49->TabIndex = 163;
			this->label49->Text = L"TVA";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->id_client_statistique);
			this->groupBox4->Controls->Add(this->btn_calculermontantclient);
			this->groupBox4->Controls->Add(this->montanttotal);
			this->groupBox4->Location = System::Drawing::Point(617, 445);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(561, 83);
			this->groupBox4->TabIndex = 162;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Montant total dépensé par un client";
			// 
			// id_client_statistique
			// 
			this->id_client_statistique->Location = System::Drawing::Point(9, 33);
			this->id_client_statistique->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->id_client_statistique->Name = L"id_client_statistique";
			this->id_client_statistique->Size = System::Drawing::Size(169, 23);
			this->id_client_statistique->TabIndex = 136;
			// 
			// btn_calculermontantclient
			// 
			this->btn_calculermontantclient->Location = System::Drawing::Point(449, 27);
			this->btn_calculermontantclient->Name = L"btn_calculermontantclient";
			this->btn_calculermontantclient->Size = System::Drawing::Size(93, 33);
			this->btn_calculermontantclient->TabIndex = 113;
			this->btn_calculermontantclient->Text = L"Calculer";
			this->btn_calculermontantclient->UseVisualStyleBackColor = true;
			this->btn_calculermontantclient->Click += gcnew System::EventHandler(this, &MainForm::btn_calculermontantclient_Click);
			// 
			// montanttotal
			// 
			this->montanttotal->Location = System::Drawing::Point(218, 33);
			this->montanttotal->Name = L"montanttotal";
			this->montanttotal->ReadOnly = true;
			this->montanttotal->Size = System::Drawing::Size(201, 23);
			this->montanttotal->TabIndex = 113;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->use_default_param);
			this->groupBox3->Controls->Add(this->use_custom_param);
			this->groupBox3->Location = System::Drawing::Point(13, 118);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(558, 53);
			this->groupBox3->TabIndex = 144;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Options";
			// 
			// use_default_param
			// 
			this->use_default_param->AutoSize = true;
			this->use_default_param->Location = System::Drawing::Point(27, 22);
			this->use_default_param->Name = L"use_default_param";
			this->use_default_param->Size = System::Drawing::Size(195, 19);
			this->use_default_param->TabIndex = 11;
			this->use_default_param->TabStop = true;
			this->use_default_param->Text = L"Utiliser les paramètres prédéfinis";
			this->use_default_param->UseVisualStyleBackColor = true;
			// 
			// use_custom_param
			// 
			this->use_custom_param->AutoSize = true;
			this->use_custom_param->Location = System::Drawing::Point(323, 22);
			this->use_custom_param->Name = L"use_custom_param";
			this->use_custom_param->Size = System::Drawing::Size(214, 19);
			this->use_custom_param->TabIndex = 12;
			this->use_custom_param->TabStop = true;
			this->use_custom_param->Text = L"Utiliser les paramètres personnalisés";
			this->use_custom_param->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label39);
			this->groupBox2->Controls->Add(this->valeur_achat__stat);
			this->groupBox2->Controls->Add(this->label40);
			this->groupBox2->Controls->Add(this->valeur_co__stat);
			this->groupBox2->Controls->Add(this->label41);
			this->groupBox2->Controls->Add(this->panier_moyen_stat);
			this->groupBox2->Location = System::Drawing::Point(13, 435);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(580, 92);
			this->groupBox2->TabIndex = 143;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Calculs";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(396, 30);
			this->label39->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(130, 15);
			this->label39->TabIndex = 87;
			this->label39->Text = L"Valeur d\'achat du stock";
			// 
			// valeur_achat__stat
			// 
			this->valeur_achat__stat->Location = System::Drawing::Point(399, 49);
			this->valeur_achat__stat->Name = L"valeur_achat__stat";
			this->valeur_achat__stat->ReadOnly = true;
			this->valeur_achat__stat->Size = System::Drawing::Size(157, 23);
			this->valeur_achat__stat->TabIndex = 86;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(203, 30);
			this->label40->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(160, 15);
			this->label40->TabIndex = 85;
			this->label40->Text = L"Valeur commerciale du stock";
			// 
			// valeur_co__stat
			// 
			this->valeur_co__stat->Location = System::Drawing::Point(206, 49);
			this->valeur_co__stat->Name = L"valeur_co__stat";
			this->valeur_co__stat->ReadOnly = true;
			this->valeur_co__stat->Size = System::Drawing::Size(157, 23);
			this->valeur_co__stat->TabIndex = 84;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(14, 30);
			this->label41->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(80, 15);
			this->label41->TabIndex = 83;
			this->label41->Text = L"Panier moyen";
			// 
			// panier_moyen_stat
			// 
			this->panier_moyen_stat->Location = System::Drawing::Point(17, 49);
			this->panier_moyen_stat->Name = L"panier_moyen_stat";
			this->panier_moyen_stat->ReadOnly = true;
			this->panier_moyen_stat->Size = System::Drawing::Size(157, 23);
			this->panier_moyen_stat->TabIndex = 82;
			// 
			// btn_mostpopular
			// 
			this->btn_mostpopular->Location = System::Drawing::Point(986, 365);
			this->btn_mostpopular->Name = L"btn_mostpopular";
			this->btn_mostpopular->Size = System::Drawing::Size(155, 59);
			this->btn_mostpopular->TabIndex = 142;
			this->btn_mostpopular->Text = L"10 Articles les plus vendus";
			this->btn_mostpopular->UseVisualStyleBackColor = true;
			this->btn_mostpopular->Click += gcnew System::EventHandler(this, &MainForm::btn_mostpopular_Click);
			// 
			// btn_lesspopular
			// 
			this->btn_lesspopular->Location = System::Drawing::Point(826, 365);
			this->btn_lesspopular->Name = L"btn_lesspopular";
			this->btn_lesspopular->Size = System::Drawing::Size(155, 59);
			this->btn_lesspopular->TabIndex = 141;
			this->btn_lesspopular->Text = L"10 Articles les moins vendus";
			this->btn_lesspopular->UseVisualStyleBackColor = true;
			this->btn_lesspopular->Click += gcnew System::EventHandler(this, &MainForm::btn_lesspopular_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->calculer_chiffre_affaire);
			this->groupBox1->Controls->Add(this->dateTimePicker2);
			this->groupBox1->Controls->Add(this->chiffre_affaire);
			this->groupBox1->Location = System::Drawing::Point(13, 19);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(580, 79);
			this->groupBox1->TabIndex = 140;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Chiffre d\'affaire sur un mois donné";
			// 
			// calculer_chiffre_affaire
			// 
			this->calculer_chiffre_affaire->Location = System::Drawing::Point(465, 29);
			this->calculer_chiffre_affaire->Name = L"calculer_chiffre_affaire";
			this->calculer_chiffre_affaire->Size = System::Drawing::Size(93, 33);
			this->calculer_chiffre_affaire->TabIndex = 112;
			this->calculer_chiffre_affaire->Text = L"Calculer";
			this->calculer_chiffre_affaire->UseVisualStyleBackColor = true;
			this->calculer_chiffre_affaire->Click += gcnew System::EventHandler(this, &MainForm::calculer_chiffre_affaire_Click);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(22, 35);
			this->dateTimePicker2->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(128, 23);
			this->dateTimePicker2->TabIndex = 72;
			// 
			// chiffre_affaire
			// 
			this->chiffre_affaire->Location = System::Drawing::Point(205, 35);
			this->chiffre_affaire->Name = L"chiffre_affaire";
			this->chiffre_affaire->ReadOnly = true;
			this->chiffre_affaire->Size = System::Drawing::Size(201, 23);
			this->chiffre_affaire->TabIndex = 81;
			// 
			// btn_select_item_in_reap
			// 
			this->btn_select_item_in_reap->Location = System::Drawing::Point(664, 365);
			this->btn_select_item_in_reap->Name = L"btn_select_item_in_reap";
			this->btn_select_item_in_reap->Size = System::Drawing::Size(155, 59);
			this->btn_select_item_in_reap->TabIndex = 139;
			this->btn_select_item_in_reap->Text = L"Afficher les articles sous le seuil de réapprovisionnement";
			this->btn_select_item_in_reap->UseVisualStyleBackColor = true;
			this->btn_select_item_in_reap->Click += gcnew System::EventHandler(this, &MainForm::btn_select_item_in_reap_Click);
			// 
			// dataGridView6
			// 
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->Location = System::Drawing::Point(617, 16);
			this->dataGridView6->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->RowHeadersWidth = 62;
			this->dataGridView6->RowTemplate->Height = 28;
			this->dataGridView6->Size = System::Drawing::Size(561, 337);
			this->dataGridView6->TabIndex = 138;
			// 
			// personnel_suivant
			// 
			this->personnel_suivant->Enabled = false;
			this->personnel_suivant->Location = System::Drawing::Point(366, 511);
			this->personnel_suivant->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->personnel_suivant->Name = L"personnel_suivant";
			this->personnel_suivant->Size = System::Drawing::Size(48, 20);
			this->personnel_suivant->TabIndex = 70;
			this->personnel_suivant->Text = L">";
			this->personnel_suivant->UseVisualStyleBackColor = true;
			// 
			// personnel_precedent
			// 
			this->personnel_precedent->Enabled = false;
			this->personnel_precedent->Location = System::Drawing::Point(278, 511);
			this->personnel_precedent->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->personnel_precedent->Name = L"personnel_precedent";
			this->personnel_precedent->Size = System::Drawing::Size(48, 20);
			this->personnel_precedent->TabIndex = 69;
			this->personnel_precedent->Text = L"<";
			this->personnel_precedent->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1195, 675);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->Personnel->ResumeLayout(false);
			this->Personnel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_personnel))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_superieur))->EndInit();
			this->gb_options_personnel->ResumeLayout(false);
			this->gb_options_personnel->PerformLayout();
			this->Clients->ResumeLayout(false);
			this->Clients->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_client))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_client))->EndInit();
			this->options_client->ResumeLayout(false);
			this->options_client->PerformLayout();
			this->Commandes->ResumeLayout(false);
			this->Commandes->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_commande))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nb_article))->EndInit();
			this->Stock->ResumeLayout(false);
			this->Stock->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seuilreapro))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->qte_article))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_article))->EndInit();
			this->option_stock->ResumeLayout(false);
			this->option_stock->PerformLayout();
			this->Statistiques->ResumeLayout(false);
			this->Statistiques->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_client_statistique))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc::CLservicesPersonnel();
		this->oSvcClient = gcnew NS_Comp_Svc::CLservicesClient();
		this->oSvcS = gcnew NS_Comp_Svc::CLservicestock();
		this->oSvcCommande = gcnew NS_Comp_Svc::CLservicesCommande();
		this->oSvcStats = gcnew NS_Comp_Svc::CLserviceStatistique();
		this->myDatabase = gcnew NS_Comp_Data::CLcad();	
		this->LoadComboBoxData();
	}
	private: System::Void buttonClose_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
	private: System::Void select_personnel_click(System::Object^ sender, System::EventArgs^ e) {
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->rechercherUnPersonnel("Rsl", this->txtbx_nom_personnel->Text, this->txtbx_prenom_personnel->Text);
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
	}
	private: System::Void btn_confirmer_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->rb_nouveau_personnel->Checked) {
			int id;	
			id = this->oSvc->ajouterUnPersonnel(this->txtbx_nom_personnel->Text, this->txtbx_prenom_personnel->Text, Convert::ToInt32(this->id_superieur->Text), this->date_embauche->Text, this->txtbx_numero_adresse->Text, this->txtbx_nom_rue->Text, this->txtbx_code_postal->Text, this->txtbx_ville->Text);
			this->id_personnel->Text = Convert::ToString(id);
		}
		if (this->rb_modifier_personnel->Checked) {
			this->oSvc->modifierUnPersonnel(Int32::Parse(this->id_personnel->Text), this->txtbx_nom_personnel->Text, this->txtbx_prenom_personnel->Text, Convert::ToInt32(this->id_superieur->Text), this->date_embauche->Text, this->txtbx_numero_adresse->Text, this->txtbx_nom_rue->Text, this->txtbx_code_postal->Text, this->txtbx_ville->Text);
		}
		if (this->rb_supprimer_personnel->Checked) {
			this->oSvc->supprimerUnPersonnel(Int32::Parse(this->id_personnel->Text));
		}
	}
	private: System::Void txtbx_nom_personnel_Leave(System::Object^ sender, System::EventArgs^ e) {
		this->txtbx_nom_personnel->Text = this->txtbx_nom_personnel->Text->ToUpper();
	}
	private: System::Void txtbx_nom_personnel_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// Nombre maximal de caractères autorisés dans le TextBox
		int maxLength = 50; // Changez cette valeur selon vos besoins

		// Vérifier si le nombre actuel de caractères dépasse la limite
		if (txtbx_nom_personnel->Text->Length >= maxLength && e->KeyChar != '\b') { // '\b' représente la touche de suppression
			// Empêcher l'ajout de caractères supplémentaires si la limite est atteinte
			e->Handled = true;
		}
	}
	private: System::Void txtbx_prenom_personnel_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// Nombre maximal de caractères autorisés dans le TextBox
		int maxLength = 50; // Changez cette valeur selon vos besoins

		// Vérifier si le nombre actuel de caractères dépasse la limite
		if (txtbx_prenom_personnel->Text->Length >= maxLength && e->KeyChar != '\b') { // '\b' représente la touche de suppression
			// Empêcher l'ajout de caractères supplémentaires si la limite est atteinte
			e->Handled = true;
		}
	}
	private: System::Void txtbx_prenom_personnel_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (txtbx_prenom_personnel->Text->Length > 0) {
			// Récupérer le texte actuel de la TextBox
			String^ text = txtbx_prenom_personnel->Text;

			// Mettre la première lettre en majuscule
			text = System::Globalization::CultureInfo::CurrentCulture->TextInfo->ToTitleCase(text->ToLower());

			// Mettre à jour le texte de la TextBox avec la première lettre en majuscule
			txtbx_prenom_personnel->Text = text;
		}
	}
	private: System::Void confirmer_client_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->rb_nouveau_client->Checked) {
			int id;
			id = this->oSvcClient->ajouterUnClient(this->nom_client->Text, this->prenom_client->Text, this->date_naissance->Text, this->num_rue_client_livre->Text, this->nom_rue_client_livre->Text, this->codepostal_client_livre->Text, this->ville_client_livre->Text, this->num_rue_client_fact->Text, this->nom_rue_client_fact->Text, this->codepostal_client_fact->Text, this->ville_client_fact->Text);
			this->id_client->Text = Convert::ToString(id);
		}
		if (this->rb_modifier_client->Checked) {
			this->oSvcClient->modifierUnClient(Int32::Parse(this->id_client->Text), this->nom_client->Text, this->prenom_client->Text, this->date_naissance->Text, this->num_rue_client_livre->Text, this->nom_rue_client_livre->Text, this->codepostal_client_livre->Text, this->ville_client_livre->Text, this->num_rue_client_fact->Text, this->nom_rue_client_fact->Text, this->codepostal_client_fact->Text, this->ville_client_fact->Text);
		}
		if (this->rb_supprimer_client->Checked) {
			this->oSvcClient->supprimerUnClient(Int32::Parse(this->id_client->Text));
		}
	}
	private: System::Void btn_copier_adresse_Click(System::Object^ sender, System::EventArgs^ e) {
		this->num_rue_client_fact->Text = this->num_rue_client_livre->Text;
		this->nom_rue_client_fact->Text = this->nom_rue_client_livre->Text;
		this->codepostal_client_fact->Text = this->codepostal_client_livre->Text;
		this->ville_client_fact->Text = this->ville_client_livre->Text;
	}
	private: System::Void afficher_clients_Click(System::Object^ sender, System::EventArgs^ e) {
		this->id_cli = 0;
		this->dgv_client->Refresh();
		this->oDs = this->oSvcClient->rechercherUnClient("Rsl", this->nom_client->Text, this->prenom_client->Text);
		this->dgv_client->DataSource = this->oDs;
		this->dgv_client->DataMember = "Rsl";
		this->id_client->Text = dgv_client->Rows[id_cli]->Cells[0]->FormattedValue->ToString();
		this->nom_client->Text = dgv_client->Rows[id_cli]->Cells[1]->FormattedValue->ToString();
		this->prenom_client->Text = dgv_client->Rows[id_cli]->Cells[2]->FormattedValue->ToString();
		this->date_naissance->Text = dgv_client->Rows[id_cli]->Cells[3]->FormattedValue->ToString();
		this->num_rue_client_fact->Text = dgv_client->Rows[id_cli]->Cells[7]->FormattedValue->ToString();
		this->nom_rue_client_fact->Text = dgv_client->Rows[id_cli]->Cells[8]->FormattedValue->ToString();
		this->codepostal_client_fact->Text = dgv_client->Rows[id_cli]->Cells[9]->FormattedValue->ToString();
		this->ville_client_fact->Text = dgv_client->Rows[id_cli]->Cells[10]->FormattedValue->ToString();
		this->num_rue_client_livre->Text = dgv_client->Rows[id_cli]->Cells[12]->FormattedValue->ToString();
		this->nom_rue_client_livre->Text = dgv_client->Rows[id_cli]->Cells[13]->FormattedValue->ToString();
		this->codepostal_client_livre->Text = dgv_client->Rows[id_cli]->Cells[14]->FormattedValue->ToString();
		this->ville_client_livre->Text = dgv_client->Rows[id_cli]->Cells[15]->FormattedValue->ToString();
		this->client_suivant->Enabled=true;
		if (dgv_client->Rows[id_cli + 1]->Cells[0]->FormattedValue->ToString() == "") {
			this->client_suivant->Enabled = false;
		}
		if (id_cli == 0) {
			this->client_precedent->Enabled = false;
		}
	}
	private: System::Void nom_client_Leave(System::Object^ sender, System::EventArgs^ e) {
		this->nom_client->Text = this->nom_client->Text->ToUpper();
	}
	private: System::Void btn_select_stock_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView5->Refresh();
		this->oDs = this->oSvcS->rechercherUnArticle("Rsl", this->nom_article->Text);
		this->dataGridView5->DataSource = this->oDs;
		this->dataGridView5->DataMember = "Rsl";
	}
	private: System::Void btn_confirmer_stock_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (this->nouveau_stock->Checked) {
			int idarticle;
			idarticle = this->oSvcS->ajouterUnArticle(this->nom_article->Text, Convert::ToInt32(this->qte_article->Text), Convert::ToInt32(this->seuilreapro->Text), this->prix_article->Text, this->tva->Text, this->nature_article->Text, this->couleur_article->Text);
			this->id_article->Text = Convert::ToString(idarticle);
			this->LoadComboBoxData();

		}
		if (this->modifier_stock->Checked) {
			this->oSvcS->modifierUnArticle(Int32::Parse(this->id_article->Text), this->nom_article->Text, Int32::Parse(this->qte_article->Text), Int32::Parse(this->seuilreapro->Text), this->prix_article->Text, this->tva->Text, this->nature_article->Text, this->couleur_article->Text);
		}
		if (this->supprimer_stock->Checked) {
			this->oSvcS->supprimerUnArticle(Int32::Parse(this->id_article->Text));
		}
	}
	private: System::Void client_precedent_Click(System::Object^ sender, System::EventArgs^ e) {
		this->id_cli--;
		this->id_client->Text = dgv_client->Rows[id_cli]->Cells[0]->FormattedValue->ToString();
		this->nom_client->Text = dgv_client->Rows[id_cli]->Cells[1]->FormattedValue->ToString();
		this->prenom_client->Text = dgv_client->Rows[id_cli]->Cells[2]->FormattedValue->ToString();
		this->date_naissance->Text = dgv_client->Rows[id_cli]->Cells[3]->FormattedValue->ToString();
		this->num_rue_client_fact->Text = dgv_client->Rows[id_cli]->Cells[7]->FormattedValue->ToString();
		this->nom_rue_client_fact->Text = dgv_client->Rows[id_cli]->Cells[8]->FormattedValue->ToString();
		this->codepostal_client_fact->Text = dgv_client->Rows[id_cli]->Cells[9]->FormattedValue->ToString();
		this->ville_client_fact->Text = dgv_client->Rows[id_cli]->Cells[10]->FormattedValue->ToString();
		this->num_rue_client_livre->Text = dgv_client->Rows[id_cli]->Cells[12]->FormattedValue->ToString();
		this->nom_rue_client_livre->Text = dgv_client->Rows[id_cli]->Cells[13]->FormattedValue->ToString();
		this->codepostal_client_livre->Text = dgv_client->Rows[id_cli]->Cells[14]->FormattedValue->ToString();
		this->ville_client_livre->Text = dgv_client->Rows[id_cli]->Cells[15]->FormattedValue->ToString();
		if (id_cli == 0) {
			this->client_precedent->Enabled = false;
		}
		this->client_suivant->Enabled = true;
	}

	private: System::Void client_suivant_Click(System::Object^ sender, System::EventArgs^ e) {
		this->id_cli++;
		this->id_client->Text = dgv_client->Rows[id_cli]->Cells[0]->FormattedValue->ToString();
		this->nom_client->Text = dgv_client->Rows[id_cli]->Cells[1]->FormattedValue->ToString();
		this->prenom_client->Text = dgv_client->Rows[id_cli]->Cells[2]->FormattedValue->ToString();
		this->date_naissance->Text = dgv_client->Rows[id_cli]->Cells[3]->FormattedValue->ToString();
		this->num_rue_client_fact->Text = dgv_client->Rows[id_cli]->Cells[7]->FormattedValue->ToString();
		this->nom_rue_client_fact->Text = dgv_client->Rows[id_cli]->Cells[8]->FormattedValue->ToString();
		this->codepostal_client_fact->Text = dgv_client->Rows[id_cli]->Cells[9]->FormattedValue->ToString();
		this->ville_client_fact->Text = dgv_client->Rows[id_cli]->Cells[10]->FormattedValue->ToString();
		this->num_rue_client_livre->Text = dgv_client->Rows[id_cli]->Cells[12]->FormattedValue->ToString();
		this->nom_rue_client_livre->Text = dgv_client->Rows[id_cli]->Cells[13]->FormattedValue->ToString();
		this->codepostal_client_livre->Text = dgv_client->Rows[id_cli]->Cells[14]->FormattedValue->ToString();
		this->ville_client_livre->Text = dgv_client->Rows[id_cli]->Cells[15]->FormattedValue->ToString();
		if (dgv_client->Rows[id_cli + 1]->Cells[0]->FormattedValue->ToString() == "") {
			this->client_suivant->Enabled = false;
		}
		this->client_precedent->Enabled = true;
	}
	private: System::Void btn_select_commandes_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView3->Refresh();
		this->oDs = this->oSvcCommande->rechercherLesCommandes("Rs", Int32::Parse(this->id_commande->Text));
		this->dataGridView3->DataSource = this->oDs;
		this->dataGridView3->DataMember = "Rs";
	}
	private: System::Void btn_afficher_client_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView4->Refresh();
		this->oDs = this->oSvcClient->rechercherUnClient("Rsl", this->nom_client->Text, this->prenom_client->Text);
		this->dataGridView4->DataSource = this->oDs;
		this->dataGridView4->DataMember = "Rsl";
	}
	private: System::Void btn_ajouter_commande_Click(System::Object^ sender, System::EventArgs^ e) {
		int id;
		id = this->oSvcCommande->ajouterUneCommande(this->date_cmd->Text, this->date_livraison->Text, Int32::Parse(this->id_client_commande->Text));
		this->id_commande->Text = Convert::ToString(id);
	}
	private: System::Void btn_ajouter_article_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			this->oSvcCommande->ajouterLigneCommande(this->article->Text, Int32::Parse(this->id_commande->Text), Int32::Parse(this->nb_article->Text));
		}
		catch (Exception^ ex) {
			MessageBox::Show("Pas assez en stock");
		}
	}
	private: System::Void btn_modifier_commande_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvcCommande->modifierUneCommande(Convert::ToInt32(this->id_commande->Text), Convert::ToInt32(this->id_client_commande->Text), this->date_livraison->Text);
	}

	private: System::Void btn_supprimer_article_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvcCommande->supprimerLigneCommande(this->article->Text, Convert::ToInt32(this->id_commande->Text));
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView2->Refresh();
		this->oDs = this->oSvcCommande->rechercherUneCommande("Rsl", Int32::Parse(this->id_commande->Text));
		this->dataGridView2->DataSource = this->oDs;
		this->dataGridView2->DataMember = "Rsl";
	}
	private: System::Void calculer_chiffre_affaire_Click(System::Object^ sender, System::EventArgs^ e) {
	this->chiffre_affaire->Text = Convert::ToString(this->oSvcStats->afficherChiffreAffMois(this->dateTimePicker2->Text));
	}

	private: System::Void btn_calculermontantclient_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			this->montanttotal->Text = Convert::ToString(this->oSvcStats->afficherMontantAchatClient(this->id_client_statistique->Text));
		}
		catch (Exception^ ex) {
			MessageBox::Show("ID Incorrect");
		}
	}
	private: System::Void btn_select_item_in_reap_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView6->Refresh();
		this->oDs = this->oSvcStats->afficherArticleSousLeSeuil("Rsl");
		this->dataGridView6->DataSource = this->oDs;
		this->dataGridView6->DataMember = "Rsl";
	}

private: System::Void btn_lesspopular_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView6->Refresh();
	this->oDs = this->oSvcStats->afficherArticleMoinsVendu("Rsl");
	this->dataGridView6->DataSource = this->oDs;
	this->dataGridView6->DataMember = "Rsl";
}
private: System::Void btn_mostpopular_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView6->Refresh();
	this->oDs = this->oSvcStats->afficherArticlePlusVendu("Rsl");
	this->dataGridView6->DataSource = this->oDs;
	this->dataGridView6->DataMember = "Rsl";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int valeur_achat = this->oSvcStats->ValeurAchatStock();
	this->valeur_achat__stat->Text = Convert::ToString(valeur_achat);

	int valeur_commercial = this->oSvcStats->ValeurCommercialStock();
	this->valeur_co__stat->Text = Convert::ToString(valeur_commercial);

	int paniermoyen = this->oSvcStats->PanierMoyen();
	this->panier_moyen_stat->Text = Convert::ToString(paniermoyen);
}
private: System::Void btn_supprimer_commande_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvcCommande->supprimerUneCommande(Convert::ToInt32(this->id_commande->Text));
}
};
}