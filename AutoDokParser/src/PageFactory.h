/****************************************************************
 *	@author Alexey (WelorD) Mochalov
 *	@created 16.06.2014
 ***************************************************************/
#ifndef PAGEFACTORY_H
#define PAGEFACTORY_H

#include "stdafx.h"
#include "DescriptionPage.h"
#include "ClassDescriptionPage.h"
#include "FuncDescriptionPage.h"

// @brief Class wich create all types of description pages.
class PageFactory {
private:
	// @brief vector of pages created after src files analysis
	typedef std::vector<DescriptionPage*> vPageList;
public:
	PageFactory(void);
	~PageFactory(void);

	ClassDescriptionPage* createClassDescriptionPage(void);
	FuncDescriptionPage* createFuncDescriptionPage(void);

	vPageList pageList;
protected:
//	vPageList pageList;
};

#endif
