#pragma once

namespace interfaceprojetpoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::TextBox^ txtbx_id_superieur;

	private: System::Windows::Forms::TextBox^ txtbx_id_adresse;

	private: System::Windows::Forms::TextBox^ txtbx_date_embauche;

	private: System::Windows::Forms::TextBox^ txtbx_prenom_personnel;

	private: System::Windows::Forms::TextBox^ txtbx_nom_personnel;

	private: System::Windows::Forms::TextBox^ txtbx_id_personnel;
	private: System::Windows::Forms::TextBox^ txtbx_affich_personnel;
	private: System::Windows::Forms::Button^ button4;
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












	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::RadioButton^ rb_nouveau_personnel;
			System::Windows::Forms::RadioButton^ rb_modifier_personnel;
			System::Windows::Forms::RadioButton^ rb_supprimer_personnel;
			System::Windows::Forms::RadioButton^ radioButton1;
			System::Windows::Forms::RadioButton^ radioButton2;
			System::Windows::Forms::RadioButton^ radioButton3;
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->buttonClose = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->Title = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->Personnel = (gcnew System::Windows::Forms::TabPage());
			this->gb_options_personnel = (gcnew System::Windows::Forms::GroupBox());
			this->btn_confirmer_personnel = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->txtbx_affich_personnel = (gcnew System::Windows::Forms::TextBox());
			this->txtbx_id_superieur = (gcnew System::Windows::Forms::TextBox());
			this->txtbx_id_adresse = (gcnew System::Windows::Forms::TextBox());
			this->txtbx_date_embauche = (gcnew System::Windows::Forms::TextBox());
			this->txtbx_prenom_personnel = (gcnew System::Windows::Forms::TextBox());
			this->txtbx_nom_personnel = (gcnew System::Windows::Forms::TextBox());
			this->txtbx_id_personnel = (gcnew System::Windows::Forms::TextBox());
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
			rb_nouveau_personnel = (gcnew System::Windows::Forms::RadioButton());
			rb_modifier_personnel = (gcnew System::Windows::Forms::RadioButton());
			rb_supprimer_personnel = (gcnew System::Windows::Forms::RadioButton());
			radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->Personnel->SuspendLayout();
			this->gb_options_personnel->SuspendLayout();
			this->Clients->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// rb_nouveau_personnel
			// 
			rb_nouveau_personnel->AutoSize = true;
			rb_nouveau_personnel->Location = System::Drawing::Point(6, 36);
			rb_nouveau_personnel->Name = L"rb_nouveau_personnel";
			rb_nouveau_personnel->Size = System::Drawing::Size(73, 19);
			rb_nouveau_personnel->TabIndex = 11;
			rb_nouveau_personnel->TabStop = true;
			rb_nouveau_personnel->Text = L"Nouveau";
			rb_nouveau_personnel->UseVisualStyleBackColor = true;
			// 
			// rb_modifier_personnel
			// 
			rb_modifier_personnel->AutoSize = true;
			rb_modifier_personnel->Location = System::Drawing::Point(6, 61);
			rb_modifier_personnel->Name = L"rb_modifier_personnel";
			rb_modifier_personnel->Size = System::Drawing::Size(70, 19);
			rb_modifier_personnel->TabIndex = 12;
			rb_modifier_personnel->TabStop = true;
			rb_modifier_personnel->Text = L"Modifier";
			rb_modifier_personnel->UseVisualStyleBackColor = true;
			// 
			// rb_supprimer_personnel
			// 
			rb_supprimer_personnel->AutoSize = true;
			rb_supprimer_personnel->Location = System::Drawing::Point(6, 87);
			rb_supprimer_personnel->Name = L"rb_supprimer_personnel";
			rb_supprimer_personnel->Size = System::Drawing::Size(81, 19);
			rb_supprimer_personnel->TabIndex = 13;
			rb_supprimer_personnel->TabStop = true;
			rb_supprimer_personnel->Text = L"Supprimer";
			rb_supprimer_personnel->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			radioButton1->AutoSize = true;
			radioButton1->Location = System::Drawing::Point(6, 87);
			radioButton1->Name = L"radioButton1";
			radioButton1->Size = System::Drawing::Size(81, 19);
			radioButton1->TabIndex = 13;
			radioButton1->TabStop = true;
			radioButton1->Text = L"Supprimer";
			radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			radioButton2->AutoSize = true;
			radioButton2->Location = System::Drawing::Point(6, 36);
			radioButton2->Name = L"radioButton2";
			radioButton2->Size = System::Drawing::Size(73, 19);
			radioButton2->TabIndex = 11;
			radioButton2->TabStop = true;
			radioButton2->Text = L"Nouveau";
			radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			radioButton3->AutoSize = true;
			radioButton3->Location = System::Drawing::Point(6, 61);
			radioButton3->Name = L"radioButton3";
			radioButton3->Size = System::Drawing::Size(70, 19);
			radioButton3->TabIndex = 12;
			radioButton3->TabStop = true;
			radioButton3->Text = L"Modifier";
			radioButton3->UseVisualStyleBackColor = true;
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
			this->buttonClose->Location = System::Drawing::Point(1154, 3);
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
			this->Personnel->Controls->Add(this->gb_options_personnel);
			this->Personnel->Controls->Add(this->btn_confirmer_personnel);
			this->Personnel->Controls->Add(this->button4);
			this->Personnel->Controls->Add(this->txtbx_affich_personnel);
			this->Personnel->Controls->Add(this->txtbx_id_superieur);
			this->Personnel->Controls->Add(this->txtbx_id_adresse);
			this->Personnel->Controls->Add(this->txtbx_date_embauche);
			this->Personnel->Controls->Add(this->txtbx_prenom_personnel);
			this->Personnel->Controls->Add(this->txtbx_nom_personnel);
			this->Personnel->Controls->Add(this->txtbx_id_personnel);
			this->Personnel->Location = System::Drawing::Point(4, 24);
			this->Personnel->Name = L"Personnel";
			this->Personnel->Padding = System::Windows::Forms::Padding(3);
			this->Personnel->Size = System::Drawing::Size(1180, 542);
			this->Personnel->TabIndex = 0;
			this->Personnel->Text = L"Personnel";
			this->Personnel->UseVisualStyleBackColor = true;
			// 
			// gb_options_personnel
			// 
			this->gb_options_personnel->Controls->Add(rb_supprimer_personnel);
			this->gb_options_personnel->Controls->Add(rb_nouveau_personnel);
			this->gb_options_personnel->Controls->Add(rb_modifier_personnel);
			this->gb_options_personnel->Location = System::Drawing::Point(12, 399);
			this->gb_options_personnel->Name = L"gb_options_personnel";
			this->gb_options_personnel->Size = System::Drawing::Size(138, 118);
			this->gb_options_personnel->TabIndex = 15;
			this->gb_options_personnel->TabStop = false;
			this->gb_options_personnel->Text = L"Options";
			// 
			// btn_confirmer_personnel
			// 
			this->btn_confirmer_personnel->Location = System::Drawing::Point(182, 419);
			this->btn_confirmer_personnel->Name = L"btn_confirmer_personnel";
			this->btn_confirmer_personnel->Size = System::Drawing::Size(78, 86);
			this->btn_confirmer_personnel->TabIndex = 14;
			this->btn_confirmer_personnel->Text = L"Confirmer";
			this->btn_confirmer_personnel->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(285, 434);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(136, 59);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Afficher le personnel";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// txtbx_affich_personnel
			// 
			this->txtbx_affich_personnel->Location = System::Drawing::Point(462, 10);
			this->txtbx_affich_personnel->Multiline = true;
			this->txtbx_affich_personnel->Name = L"txtbx_affich_personnel";
			this->txtbx_affich_personnel->ReadOnly = true;
			this->txtbx_affich_personnel->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txtbx_affich_personnel->Size = System::Drawing::Size(707, 507);
			this->txtbx_affich_personnel->TabIndex = 6;
			// 
			// txtbx_id_superieur
			// 
			this->txtbx_id_superieur->Location = System::Drawing::Point(12, 361);
			this->txtbx_id_superieur->Name = L"txtbx_id_superieur";
			this->txtbx_id_superieur->Size = System::Drawing::Size(392, 23);
			this->txtbx_id_superieur->TabIndex = 5;
			// 
			// txtbx_id_adresse
			// 
			this->txtbx_id_adresse->Location = System::Drawing::Point(12, 227);
			this->txtbx_id_adresse->Name = L"txtbx_id_adresse";
			this->txtbx_id_adresse->Size = System::Drawing::Size(392, 23);
			this->txtbx_id_adresse->TabIndex = 4;
			// 
			// txtbx_date_embauche
			// 
			this->txtbx_date_embauche->Location = System::Drawing::Point(12, 293);
			this->txtbx_date_embauche->Name = L"txtbx_date_embauche";
			this->txtbx_date_embauche->Size = System::Drawing::Size(392, 23);
			this->txtbx_date_embauche->TabIndex = 3;
			// 
			// txtbx_prenom_personnel
			// 
			this->txtbx_prenom_personnel->Location = System::Drawing::Point(12, 165);
			this->txtbx_prenom_personnel->Name = L"txtbx_prenom_personnel";
			this->txtbx_prenom_personnel->Size = System::Drawing::Size(392, 23);
			this->txtbx_prenom_personnel->TabIndex = 2;
			// 
			// txtbx_nom_personnel
			// 
			this->txtbx_nom_personnel->Location = System::Drawing::Point(12, 104);
			this->txtbx_nom_personnel->Name = L"txtbx_nom_personnel";
			this->txtbx_nom_personnel->Size = System::Drawing::Size(392, 23);
			this->txtbx_nom_personnel->TabIndex = 1;
			// 
			// txtbx_id_personnel
			// 
			this->txtbx_id_personnel->Location = System::Drawing::Point(12, 45);
			this->txtbx_id_personnel->Name = L"txtbx_id_personnel";
			this->txtbx_id_personnel->Size = System::Drawing::Size(392, 23);
			this->txtbx_id_personnel->TabIndex = 0;
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
			this->Clients->Location = System::Drawing::Point(4, 24);
			this->Clients->Name = L"Clients";
			this->Clients->Padding = System::Windows::Forms::Padding(3);
			this->Clients->Size = System::Drawing::Size(1180, 542);
			this->Clients->TabIndex = 1;
			this->Clients->Text = L"Clients";
			this->Clients->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(radioButton1);
			this->groupBox1->Controls->Add(radioButton2);
			this->groupBox1->Controls->Add(radioButton3);
			this->groupBox1->Location = System::Drawing::Point(12, 407);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(138, 118);
			this->groupBox1->TabIndex = 25;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Options";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(182, 427);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(78, 86);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Confirmer";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(285, 442);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 59);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Afficher le personnel";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(462, 18);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(707, 507);
			this->textBox1->TabIndex = 22;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 369);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(392, 23);
			this->textBox2->TabIndex = 21;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(12, 235);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(392, 23);
			this->textBox3->TabIndex = 20;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(12, 301);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(392, 23);
			this->textBox4->TabIndex = 19;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(12, 173);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(392, 23);
			this->textBox5->TabIndex = 18;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(12, 112);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(392, 23);
			this->textBox6->TabIndex = 17;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(12, 53);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(392, 23);
			this->textBox7->TabIndex = 16;
			// 
			// Commandes
			// 
			this->Commandes->Location = System::Drawing::Point(4, 24);
			this->Commandes->Name = L"Commandes";
			this->Commandes->Size = System::Drawing::Size(1180, 542);
			this->Commandes->TabIndex = 2;
			this->Commandes->Text = L"Commandes";
			this->Commandes->UseVisualStyleBackColor = true;
			// 
			// Stock
			// 
			this->Stock->Location = System::Drawing::Point(4, 24);
			this->Stock->Name = L"Stock";
			this->Stock->Size = System::Drawing::Size(1180, 542);
			this->Stock->TabIndex = 3;
			this->Stock->Text = L"Stock";
			this->Stock->UseVisualStyleBackColor = true;
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
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->Personnel->ResumeLayout(false);
			this->Personnel->PerformLayout();
			this->gb_options_personnel->ResumeLayout(false);
			this->gb_options_personnel->PerformLayout();
			this->Clients->ResumeLayout(false);
			this->Clients->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


private: System::Void buttonClose_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
