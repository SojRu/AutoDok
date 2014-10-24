/****************************************************************
 *	@author Alexey (SojRu) Mochalov
 *	@created 24.10.2014
 ***************************************************************/

#ifndef PAGECLASSES_H
#define PAGECLASSES_H

#include "stdafx.h"

class ClassDescriptionPage;

class DescriptionPage {
public:
	DescriptionPage(void);
	~DescriptionPage(void);

	//	object's name (class, func or something else)
	std::wstring objectName;
	bool setObjectName(std::wstring name);
	std::wstring getObjectName(void);
	//	url on object's description page
	std::wstring pageUrl;
	std::wstring generatePageUrl(void);
	bool setPageUrl(std::wstring url);
	std::wstring getPageUrl(void);
	//	files which contains object's prototype and implementation
	std::wstring prototypeFileName, implementationFileName;
	bool setPrototypeFileName(std::wstring fileName);
	std::wstring getPrototypeFileName(void);
	bool setImplementationFileName(std::wstring fileName);
	std::wstring getImplementationFileName(void);
	//	short @brief section
	std::wstring briefContent;
	bool setBriefContent(std::wstring text);
	std::wstring getBriefContent(void);
	//	detaled @description section
	std::wstring detailedContent;
	bool setDetailedContent(std::wstring text);
	std::wstring getDetailedContent(void);
	//	vector of @todo marks
	std::vector<std::wstring> todoList;
	bool addTodoListItem(std::wstring text);
	std::wstring getTodoListItem(void);	/** @todo implement all types of "get" process, like get_next_item, get_item_by_index and so on*/
};


class FuncDescriptionPage : public DescriptionPage {
public:
	FuncDescriptionPage(void);
	~FuncDescriptionPage(void);

	//	vector of @param marks
	std::vector<std::wstring> paramList;
	//	function's owner(class) if exists
	ClassDescriptionPage* owner;
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
