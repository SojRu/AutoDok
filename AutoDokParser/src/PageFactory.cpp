/****************************************************************
 *	@author Alexey (SojRu) Mochalov
 *	@created 9.10.2014
 ***************************************************************/

#include "PageFactory.h"

PageFactory::PageFactory() {
	std::wcout << L"Fabric created!" << std::endl;
	descriptionPages.clear();
	createFuncDescriptionPage();
}

PageFactory::~PageFactory() {
	std::wcout << L"Fabric destroyed!" << std::endl;
}

FuncDescriptionPage* PageFactory::createFuncDescriptionPage(void) {
	FuncDescriptionPage* funcDescriptionPage;

	funcDescriptionPage = new FuncDescriptionPage();
	descriptionPages.push_back(funcDescriptionPage);
	return funcDescriptionPage;
}
