/****************************************************************
 *	@author Alexey (WelorD) Mochalov
 *	@created 9.10.2014
 ***************************************************************/

#include <iostream>
#include <wchar.h>
#include "../src/PageFactory.h"

PageFactory::PageFactory() {
	std::wcout << L"Fabric created!" << std::endl;
}

PageFactory::~PageFactory() {
	std::wcout << L"Fabric destroyed!" << std::endl;
}
