/*
 * StringPrinter.h
 *
 *  Created on: 25.1.2014
 *      Author: Heikki
 */

#ifndef STRINGPRINTER_H_
#define STRINGPRINTER_H_

#include <string>
#include <list>
#include <map>
#include <iostream>

using namespace std;

class StringPrinter {
public:
	StringPrinter();
	virtual ~StringPrinter();
	void AddString(std::string StringElement);
	void PrintStrings();

private:
	std::list<std::string> stringList;
};



#endif /* STRINGPRINTER_H_ */
