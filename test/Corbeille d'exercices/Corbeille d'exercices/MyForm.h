#pragma once
#include "CLservicePersonnel.h"

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





	private: NS_Comp_Svc::CLservicesPersonnel^ oSvc;
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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::TextBox^ codepostal_client;


private: System::Windows::Forms::NumericUpDown^ id_client;
private: System::Windows::Forms::TextBox^ num_rue_client;
private: System::Windows::Forms::TextBox^ ville_client;





	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
private: System::Windows::Forms::GroupBox^ options_client;
private: System::Windows::Forms::RadioButton^ rb_supprimer_client;


private: System::Windows::Forms::RadioButton^ rb_nouveau_client;
private: System::Windows::Forms::RadioButton^ rb_modifier_client;
private: System::Windows::Forms::Button^ confirmer_client;
private: System::Windows::Forms::Button^ afficher_clients;





private: System::Windows::Forms::TextBox^ nom_rue_client;

private: System::Windows::Forms::TextBox^ prenom_client;

private: System::Windows::Forms::TextBox^ nom_client;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ button2;

private: System::Windows::Forms::Label^ label22;


private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::DataGridView^ dataGridView3;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::DataGridView^ dataGridView2;
private: System::Windows::Forms::DataGridView^ dataGridView4;
private: System::Windows::Forms::Button^ button3;

private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::DataGridView^ dataGridView5;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label30;

private: System::Windows::Forms::NumericUpDown^ numericUpDown3;

