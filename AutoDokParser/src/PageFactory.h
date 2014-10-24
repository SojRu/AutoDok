/****************************************************************
 *	@author Alexey (SojRu) Mochalov
 *	@created 16.06.2014
 ***************************************************************/
#ifndef PAGEFACTORY_H
#define PAGEFACTORY_H

#include "stdafx.h"
#include "PageClasses.h"

// @brief Class wich create all types of description pages.
class PageFactory {
private:
	// @brief vector of pages created after src files analysis
	typedef std::vector<DescriptionPage*> pageList;
	// @brief vector of pages
	pageList descriptionPages;
public:
	PageFactory(void);
	~PageFactory(void);

	ClassDescriptionPage* createClassDescriptionPage(void);
	FuncDescriptionPage* createFuncDescriptionPage(void);
};

#endif //PAGEFACTORY_H
