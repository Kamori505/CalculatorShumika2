#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
CompatibleTextRenderingDefault(false);
	Calculator::MyForm form;
	Application::Run(% form);
}