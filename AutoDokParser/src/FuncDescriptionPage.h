/****************************************************************
 *	@author Alexey (WelorD) Mochalov
 *	@created 16.06.2014
 ***************************************************************/

#ifndef FUNCDESCRIPTIONPAGE_H
#define FUNCDESCRIPTIONPAGE_H

#include <string>
#include <vector>
#include "DescriptionPage.h"

class FuncDescriptionPage : public DescriptionPage {
public:
	FuncDescriptionPage(void);
	~FuncDescriptionPage(void);

	//	vector of @param marks
	std::vector<std::wstring> paramList;
	//	function's owner if exists
	//ClassDescriptionPage* owner;
};

#endif
