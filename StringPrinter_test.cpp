/*
 * StringPrinter_test.cpp
 *
 *  Created on: 25.1.2014
 *      Author: Heikki
 */

#include "StringPrinter.h"

using namespace std;

int main() {
	int test = 2;
	StringPrinter printer;

	switch (test) {
	case 0:
		printer.AddString("A");
		printer.AddString("B");
		printer.AddString("C");
		printer.AddString("D");
		printer.AddString("E");
		printer.AddString("F");
		printer.AddString("G");

		printer.PrintStrings();
	break;
	case 1:
		printer.AddString("A");

		printer.PrintStrings();
	break;
	case 2:
		printer.PrintStrings();
	break;
	default:
		return 0;
	}


	return 0;
}
