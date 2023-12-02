// MyForm.cpp
#include "MainForm.h"
using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    interfaceprojetpoo::MainForm monFormulaire;
    Application::Run(% monFormulaire);
}