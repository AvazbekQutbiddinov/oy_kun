#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
void main()
{
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	oykun::MyForm f;
	Application::Run(% f);
}