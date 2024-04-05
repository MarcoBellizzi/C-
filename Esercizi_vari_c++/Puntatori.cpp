//============================================================================
// Name        : Puntatori.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

int main() {

	int vettore[] = {1,2,3,4} ;
	cout << *vettore++ ;

	char *puntatore ;
	char *array = new char[50] ;
	char *parola = "riccardo" ;
	cout << "leggo parola" << endl ;
	cin >> array ;
	cout << "ok  : " << array << endl ;

	char parola2[] = new char[50] ;
	cout << "leggo parola2" << endl ;
	cin >> parola2 ;

	return 0;
}
