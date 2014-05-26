#include <iostream>
#include <string>

wchar_t someWCHARstring[] = L"Что-то тут есть";

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, ".866");
	std::wstring inputSomething;
    std::wcout << L"Hello world!" << std::endl;
	std::wcout << someWCHARstring << std::endl;
	std::wcin >> inputSomething;
	std::wcout << inputSomething << std::endl;

	system("PAUSE");
    return 0;
}
