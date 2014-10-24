/****************************************************************
 *	@author Alexey (SojRu) Mochalov
 *	@created 05.05.2014
 ***************************************************************/

#include "stdafx.h"
#include "PageFactory.h"

wchar_t someWCHARstring[] = L"И тут что-то есть";
std::wstring someWSTRING;

int main(int argc, char* argv[])
{
	PageFactory pageFactory;
	someWSTRING.assign(L"Что-то тут есть");
	setlocale(LC_ALL, ".866");
    std::wcout << L"Hello world!" << std::endl;
    std::wcout << someWSTRING << std::endl;
	std::wcout << someWCHARstring << std::endl;
	//std::wcin >> inputSomething;
	//std::wcout << inputSomething << std::endl;

	// Дожидаемся нажатия любой кнопки
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
