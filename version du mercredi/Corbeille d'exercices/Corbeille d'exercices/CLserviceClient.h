#pragma once

#include "CLmapClient.h"
#include "CLmapAdresse.h"
#include "CLCAD.h"

namespace NS_Comp_Svc
{
	ref class CLservicesClient
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapClient^ oMappClient;
		NS_Comp_Mappage::CLmapAdresse^ oMappAdresseFact;
		NS_Comp_Mappage::CLmapAdresse^ oMappAdresseLivre;
	public:
		CLservicesClient(void);
		System::Data::DataSet^ rechercherUnClient(System::String^, System::String^, System::String^);
		int ajouterUnClient(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void supprimerUnClient(int);
		void modifierUnClient(int, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
	};
}