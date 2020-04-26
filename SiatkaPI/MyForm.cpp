#include "MyForm.h"
#include "cmath"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SiatkaPI::MyForm form;
	Application::Run(% form);
}