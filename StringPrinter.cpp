/*
 * StringPrinter.cpp
 *
 *  Created on: 25.1.2014
 *      Author: Heikki
 */

#include "StringPrinter.h"

using namespace std;

StringPrinter::StringPrinter() {
	// TODO Auto-generated constructor stub

}

StringPrinter::~StringPrinter() {
	// TODO Auto-generated destructor stub
}

void StringPrinter::AddString(std::string StringElement) {
	stringList.push_back(StringElement);
}

void StringPrinter::PrintStrings() {
	if (stringList.empty()) {
		std::cout << "";
	} else {
		for (std::list<std::string>::iterator it = stringList.begin(); it != stringList.end(); it++) {
			std::cout << *it;
			//if not single element
			if (stringList.size() > 1) {
				//if not last element
				if (it != (--stringList.end())) {
					//between two last elements
					if (it == (----stringList.end())) {
						std::cout << " and ";
					}
					//other elements
					else {
						std::cout << ", ";
					}
				}
			}
		}
	}
}
