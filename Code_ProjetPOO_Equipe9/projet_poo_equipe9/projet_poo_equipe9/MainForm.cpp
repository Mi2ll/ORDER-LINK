////////////////
// MyForm.cpp //
////////////////

#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	projetpooequipe9::MainForm monFormulaire;//ATTENTION : ici testWin est le nom du projet. Vous devez l’adapter au nom de votre projet
	Application::Run(% monFormulaire);
}

