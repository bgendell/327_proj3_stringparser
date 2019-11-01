/*
 * StringParserClass.cpp
 *
 *  Created on: Oct 8, 2017
 *      Author: keith
 */

#include <string>
#include <string.h>
#include "../327_proj3_test/includes/StringParserClass.h"
#include "../327_proj3_test/includes/constants.h"

using namespace KP_StringParserClass;

StringParserClass::StringParserClass():pStartTag(0),pEndTag(0),areTagsSet(false){
}

StringParserClass::~StringParserClass(){
}

//these are the start tag and the end tags that we want to find,
//presumably the data of interest is between them, please make a
//COPY of what pStartTag and pEndTag point to.  In other words
//DO NOT SET pStartTag = pStart
//returns:
//SUCCESS
//ERROR_TAGS_NULL if either pStart or pEnd is null
int StringParserClass::setTags(const char *pStart, const char *pEnd){
	if(pStart && pEnd != NULL){
		int sTagLen = strlen(pStart) + 1;
		int eTagLen = strlen(pEnd) + 1;
		char* pStartTag = new char(sTagLen);
		strncpy(pStartTag,pStart,sTagLen);
		char* pEndTag = new char(eTagLen);
		strncpy(pEndTag,pStart,eTagLen);
		return SUCCESS;
	}
	return ERROR_TAGS_NULL;
}

//First clears myVector
//going to search thru pDataToSearchThru, looking for info bracketed by
//pStartTag and pEndTag, will add that info only to myVector
//returns
//SUCCESS  finished searching for data between tags, results in myVector (0 or more entries)
//ERROR_TAGS_NULL if either pStart or pEnd is null
//ERROR_DATA_NULL pDataToSearchThru is null
int StringParserClass::getDataBetweenTags(char *pDataToSearchThru, std::vector<std::string> &myVector){
	myVector.clear();
	if(pDataToSearchThru != NULL){

		return ERROR_TAGS_NULL;
	}
	return ERROR_DATA_NULL;
}
