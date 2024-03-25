//============================================================================
// Name        : mainRettangolo.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "Rettangolo.h"

ostream& operator<< (ostream& o , const Rettangolo& rett){
	int a = rett.altezza ;
	int l = rett.lunghezza ;
	for ( int i =0 ; i<a ; i++){
		for (int j=0 ; j<l ; j++){
			cout << "* " ;
		}
		cout << endl ;
	}


	return o ;
}

int main() {

	cout << "iniziooooo main" << endl; // prints !!!Hello World!!!
	Rettangolo a(5.7,8.2) ;
	cout << a ;

	return 0;
}
