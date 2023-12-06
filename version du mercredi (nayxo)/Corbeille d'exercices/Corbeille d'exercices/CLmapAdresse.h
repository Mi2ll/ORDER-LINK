#pragma once

namespace NS_Comp_Mappage
{
	ref class CLmapAdresse
	{
	private:
		System::String^ sSql;
		int id_adresse;
		System::String^ numero;
		System::String^ nom_rue;
		System::String^ ville;
		System::String^ code_postal;
	public:	
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);

		void setIdAdresse(int);
		void setNomRue(System::String^);
		void setNumero(System::String^);
		void setVille(System::String^);
		void setCodePostal(System::String^);

		int getIdAdresse(void);
		System::String^ getNomRue(void);
		System::String^ getNumero(void);
		System::String^ getVille(void);
		System::String^ getCodePostal(void);
	};
}
