#ifndef PAGEFACTORY_H
#define PAGEFACTORY_H

#include <string>
#include <vector>

#include "DescriptionPage.h"
#include "ClassDescriptionPage.h"
#include "FuncDescriptionPage.h"

class PageFactory {
public:
	PageFactory(void);
	~PageFactory(void);

	//* vector of pages created after src files analysis
	std::vector<DescriptionPage*> pagesList;

	ClassDescriptionPage* createClassDescriptionpage(void);
	FuncDescriptionPage* createFuncDescriptionpage(void);
};

#endif