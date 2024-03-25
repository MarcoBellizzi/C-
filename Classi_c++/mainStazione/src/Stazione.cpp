//============================================================================
// Name        : Stazione.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Stazione.h"
#include "Treno.h"
#include "Orario.h"


int main() {
	cout << "ciaoooooo" << endl ;

	Orario attuale(19,10,0);
	cout<<attuale.stampaOra();

	return 0;
}

Stazione::Stazione() {

}


