/****************************************************************
 *	@author Alexey (WelorD) Mochalov
 *	@created 16.06.2014
 ***************************************************************/

#ifndef DESCRIPTIONPAGE_H
#define DESCRIPTIONPAGE_H

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

#endif
