#pragma once

#include "CLmapPersonnel.h"
#include "CLmapAdresse.h"
#include "CLCAD.h"

namespace NS_Comp_Svc
{
	ref class CLservicesPersonnel
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapPersonnel^ oMappPersonnel;
		NS_Comp_Mappage::CLmapAdresse^ oMappAdresse;
	public:
		CLservicesPersonnel(void);
		System::Data::DataSet^ rechercherUnPersonnel(System::String^, System::String^, System::String^);
		int ajouterUnPersonnel(System::String^, System::String^, int, System::String^, System::String^, System::String^, System::String^, System::String^);
		void supprimerUnPersonnel(int);
		void modifierUnPersonnel(int, System::String^, System::String^, int, System::String^,  System::String^, System::String^, System::String^, System::String^);
	};
}