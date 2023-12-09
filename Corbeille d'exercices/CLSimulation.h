#pragma once

namespace NS_Comp_Svc{
	ref class CLSimulation {
	private:
		System::String^ tva;
		System::String^ marge;
		System::String^ remise;
		System::String^ demarque;
	public:
		System::String^ getTva(void);
		System::String^ getMarge(void);
		System::String^ getRemise(void);
		System::String^ getDemarque(void);

		void setTva(System::String^);
		void setMarge(System::String^);
		void setRemise(System::String^);
		void setDemarque(System::String^);

		float tvaCalcul(float);
		float margeCalcul(float);
		float remiseCalcul(float);
		float demarqueCalcul(float);

		delegate float FonctionMembreDelegate(float); // Déclaration d'un delegate
	};
}