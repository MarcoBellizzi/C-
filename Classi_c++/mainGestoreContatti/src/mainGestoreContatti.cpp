//============================================================================
// Name        : mainGestoreContatti.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <list>
#include "GestoreContatti.h"

using namespace std;

int main() {

	string n="marco",c="bellizzi",num="3284686896",e="marco@gmail.com" ;
	string n1="fabio",c1="barrese",num1="4323424324",e1="fabio@gmail.com";
	string n2="michele",c2="barrese",num2="3284686896",e2="michele@gmail.com";

	Contatto con1(n,c,num,e);
	Contatto con2(n1,c1,num1,e1);
	Contatto con3(n2,c2,num2,e2);

	GestoreContatti ges1 ;

	ges1.aggiungiContatto(con1);
	ges1.aggiungiContatto(con2);
	ges1.aggiungiContatto(con3);

	ges1.ordinaContatti();

	ges1.stampaContatti();

	cout << ges1.numeroContatti() << endl ;

	cout << ges1.trovaCognomePiuFrequente() << endl ;

	if ( ges1.verificaContattiStessoTelefono() ){
		cout << "ok" << endl ;
	}
	else
		cout << "no" << endl ;

	vector<string> a ;
	a=ges1.trovaNumeri("marco","bellizzi");

	cout << a[0] << endl ;

	ges1[1];

	return 0;
}



















