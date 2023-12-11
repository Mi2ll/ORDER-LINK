#include "CLSimulation.h"

System::String^ NS_Comp_Svc::CLSimulation::getTva(void) { return this->tva; }
System::String^ NS_Comp_Svc::CLSimulation::getMarge(void) { return this->marge; }
System::String^ NS_Comp_Svc::CLSimulation::getRemise(void) { return this->remise; }
System::String^ NS_Comp_Svc::CLSimulation::getDemarque(void) { return this->demarque; }

void NS_Comp_Svc::CLSimulation::setTva(System::String^ tva) { this->tva = tva; }
void NS_Comp_Svc::CLSimulation::setMarge(System::String^ marge) { this->marge = marge; }
void NS_Comp_Svc::CLSimulation::setRemise(System::String^ remise) { this->remise = remise; }
void NS_Comp_Svc::CLSimulation::setDemarque(System::String^ demarque) { this->demarque = demarque; }

float NS_Comp_Svc::CLSimulation::tvaCalcul(float valeur){
	float tva_int = System::Convert::ToSingle("1," + this->tva);
	return valeur * tva_int;
}
float NS_Comp_Svc::CLSimulation::margeCalcul(float valeur){
	float marge_int = System::Convert::ToSingle("1," + this->marge);
	return valeur * marge_int;
}
float NS_Comp_Svc::CLSimulation::remiseCalcul(float valeur){
	float remise_int = System::Convert::ToSingle("0," + this->remise);
	return valeur * (1-remise_int);
}
float NS_Comp_Svc::CLSimulation::demarqueCalcul(float valeur) {
	float demarque_int = System::Convert::ToSingle("0," + this->demarque);
	return valeur * (1- demarque_int);
}