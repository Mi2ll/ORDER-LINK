
#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ORDERLINK::MyForm monFormulaire;
	Application::Run(% monFormulaire);
}