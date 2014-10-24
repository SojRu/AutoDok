/****************************************************************
 *	@author Alexey (SojRu) Mochalov
 *	@created 24.10.2014
 ***************************************************************/

#ifndef PAGECLASSES_H
#define PAGECLASSES_H

#include "stdafx.h"

class DescriptionPage {
public:
	DescriptionPage(void);
	~DescriptionPage(void);

	//	object's name (class, func or something else)
	std::wstring objectName;
	//	url on object's description page
	std::wstring pageUrl;
	//	files which contains object's prototype and implementation
	std::wstring prototypeFileName, implementationFileName;
	//fileType* pPrototypeFile, pImplementationFile;
	//	short @brief section
	std::wstring briefContent;
	//	detaled @description section
	std::wstring detailedContent;
	//	vector of @todo marks
	std::vector<std::wstring> todoList;
};


class FuncDescriptionPage : public DescriptionPage {
public:
	FuncDescriptionPage(void);
	~FuncDescriptionPage(void);

	//	vector of @param marks
	std::vector<std::wstring> paramList;
	//	function's owner if exists
	//ClassDescriptionPage* owner;
};


class ClassDescriptionPage : public DescriptionPage {
public:
	ClassDescriptionPage(void);
	~ClassDescriptionPage(void);

	//	vector of parents
	std::vector<std::wstring> parentsList;
	//	vector of methods
	std::vector<FuncDescriptionPage*> methodsList;
};

#endif // PAGECLASSES_H
