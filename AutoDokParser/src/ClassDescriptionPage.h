/****************************************************************
 *	@author Alexey (WelorD) Mochalov
 *	@created 16.06.2014
 ***************************************************************/

#ifndef CLASSDESCRIPTIONPAGE_H
#define CLASSDESCRIPTIONPAGE_H

#include <string>
#include <vector>
#include "DescriptionPage.h"
#include "FuncDescriptionPage.h"

class ClassDescriptionPage : public DescriptionPage {
public:
	ClassDescriptionPage(void);
	~ClassDescriptionPage(void);

	//	vector of parents
	std::vector<std::wstring> parentsList;
	//	vector of methods
	std::vector<FuncDescriptionPage*> methodsList;
};

#endif
