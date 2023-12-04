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



	private: System::Windows::Forms::Button^ btn_select;

	private: System::Windows::Forms::GroupBox^ gb_options_personnel;


	private: System::Windows::Forms::Button^ btn_confirmer_personnel;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;

	private: System::Windows::Forms::Button^ buttonClose;
	private: System::Windows::Forms::RadioButton^ rb_nouveau_personnel;
	private: System::Windows::Forms::RadioButton^ rb_modifier_personnel;
	private: System::Windows::Forms::RadioButton^ rb_supprimer_personnel;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::TextBox^ txtbx_code_postal;

	private: System::Windows::Forms::NumericUpDown^ id_adresse;
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
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dgv_enr;















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
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtbx_code_postal = (gcnew System::Windows::Forms::TextBox());
			this->id_adresse = (gcnew System::Windows::Forms::NumericUpDown());
			this->id_personnel = (gcnew System::Windows::Forms::NumericUpDown());
			this->txtbx_numero_adresse = (gcnew System::Windows::Forms::TextBox());
			this->txtbx_ville = (gcnew System::Windows::Forms::TextBox());
			this->id_superieur = (gcnew System::Windows::Forms::NumericUpDown());
			this->date_embauche = (gcnew System::Windows::Forms::DateTimePicker());
			this->gb_options_personnel = (gcnew System::Windows::Forms::GroupBox());
			this->btn_confirmer_personnel = (gcnew System::Windows::Forms::Button());
			this->btn_select = (gcnew System::Windows::Forms::Button());
			this->txtbx_nom_rue = (gcnew System::Windows::Forms::TextBox());
			this->txtbx_prenom_personnel = (gcnew System::Windows::Forms::TextBox());
			this->txtbx_nom_personnel = (gcnew System::Windows::Forms::TextBox());
			this->Clients = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->Commandes = (gcnew System::Windows::Forms::TabPage());
			this->Stock = (gcnew System::Windows::Forms::TabPage());
			this->Statistiques = (gcnew System::Windows::Forms::TabPage());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->Personnel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_adresse))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_personnel))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_superieur))->BeginInit();
			this->gb_options_personnel->SuspendLayout();
			this->Clients->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// rb_nouveau_personnel
			// 
			this->rb_nouveau_personnel->AutoSize = true;
			this->rb_nouveau_personnel->Location = System::Drawing::Point(5, 27);
			this->rb_nouveau_personnel->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->rb_nouveau_personnel->Name = L"rb_nouveau_personnel";
			this->rb_nouveau_personnel->Size = System::Drawing::Size(93, 24);
			this->rb_nouveau_personnel->TabIndex = 11;
			this->rb_nouveau_personnel->TabStop = true;
			this->rb_nouveau_personnel->Text = L"Nouveau";
			this->rb_nouveau_personnel->UseVisualStyleBackColor = true;
			// 
			// rb_modifier_personnel
			// 
			this->rb_modifier_personnel->AutoSize = true;
			this->rb_modifier_personnel->Location = System::Drawing::Point(5, 62);
			this->rb_modifier_personnel->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->rb_modifier_personnel->Name = L"rb_modifier_personnel";
			this->rb_modifier_personnel->Size = System::Drawing::Size(89, 24);
			this->rb_modifier_personnel->TabIndex = 12;
			this->rb_modifier_personnel->TabStop = true;
			this->rb_modifier_personnel->Text = L"Modifier";
			this->rb_modifier_personnel->UseVisualStyleBackColor = true;
			// 
			// rb_supprimer_personnel
			// 
			this->rb_supprimer_personnel->AutoSize = true;
			this->rb_supprimer_personnel->Location = System::Drawing::Point(5, 99);
			this->rb_supprimer_personnel->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->rb_supprimer_personnel->Name = L"rb_supprimer_personnel";
			this->rb_supprimer_personnel->Size = System::Drawing::Size(102, 24);
			this->rb_supprimer_personnel->TabIndex = 13;
			this->rb_supprimer_personnel->TabStop = true;
			this->rb_supprimer_personnel->Text = L"Supprimer";
			this->rb_supprimer_personnel->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(8, 107);
			this->radioButton1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(102, 24);
			this->radioButton1->TabIndex = 13;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Supprimer";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(8, 44);
			this->radioButton2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(93, 24);
			this->radioButton2->TabIndex = 11;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Nouveau";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(8, 75);
			this->radioButton3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(89, 24);
			this->radioButton3->TabIndex = 12;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Modifier";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->panel1->Controls->Add(this->buttonClose);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1584, 103);
			this->panel1->TabIndex = 0;
			// 
			// buttonClose
			// 
			this->buttonClose->BackColor = System::Drawing::Color::Firebrick;
			this->buttonClose->Location = System::Drawing::Point(1539, 4);
			this->buttonClose->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonClose->Name = L"buttonClose";
			this->buttonClose->Size = System::Drawing::Size(41, 26);
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
			this->panel3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(293, 103);
			this->panel3->TabIndex = 2;
			// 
			// Title
			// 
			this->Title->AutoSize = true;
			this->Title->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title->ForeColor = System::Drawing::SystemColors::Control;
			this->Title->Location = System::Drawing::Point(43, 30);
			this->Title->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Title->Name = L"Title";
			this->Title->Size = System::Drawing::Size(182, 46);
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
			this->tabControl1->Location = System::Drawing::Point(0, 103);
			this->tabControl1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1584, 702);
			this->tabControl1->TabIndex = 2;
			// 
			// Personnel
			// 
			this->Personnel->Controls->Add(this->dgv_enr);
			this->Personnel->Controls->Add(this->label10);
			this->Personnel->Controls->Add(this->label9);
			this->Personnel->Controls->Add(this->label8);
			this->Personnel->Controls->Add(this->label7);
			this->Personnel->Controls->Add(this->label6);
			this->Personnel->Controls->Add(this->label5);
			this->Personnel->Controls->Add(this->label4);
			this->Personnel->Controls->Add(this->label3);
			this->Personnel->Controls->Add(this->label2);
			this->Personnel->Controls->Add(this->label1);
			this->Personnel->Controls->Add(this->txtbx_code_postal);
			this->Personnel->Controls->Add(this->id_adresse);
			this->Personnel->Controls->Add(this->id_personnel);
			this->Personnel->Controls->Add(this->txtbx_numero_adresse);
			this->Personnel->Controls->Add(this->txtbx_ville);
			this->Personnel->Controls->Add(this->id_superieur);
			this->Personnel->Controls->Add(this->date_embauche);
			this->Personnel->Controls->Add(this->gb_options_personnel);
			this->Personnel->Controls->Add(this->btn_confirmer_personnel);
			this->Personnel->Controls->Add(this->btn_select);
			this->Personnel->Controls->Add(this->txtbx_nom_rue);
			this->Personnel->Controls->Add(this->txtbx_prenom_personnel);
			this->Personnel->Controls->Add(this->txtbx_nom_personnel);
			this->Personnel->Location = System::Drawing::Point(4, 29);
			this->Personnel->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Personnel->Name = L"Personnel";
			this->Personnel->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Personnel->Size = System::Drawing::Size(1576, 669);
			this->Personnel->TabIndex = 0;
			this->Personnel->Text = L"Personnel";
			this->Personnel->UseVisualStyleBackColor = true;
			// 
			// dgv_enr
			// 
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(621, 9);
			this->dgv_enr->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->RowHeadersWidth = 62;
			this->dgv_enr->RowTemplate->Height = 28;
			this->dgv_enr->Size = System::Drawing::Size(930, 650);
			this->dgv_enr->TabIndex = 33;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(12, 461);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(39, 20);
			this->label10->TabIndex = 32;
			this->label10->Text = L"Ville";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 408);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(88, 20);
			this->label9->TabIndex = 31;
			this->label9->Text = L"Code Postal";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 349);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(107, 20);
			this->label8->TabIndex = 30;
			this->label8->Text = L"Nom de la rue";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(316, 289);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(114, 20);
			this->label7->TabIndex = 29;
			this->label7->Text = L"Numéro de rue";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 289);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(79, 20);
			this->label6->TabIndex = 28;
			this->label6->Text = L"ID adresse";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 213);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(129, 20);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Date d\'embauche";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 150);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 20);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Prénom";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 75);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 20);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Nom";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 4);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 20);
			this->label2->TabIndex = 24;
			this->label2->Text = L"ID personnel";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(316, 4);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 20);
			this->label1->TabIndex = 23;
			this->label1->Text = L"ID supérieur";
			// 
			// txtbx_code_postal
			// 
			this->txtbx_code_postal->Location = System::Drawing::Point(16, 432);
			this->txtbx_code_postal->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtbx_code_postal->Name = L"txtbx_code_postal";
			this->txtbx_code_postal->Size = System::Drawing::Size(521, 27);
			this->txtbx_code_postal->TabIndex = 22;
			// 
			// id_adresse
			// 
			this->id_adresse->Location = System::Drawing::Point(16, 311);
			this->id_adresse->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->id_adresse->Name = L"id_adresse";
			this->id_adresse->Size = System::Drawing::Size(217, 27);
			this->id_adresse->TabIndex = 21;
			// 
			// id_personnel
			// 
			this->id_personnel->Location = System::Drawing::Point(16, 37);
			this->id_personnel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->id_personnel->Name = L"id_personnel";
			this->id_personnel->Size = System::Drawing::Size(217, 27);
			this->id_personnel->TabIndex = 20;
			// 
			// txtbx_numero_adresse
			// 
			this->txtbx_numero_adresse->Location = System::Drawing::Point(320, 310);
			this->txtbx_numero_adresse->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtbx_numero_adresse->Name = L"txtbx_numero_adresse";
			this->txtbx_numero_adresse->Size = System::Drawing::Size(217, 27);
			this->txtbx_numero_adresse->TabIndex = 19;
			// 
			// txtbx_ville
			// 
			this->txtbx_ville->Location = System::Drawing::Point(16, 483);
			this->txtbx_ville->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtbx_ville->Name = L"txtbx_ville";
			this->txtbx_ville->Size = System::Drawing::Size(521, 27);
			this->txtbx_ville->TabIndex = 18;
			// 
			// id_superieur
			// 
			this->id_superieur->Location = System::Drawing::Point(320, 37);
			this->id_superieur->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->id_superieur->Name = L"id_superieur";
			this->id_superieur->Size = System::Drawing::Size(217, 27);
			this->id_superieur->TabIndex = 17;
			// 
			// date_embauche
			// 
			this->date_embauche->CustomFormat = L"yyyy-MM-dd";
			this->date_embauche->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->date_embauche->Location = System::Drawing::Point(16, 246);
			this->date_embauche->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->date_embauche->Name = L"date_embauche";
			this->date_embauche->Size = System::Drawing::Size(521, 27);
			this->date_embauche->TabIndex = 16;
			// 
			// gb_options_personnel
			// 
			this->gb_options_personnel->Controls->Add(this->rb_supprimer_personnel);
			this->gb_options_personnel->Controls->Add(this->rb_nouveau_personnel);
			this->gb_options_personnel->Controls->Add(this->rb_modifier_personnel);
			this->gb_options_personnel->Location = System::Drawing::Point(16, 516);
			this->gb_options_personnel->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->gb_options_personnel->Name = L"gb_options_personnel";
			this->gb_options_personnel->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->gb_options_personnel->Size = System::Drawing::Size(174, 129);
			this->gb_options_personnel->TabIndex = 15;
			this->gb_options_personnel->TabStop = false;
			this->gb_options_personnel->Text = L"Options";
			// 
			// btn_confirmer_personnel
			// 
			this->btn_confirmer_personnel->Location = System::Drawing::Point(233, 526);
			this->btn_confirmer_personnel->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn_confirmer_personnel->Name = L"btn_confirmer_personnel";
			this->btn_confirmer_personnel->Size = System::Drawing::Size(104, 113);
			this->btn_confirmer_personnel->TabIndex = 14;
			this->btn_confirmer_personnel->Text = L"Confirmer";
			this->btn_confirmer_personnel->UseVisualStyleBackColor = true;
			this->btn_confirmer_personnel->Click += gcnew System::EventHandler(this, &MainForm::btn_confirmer_personnel_Click);
			// 
			// btn_select
			// 
			this->btn_select->Location = System::Drawing::Point(371, 546);
			this->btn_select->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn_select->Name = L"btn_select";
			this->btn_select->Size = System::Drawing::Size(181, 73);
			this->btn_select->TabIndex = 10;
			this->btn_select->Text = L"Afficher le personnel";
			this->btn_select->UseVisualStyleBackColor = true;
			this->btn_select->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// txtbx_nom_rue
			// 
			this->txtbx_nom_rue->Location = System::Drawing::Point(16, 373);
			this->txtbx_nom_rue->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtbx_nom_rue->Name = L"txtbx_nom_rue";
			this->txtbx_nom_rue->Size = System::Drawing::Size(521, 27);
			this->txtbx_nom_rue->TabIndex = 5;
			// 
			// txtbx_prenom_personnel
			// 
			this->txtbx_prenom_personnel->Location = System::Drawing::Point(16, 174);
			this->txtbx_prenom_personnel->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtbx_prenom_personnel->Name = L"txtbx_prenom_personnel";
			this->txtbx_prenom_personnel->Size = System::Drawing::Size(521, 27);
			this->txtbx_prenom_personnel->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::txtbx_nom_personnel_KeyPress);
			this->txtbx_prenom_personnel->TabIndex = 2;
			this->txtbx_prenom_personnel->Leave += gcnew System::EventHandler(this, &MainForm::txtbx_prenom_personnel_Leave);
			// 
			// txtbx_nom_personnel
			// 
			this->txtbx_nom_personnel->Location = System::Drawing::Point(16, 99);
			this->txtbx_nom_personnel->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtbx_nom_personnel->Name = L"txtbx_nom_personnel";
			this->txtbx_nom_personnel->Size = System::Drawing::Size(521, 27);
			this->txtbx_nom_personnel->TabIndex = 1;
			this->txtbx_nom_personnel->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::txtbx_nom_personnel_KeyPress);
			this->txtbx_nom_personnel->Leave += gcnew System::EventHandler(this, &MainForm::txtbx_nom_personnel_Leave);
			// 
			// Clients
			// 
			this->Clients->Controls->Add(this->groupBox1);
			this->Clients->Controls->Add(this->button1);
			this->Clients->Controls->Add(this->button2);
			this->Clients->Controls->Add(this->textBox1);
			this->Clients->Controls->Add(this->textBox2);
			this->Clients->Controls->Add(this->textBox3);
			this->Clients->Controls->Add(this->textBox4);
			this->Clients->Controls->Add(this->textBox5);
			this->Clients->Controls->Add(this->textBox6);
			this->Clients->Controls->Add(this->textBox7);
			this->Clients->Location = System::Drawing::Point(4, 29);
			this->Clients->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Clients->Name = L"Clients";
			this->Clients->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Clients->Size = System::Drawing::Size(1576, 669);
			this->Clients->TabIndex = 1;
			this->Clients->Text = L"Clients";
			this->Clients->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Location = System::Drawing::Point(16, 501);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Size = System::Drawing::Size(184, 146);
			this->groupBox1->TabIndex = 25;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Options";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(243, 526);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 106);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Confirmer";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(380, 544);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(181, 73);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Afficher le personnel";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(616, 22);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(941, 623);
			this->textBox1->TabIndex = 22;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(16, 454);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(521, 27);
			this->textBox2->TabIndex = 21;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(16, 290);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(521, 27);
			this->textBox3->TabIndex = 20;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(16, 370);
			this->textBox4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(521, 27);
			this->textBox4->TabIndex = 19;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(16, 213);
			this->textBox5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(521, 27);
			this->textBox5->TabIndex = 18;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(16, 138);
			this->textBox6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(521, 27);
			this->textBox6->TabIndex = 17;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(16, 66);
			this->textBox7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(521, 27);
			this->textBox7->TabIndex = 16;
			// 
			// Commandes
			// 
			this->Commandes->Location = System::Drawing::Point(4, 29);
			this->Commandes->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Commandes->Name = L"Commandes";
			this->Commandes->Size = System::Drawing::Size(1576, 669);
			this->Commandes->TabIndex = 2;
			this->Commandes->Text = L"Commandes";
			this->Commandes->UseVisualStyleBackColor = true;
			// 
			// Stock
			// 
			this->Stock->Location = System::Drawing::Point(4, 29);
			this->Stock->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Stock->Name = L"Stock";
			this->Stock->Size = System::Drawing::Size(1576, 669);
			this->Stock->TabIndex = 3;
			this->Stock->Text = L"Stock";
			this->Stock->UseVisualStyleBackColor = true;
			// 
			// Statistiques
			// 
			this->Statistiques->Location = System::Drawing::Point(4, 29);
			this->Statistiques->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Statistiques->Name = L"Statistiques";
			this->Statistiques->Size = System::Drawing::Size(1576, 669);
			this->Statistiques->TabIndex = 4;
			this->Statistiques->Text = L"Statistiques";
			this->Statistiques->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1584, 804);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_adresse))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_personnel))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_superieur))->EndInit();
			this->gb_options_personnel->ResumeLayout(false);
			this->gb_options_personnel->PerformLayout();
			this->Clients->ResumeLayout(false);
			this->Clients->PerformLayout();
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
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
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