#ifndef FUNCDESCRIPTIONPAGE_H
#define FUNCDESCRIPTIONPAGE_H

#include <string>
#include <vector>
#include "DescriptionPage.h"

class FuncDescriptionPage : public DescriptionPage {
public:
	FuncDescriptionPage(void);
	~FuncDescriptionPage(void);

	//*	vector of @param marks
	std::vector<std::wstring> paramList;
	//*	name of function's owner if exists
	std::wstring ownerName;
};

#endif