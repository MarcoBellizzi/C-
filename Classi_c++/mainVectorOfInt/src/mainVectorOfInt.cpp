//============================================================================
// Name        : mainVectorOfInt.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "VectorOfInt.h"

int main() {

	VectorOfInt a ;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.insert(1,10);
	a.stampa();

	VectorOfInt c ;
	c = a ;
	c.pop_back();
	c.push_back(4);
	c.stampa();

	if (c==a)
		cout << "uguali" << endl ;
	else
		cout << "diversi" << endl ;

	if (c!=a)
		cout << "diversi" << endl ;
	else
		cout << "uguali" << endl ;

	return 0;
}
