#include "inicio.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

   Salte�eriaSIS301::inicio form;
    Application::Run(% form);
    return 0;
}
//using namespace System;
//using namespace System::Windows::Forms;
//using namespace Salte�eriaSIS301;
//int main() {
//
//	Application::EnableVisualStyles();
//	Application::Run(gcnew inicio());
//	return 0;
//}