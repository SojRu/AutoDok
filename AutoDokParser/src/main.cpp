/****************************************************************
 *	@author Alexey (SojRu) Mochalov
 *	@created 05.05.2014
 ***************************************************************/

#include "stdafx.h"
#include "PageFactory.h"

wchar_t someWCHARstring[] = L"Some output.";//L"���-�� ��� ����";
//PageFactory Factory;

int main(int argc, char* argv[])
{
	PageFactory pageFactory;
	setlocale(LC_ALL, ".866");
	std::wstring inputSomething;
    std::wcout << L"Hello world!" << std::endl;
	std::wcout << someWCHARstring << std::endl;
	//std::wcin >> inputSomething;
	//std::wcout << inputSomething << std::endl;

	// ���������� ������� ����� ������
    getch();
    /*
    while(1) {
        std::wcout << L"DODODODOD" << std::endl;
        if (kbhit()) {
            std::wcout << L"LALALALALA" << std::endl;
            getch();
        }
    }
    */

    return 0;
}
