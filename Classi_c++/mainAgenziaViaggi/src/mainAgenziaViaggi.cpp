//============================================================================
// Name        : mainAgenziaViaggi.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "AgenziaViaggi.h"

using namespace std;

int main() {

	/* ("Londra",EUROPA,3000,50,100)
		("Tokyo",ASIA,10000,1000,200)
		("New York",AMERICA,9000,2000,100)
	*/

	Viaggio viaggio1("Londra",EUROPA,3000,50,100);
	Viaggio viaggio2("Tokyo",ASIA,10000,1000,200);
	Viaggio viaggio3("New York",AMERICA,9000,2000,100);

	AgenziaViaggi agenzia;
	agenzia.aggiungi(viaggio1);
	agenzia.aggiungi(viaggio2);
	agenzia.aggiungi(viaggio3);

	cout<<agenzia.metodo1();

		/*	("Londra",EUROPA,3000,50,100)
			("Tokyo",ASIA,10000,1000,200)
			("New York",AMERICA,9000,2000,100)
			("New York",AMERICA,9000,1500,130)

*/

	Viaggio viaggio4("New York",AMERICA,9000,1500,130);

	agenzia.aggiungi(viaggio4);

	cout<<agenzia.metodo3();

	cout<<agenzia.metodo4();


	return 0;
}















