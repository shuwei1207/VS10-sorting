// 0413418_HW1.cpp: �D�n�M���ɡC

#include "stdafx.h"
#include "Form1.h"

using namespace My0413418_HW1;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// �إߥ��󱱨���e�A���ҥ� Windows XP ��ı�ƮĪG
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// �إߥD�����ð���
	Application::Run(gcnew Form1());
	return 0;
}
