#pragma once
#pragma once

namespace NS_Comp_Mappage {
	ref class CLmapStatistiques
	{
	private:
		System::String^ sSql;
		System::String^ tva;
		System::String^ marge_commerciale;
		System::String^ remise_commerciale;
		System::String^ demarque_inconnue;
		System::String^ date_chiffre_affaire;
		int id_client;

	public:
		System::String^ SelectSousSeuilReap(void);
		System::String^ SelectLessPopular(void);
		System::String^ SelectMostPopular(void);
		System::String^ SelectChiffreAffaire(void);
		System::String^ SelectClientMontantAchat(void);

		void setTva(System::String^);
		void setMargeCommerciale(System::String^);
		void setRemiseCommerciale(System::String^);
		void setDemarqueInconnue(System::String^);
		void setDateChiffreAffaire(System::String^);
		void setIdClient(int);

		System::String^ getTva(void);
		System::String^ getMargeCommerciale(void);
		System::String^ getRemiseCommerciale(void);
		System::String^ getDemarqueInconnue(void);
		System::String^ getDateChiffreAffaire(void);
		int getIdClient(void);
	};
}