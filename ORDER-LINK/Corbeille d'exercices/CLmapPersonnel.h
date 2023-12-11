#pragma once

namespace NS_Comp_Mappage
{
	public ref class CLmapPersonnel
	{
	private:
		System::String^ sSql;
		int id_personnel;
		System::String^ nom_personnel;
		System::String^ prenom_personnel;
		int id_superieur;
		System::String^ date_embauche;
	public:
		System::String^ Select(void);
		System::String^ Insert(int);
		System::String^ Delete(void);
		System::String^ Update(void);

		void setIdPersonnel(int);
		void setNomPersonnel(System::String^);
		void setPrenomPersonnel(System::String^);
		void setIdSuperieur(int);
		void setDateEmbauche(System::String^);

		int getIdPersonnel(void);
		System::String^ getNomPersonnel(void);
		System::String^ getPrenomPersonnel(void);
		int getIdSuperieur(void);
		System::String^ getDateEmbauche(void);
	};
}