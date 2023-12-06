#pragma once

using namespace System;

namespace NS_Composants {
	ref class CL_map_TBPERSONNE {
	private:
		int id_personne;
		String^ nom;
		String^ prenom;
	public:
		CL_map_TBPERSONNE();
		String^ SELECT();
		String^ INSERT();
		String^ UPDATE();
		String^ DELETE();
		String^ getPrenom();
		String^ getNom();
		int getId();
		void setPrenom(String^);
		void setNom(String^);
		void setId(int);
	};
}