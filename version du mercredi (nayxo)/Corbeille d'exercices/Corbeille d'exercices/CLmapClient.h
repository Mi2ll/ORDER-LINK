#pragma once

namespace NS_Comp_Mappage
{
	ref class CLmapClient
	{
	private:
		System::String^ sSql;
		int id_client;
		System::String^ nom_client;
		System::String^ prenom_client;
		System::String^ date_naissance;
	public:
		System::String^ Select(void);
		System::String^ Insert(int, int);
		System::String^ Delete(void);
		System::String^ Update(void);

		void setIdClient(int);
		void setNomClient(System::String^);
		void setPrenomClient(System::String^);
		void setDateNaissance(System::String^);

		int getIdClient(void);
		System::String^ getNomClient(void);
		System::String^ getPrenomClient(void);
		System::String^ getDateNaissance(void);
	};
}