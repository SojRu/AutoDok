#ifndef CLASSDESCRIPTIONPAGE_H
#define CLASSDESCRIPTIONPAGE_H

#include <string>
#include <vector>
#include "DescriptionPage.h"

class ClassDescriptionPage : public DescriptionPage {
public:
	ClassDescriptionPage(void);
	~ClassDescriptionPage(void);

	//*	vector of parents
	std::vector<std::wstring> parentsList;
	//*	vector of methods
	std::vector<std::wstring> methodsList;
};

#endif