private: System::Windows::Forms::GroupBox^ groupBox1;
private: System::Windows::Forms::RadioButton^ radioButton1;
private: System::Windows::Forms::RadioButton^ radioButton2;
private: System::Windows::Forms::RadioButton^ radioButton3;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::ComboBox^ comboBox3;
private: System::Windows::Forms::ComboBox^ comboBox2;






















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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->codepostal_client = (gcnew System::Windows::Forms::TextBox());
			this->id_client = (gcnew System::Windows::Forms::NumericUpDown());
			this->num_rue_client = (gcnew System::Windows::Forms::TextBox());
			this->ville_client = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->options_client = (gcnew System::Windows::Forms::GroupBox());
			this->rb_supprimer_client = (gcnew System::Windows::Forms::RadioButton());
			this->rb_nouveau_client = (gcnew System::Windows::Forms::RadioButton());
			this->rb_modifier_client = (gcnew System::Windows::Forms::RadioButton());
			this->confirmer_client = (gcnew System::Windows::Forms::Button());
			this->afficher_clients = (gcnew System::Windows::Forms::Button());
			this->nom_rue_client = (gcnew System::Windows::Forms::TextBox());
			this->prenom_client = (gcnew System::Windows::Forms::TextBox());
			this->nom_client = (gcnew System::Windows::Forms::TextBox());
			this->Commandes = (gcnew System::Windows::Forms::TabPage());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->btn_supprimer_commande = (gcnew System::Windows::Forms::Button());
			this->btn_modifier_commande = (gcnew System::Windows::Forms::Button());
			this->btn_ajouter_commande = (gcnew System::Windows::Forms::Button());
			this->btn_select_commandes = (gcnew System::Windows::Forms::Button());
			this->Stock = (gcnew System::Windows::Forms::TabPage());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->Statistiques = (gcnew System::Windows::Forms::TabPage());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->Personnel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_personnel))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_superieur))->BeginInit();
			this->gb_options_personnel->SuspendLayout();
			this->Clients->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_client))->BeginInit();
			this->options_client->SuspendLayout();
			this->Commandes->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->Stock->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			this->groupBox1->SuspendLayout();
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
			this->rb_modifier_personnel->Location = System::Drawing::Point(4, 50);
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
			this->rb_supprimer_personnel->Location = System::Drawing::Point(4, 80);
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
			this->panel1->Size = System::Drawing::Size(1188, 84);
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
			this->Title->Location = System::Drawing::Point(32, 24);
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
			this->tabControl1->Size = System::Drawing::Size(1188, 570);
			this->tabControl1->TabIndex = 2;
			// 
			// Personnel
			// 
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
			this->Personnel->Size = System::Drawing::Size(1180, 542);
			this->Personnel->TabIndex = 0;
			this->Personnel->Text = L"Personnel";
			this->Personnel->UseVisualStyleBackColor = true;
			// 
			// dgv_enr
			// 
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(466, 7);
			this->dgv_enr->Margin = System::Windows::Forms::Padding(2);
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
			this->label5->Location = System::Drawing::Point(9, 173);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(101, 15);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Date d\'embauche";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 122);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 15);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Prénom";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 61);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 15);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Nom";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 8);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 15);
			this->label2->TabIndex = 24;
			this->label2->Text = L"ID personnel";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(237, 9);
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
			this->id_personnel->Location = System::Drawing::Point(12, 30);
			this->id_personnel->Margin = System::Windows::Forms::Padding(2);
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
			this->id_superieur->Location = System::Drawing::Point(240, 30);
			this->id_superieur->Margin = System::Windows::Forms::Padding(2);
			this->id_superieur->Name = L"id_superieur";
			this->id_superieur->Size = System::Drawing::Size(163, 23);
			this->id_superieur->TabIndex = 17;
			// 
			// date_embauche
			// 
			this->date_embauche->CustomFormat = L"yyyy-MM-dd";
			this->date_embauche->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->date_embauche->Location = System::Drawing::Point(12, 197);
			this->date_embauche->Margin = System::Windows::Forms::Padding(2);
			this->date_embauche->Name = L"date_embauche";
			this->date_embauche->Size = System::Drawing::Size(392, 23);
			this->date_embauche->TabIndex = 16;
			// 
			// gb_options_personnel
			// 
			this->gb_options_personnel->Controls->Add(this->rb_supprimer_personnel);
			this->gb_options_personnel->Controls->Add(this->rb_nouveau_personnel);
			this->gb_options_personnel->Controls->Add(this->rb_modifier_personnel);
			this->gb_options_personnel->Location = System::Drawing::Point(12, 423);
			this->gb_options_personnel->Name = L"gb_options_personnel";
			this->gb_options_personnel->Size = System::Drawing::Size(130, 105);
			this->gb_options_personnel->TabIndex = 15;
			this->gb_options_personnel->TabStop = false;
			this->gb_options_personnel->Text = L"Options";
			// 
			// btn_confirmer_personnel
			// 
			this->btn_confirmer_personnel->Location = System::Drawing::Point(175, 431);
			this->btn_confirmer_personnel->Name = L"btn_confirmer_personnel";
			this->btn_confirmer_personnel->Size = System::Drawing::Size(78, 92);
			this->btn_confirmer_personnel->TabIndex = 14;
			this->btn_confirmer_personnel->Text = L"Confirmer";
			this->btn_confirmer_personnel->UseVisualStyleBackColor = true;
			this->btn_confirmer_personnel->Click += gcnew System::EventHandler(this, &MainForm::btn_confirmer_personnel_Click);
			// 
			// btn_select_personnel
			// 
			this->btn_select_personnel->Location = System::Drawing::Point(278, 448);
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
			this->txtbx_prenom_personnel->Location = System::Drawing::Point(12, 141);
			this->txtbx_prenom_personnel->Name = L"txtbx_prenom_personnel";
			this->txtbx_prenom_personnel->Size = System::Drawing::Size(392, 23);
			this->txtbx_prenom_personnel->TabIndex = 2;
			this->txtbx_prenom_personnel->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::txtbx_nom_personnel_KeyPress);
			this->txtbx_prenom_personnel->Leave += gcnew System::EventHandler(this, &MainForm::txtbx_prenom_personnel_Leave);
			// 
			// txtbx_nom_personnel
			// 
			this->txtbx_nom_personnel->Location = System::Drawing::Point(12, 80);
			this->txtbx_nom_personnel->Name = L"txtbx_nom_personnel";
			this->txtbx_nom_personnel->Size = System::Drawing::Size(392, 23);
			this->txtbx_nom_personnel->TabIndex = 1;
			this->txtbx_nom_personnel->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::txtbx_nom_personnel_KeyPress);
			this->txtbx_nom_personnel->Leave += gcnew System::EventHandler(this, &MainForm::txtbx_nom_personnel_Leave);
			// 
			// Clients
			// 
			this->Clients->Controls->Add(this->dataGridView1);
			this->Clients->Controls->Add(this->label6);
			this->Clients->Controls->Add(this->label11);
			this->Clients->Controls->Add(this->label12);
			this->Clients->Controls->Add(this->label13);
			this->Clients->Controls->Add(this->label14);
			this->Clients->Controls->Add(this->label15);
			this->Clients->Controls->Add(this->label16);
			this->Clients->Controls->Add(this->label17);
			this->Clients->Controls->Add(this->codepostal_client);
			this->Clients->Controls->Add(this->id_client);
			this->Clients->Controls->Add(this->num_rue_client);
			this->Clients->Controls->Add(this->ville_client);
			this->Clients->Controls->Add(this->dateTimePicker1);
			this->Clients->Controls->Add(this->options_client);
			this->Clients->Controls->Add(this->confirmer_client);
			this->Clients->Controls->Add(this->afficher_clients);
			this->Clients->Controls->Add(this->nom_rue_client);
			this->Clients->Controls->Add(this->prenom_client);
			this->Clients->Controls->Add(this->nom_client);
			this->Clients->Location = System::Drawing::Point(4, 24);
			this->Clients->Name = L"Clients";
			this->Clients->Padding = System::Windows::Forms::Padding(3);
			this->Clients->Size = System::Drawing::Size(1180, 542);
			this->Clients->TabIndex = 1;
			this->Clients->Text = L"Clients";
			this->Clients->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(466, 7);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(698, 528);
			this->dataGridView1->TabIndex = 55;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(9, 376);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(30, 15);
			this->label6->TabIndex = 54;
			this->label6->Text = L"Ville";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(9, 329);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(69, 15);
			this->label11->TabIndex = 53;
			this->label11->Text = L"Code Postal";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(9, 281);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(82, 15);
			this->label12->TabIndex = 52;
			this->label12->Text = L"Nom de la rue";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(10, 233);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(87, 15);
			this->label13->TabIndex = 51;
			this->label13->Text = L"Numéro de rue";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(9, 173);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(102, 15);
			this->label14->TabIndex = 50;
			this->label14->Text = L"Date de naissance";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(9, 122);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(49, 15);
			this->label15->TabIndex = 49;
			this->label15->Text = L"Prénom";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(9, 61);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(34, 15);
			this->label16->TabIndex = 48;
			this->label16->Text = L"Nom";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(9, 8);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(53, 15);
			this->label17->TabIndex = 47;
			this->label17->Text = L"ID Client";
			// 
			// codepostal_client
			// 
			this->codepostal_client->Location = System::Drawing::Point(12, 348);
			this->codepostal_client->Name = L"codepostal_client";
			this->codepostal_client->Size = System::Drawing::Size(392, 23);
			this->codepostal_client->TabIndex = 45;
			// 
			// id_client
			// 
			this->id_client->Location = System::Drawing::Point(12, 30);
			this->id_client->Margin = System::Windows::Forms::Padding(2);
			this->id_client->Name = L"id_client";
			this->id_client->Size = System::Drawing::Size(163, 23);
			this->id_client->TabIndex = 44;
			// 
			// num_rue_client
			// 
			this->num_rue_client->Location = System::Drawing::Point(13, 250);
			this->num_rue_client->Name = L"num_rue_client";
			this->num_rue_client->Size = System::Drawing::Size(203, 23);
			this->num_rue_client->TabIndex = 43;
			// 
			// ville_client
			// 
			this->ville_client->Location = System::Drawing::Point(12, 394);
			this->ville_client->Name = L"ville_client";
			this->ville_client->Size = System::Drawing::Size(392, 23);
			this->ville_client->TabIndex = 42;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(12, 197);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(2);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(392, 23);
			this->dateTimePicker1->TabIndex = 40;
			// 
			// options_client
			// 
			this->options_client->Controls->Add(this->rb_supprimer_client);
			this->options_client->Controls->Add(this->rb_nouveau_client);
			this->options_client->Controls->Add(this->rb_modifier_client);
			this->options_client->Location = System::Drawing::Point(12, 423);
			this->options_client->Name = L"options_client";
			this->options_client->Size = System::Drawing::Size(130, 105);
			this->options_client->TabIndex = 39;
			this->options_client->TabStop = false;
			this->options_client->Text = L"Options";
			// 
			// rb_supprimer_client
			// 
			this->rb_supprimer_client->AutoSize = true;
			this->rb_supprimer_client->Location = System::Drawing::Point(4, 80);
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
			this->rb_modifier_client->Location = System::Drawing::Point(4, 50);
			this->rb_modifier_client->Name = L"rb_modifier_client";
			this->rb_modifier_client->Size = System::Drawing::Size(70, 19);
			this->rb_modifier_client->TabIndex = 12;
			this->rb_modifier_client->TabStop = true;
			this->rb_modifier_client->Text = L"Modifier";
			this->rb_modifier_client->UseVisualStyleBackColor = true;
			// 
			// confirmer_client
			// 
			this->confirmer_client->Location = System::Drawing::Point(175, 431);
			this->confirmer_client->Name = L"confirmer_client";
			this->confirmer_client->Size = System::Drawing::Size(78, 92);
			this->confirmer_client->TabIndex = 38;
			this->confirmer_client->Text = L"Confirmer";
			this->confirmer_client->UseVisualStyleBackColor = true;
			// 
			// afficher_clients
			// 
			this->afficher_clients->Location = System::Drawing::Point(278, 448);
			this->afficher_clients->Name = L"afficher_clients";
			this->afficher_clients->Size = System::Drawing::Size(136, 59);
			this->afficher_clients->TabIndex = 37;
			this->afficher_clients->Text = L"Afficher les clients";
			this->afficher_clients->UseVisualStyleBackColor = true;
			// 
			// nom_rue_client
			// 
			this->nom_rue_client->Location = System::Drawing::Point(12, 300);
			this->nom_rue_client->Name = L"nom_rue_client";
			this->nom_rue_client->Size = System::Drawing::Size(392, 23);
			this->nom_rue_client->TabIndex = 36;
			// 
			// prenom_client
			// 
			this->prenom_client->Location = System::Drawing::Point(12, 141);
			this->prenom_client->Name = L"prenom_client";
			this->prenom_client->Size = System::Drawing::Size(392, 23);
			this->prenom_client->TabIndex = 35;
			// 
			// nom_client
			// 
			this->nom_client->Location = System::Drawing::Point(12, 80);
			this->nom_client->Name = L"nom_client";
			this->nom_client->Size = System::Drawing::Size(392, 23);
			this->nom_client->TabIndex = 34;
			// 
			// Commandes
			// 
			this->Commandes->Controls->Add(this->textBox3);
			this->Commandes->Controls->Add(this->dataGridView4);
			this->Commandes->Controls->Add(this->button3);
			this->Commandes->Controls->Add(this->panel2);
			this->Commandes->Controls->Add(this->dataGridView3);
			this->Commandes->Controls->Add(this->label23);
			this->Commandes->Controls->Add(this->dataGridView2);
			this->Commandes->Controls->Add(this->label22);
			this->Commandes->Controls->Add(this->button2);
			this->Commandes->Controls->Add(this->button1);
			this->Commandes->Controls->Add(this->label20);
			this->Commandes->Controls->Add(this->numericUpDown2);
			this->Commandes->Controls->Add(this->label19);
			this->Commandes->Controls->Add(this->label18);
			this->Commandes->Controls->Add(this->numericUpDown1);
			this->Commandes->Controls->Add(this->comboBox1);
			this->Commandes->Controls->Add(this->btn_supprimer_commande);
			this->Commandes->Controls->Add(this->btn_modifier_commande);
			this->Commandes->Controls->Add(this->btn_ajouter_commande);
			this->Commandes->Controls->Add(this->btn_select_commandes);
			this->Commandes->Location = System::Drawing::Point(4, 24);
			this->Commandes->Name = L"Commandes";
			this->Commandes->Size = System::Drawing::Size(1180, 542);
			this->Commandes->TabIndex = 2;
			this->Commandes->Text = L"Commandes";
			this->Commandes->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(11, 161);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(164, 23);
			this->textBox3->TabIndex = 68;
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(285, 64);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->Size = System::Drawing::Size(284, 197);
			this->dataGridView4->TabIndex = 63;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(193, 153);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(74, 40);
			this->button3->TabIndex = 62;
			this->button3->Text = L"Afficher liste client";
			this->button3->UseVisualStyleBackColor = true;
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
			this->dataGridView3->Size = System::Drawing::Size(559, 465);
			this->dataGridView3->TabIndex = 60;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(9, 374);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(136, 15);
			this->label23->TabIndex = 59;
			this->label23->Text = L"Détail de la commande :";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(12, 404);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(557, 128);
			this->dataGridView2->TabIndex = 58;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(9, 143);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(53, 15);
			this->label22->TabIndex = 56;
			this->label22->Text = L"ID Client";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(472, 320);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(97, 44);
			this->button2->TabIndex = 53;
			this->button2->Text = L"Supprimer article";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(472, 270);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 44);
			this->button1->TabIndex = 52;
			this->button1->Text = L"Ajouter article";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(179, 9);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(84, 15);
			this->label20->TabIndex = 51;
			this->label20->Text = L"ID commande";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(182, 31);
			this->numericUpDown2->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(163, 23);
			this->numericUpDown2->TabIndex = 50;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(394, 282);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(41, 15);
			this->label19->TabIndex = 49;
			this->label19->Text = L"Article";
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
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(397, 301);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(57, 23);
			this->numericUpDown1->TabIndex = 45;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(11, 301);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(368, 23);
			this->comboBox1->TabIndex = 15;
			// 
			// btn_supprimer_commande
			// 
			this->btn_supprimer_commande->Location = System::Drawing::Point(378, 13);
			this->btn_supprimer_commande->Name = L"btn_supprimer_commande";
			this->btn_supprimer_commande->Size = System::Drawing::Size(90, 45);
			this->btn_supprimer_commande->TabIndex = 14;
			this->btn_supprimer_commande->Text = L"Supprimer Commande";
			this->btn_supprimer_commande->UseVisualStyleBackColor = true;
			// 
			// btn_modifier_commande
			// 
			this->btn_modifier_commande->Location = System::Drawing::Point(125, 333);
			this->btn_modifier_commande->Name = L"btn_modifier_commande";
			this->btn_modifier_commande->Size = System::Drawing::Size(134, 31);
			this->btn_modifier_commande->TabIndex = 13;
			this->btn_modifier_commande->Text = L"Modifier Commande";
			this->btn_modifier_commande->UseVisualStyleBackColor = true;
			// 
			// btn_ajouter_commande
			// 
			this->btn_ajouter_commande->Location = System::Drawing::Point(12, 18);
			this->btn_ajouter_commande->Name = L"btn_ajouter_commande";
			this->btn_ajouter_commande->Size = System::Drawing::Size(135, 35);
			this->btn_ajouter_commande->TabIndex = 12;
			this->btn_ajouter_commande->Text = L"Nouvelle Commande";
			this->btn_ajouter_commande->UseVisualStyleBackColor = true;
			// 
			// btn_select_commandes
			// 
			this->btn_select_commandes->Location = System::Drawing::Point(837, 480);
			this->btn_select_commandes->Name = L"btn_select_commandes";
			this->btn_select_commandes->Size = System::Drawing::Size(120, 52);
			this->btn_select_commandes->TabIndex = 11;
			this->btn_select_commandes->Text = L"Afficher les commandes";
			this->btn_select_commandes->UseVisualStyleBackColor = true;
			// 
			// Stock
			// 
			this->Stock->Controls->Add(this->textBox1);
			this->Stock->Controls->Add(this->label27);
			this->Stock->Controls->Add(this->comboBox3);
			this->Stock->Controls->Add(this->comboBox2);
			this->Stock->Controls->Add(this->numericUpDown5);
			this->Stock->Controls->Add(this->numericUpDown4);
			this->Stock->Controls->Add(this->label28);
			this->Stock->Controls->Add(this->dataGridView5);
			this->Stock->Controls->Add(this->label21);
			this->Stock->Controls->Add(this->label24);
			this->Stock->Controls->Add(this->label25);
			this->Stock->Controls->Add(this->label26);
			this->Stock->Controls->Add(this->label29);
			this->Stock->Controls->Add(this->label30);
			this->Stock->Controls->Add(this->numericUpDown3);
			this->Stock->Controls->Add(this->groupBox1);
			this->Stock->Controls->Add(this->button4);
			this->Stock->Controls->Add(this->button5);
			this->Stock->Controls->Add(this->textBox5);
			this->Stock->Controls->Add(this->textBox7);
			this->Stock->Location = System::Drawing::Point(4, 24);
			this->Stock->Name = L"Stock";
			this->Stock->Size = System::Drawing::Size(1180, 542);
			this->Stock->TabIndex = 3;
			this->Stock->Text = L"Stock";
			this->Stock->UseVisualStyleBackColor = true;
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(230, 147);
			this->numericUpDown5->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(169, 23);
			this->numericUpDown5->TabIndex = 58;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(12, 148);
			this->numericUpDown4->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(169, 23);
			this->numericUpDown4->TabIndex = 57;
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
			this->dataGridView5->Margin = System::Windows::Forms::Padding(2);
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
			this->label29->Location = System::Drawing::Point(9, 67);
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
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(12, 30);
			this->numericUpDown3->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(169, 23);
			this->numericUpDown3->TabIndex = 44;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Location = System::Drawing::Point(12, 423);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(130, 105);
			this->groupBox1->TabIndex = 39;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Options";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(4, 80);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(81, 19);
			this->radioButton1->TabIndex = 13;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Supprimer";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(4, 22);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(73, 19);
			this->radioButton2->TabIndex = 11;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Nouveau";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(4, 50);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(70, 19);
			this->radioButton3->TabIndex = 12;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Modifier";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(175, 431);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(78, 92);
			this->button4->TabIndex = 38;
			this->button4->Text = L"Confirmer";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(278, 448);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(136, 59);
			this->button5->TabIndex = 37;
			this->button5->Text = L"Afficher le stock";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(12, 206);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(192, 23);
			this->textBox5->TabIndex = 36;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(12, 87);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(387, 23);
			this->textBox7->TabIndex = 34;
			// 
			// Statistiques
			// 
			this->Statistiques->Location = System::Drawing::Point(4, 24);
			this->Statistiques->Name = L"Statistiques";
			this->Statistiques->Size = System::Drawing::Size(1180, 542);
			this->Statistiques->TabIndex = 4;
			this->Statistiques->Text = L"Statistiques";
			this->Statistiques->UseVisualStyleBackColor = true;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(278, 206);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 23);
			this->comboBox2->TabIndex = 59;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(12, 276);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(292, 23);
			this->comboBox3->TabIndex = 60;
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
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 350);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(402, 23);
			this->textBox1->TabIndex = 62;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1188, 653);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_client))->EndInit();
			this->options_client->ResumeLayout(false);
			this->options_client->PerformLayout();
			this->Commandes->ResumeLayout(false);
			this->Commandes->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->Stock->ResumeLayout(false);
			this->Stock->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc::CLservicesPersonnel();
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
			id = this->oSvc->ajouterUnPersonnel(this->txtbx_nom_personnel->Text, this->txtbx_prenom_personnel->Text, Convert::ToInt32 (this->id_superieur->Text), this->date_embauche->Text, this->txtbx_numero_adresse->Text, this->txtbx_nom_rue->Text, this->txtbx_code_postal->Text, this->txtbx_ville->Text);
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
};
}