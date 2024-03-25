//============================================================================
 // Name        : Orario.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Orario.h"


int main() {
	cout<<"ciao"<<endl;
	Orario o();
	cout<<o.stampaOra();
	return 0;
}

Orario::Orario() {
	ore = 0 ;
	minuti = 0 ;
	secondi = 0 ;
}

Orario::Orario(int o, int m, int s) {
	ore = o%24 ;
	minuti = m%60 ;
	secondi = s%60 ;
}

void Orario::stampaOra() {
	cout << ore << " : " << minuti << " : " << secondi << endl ;
}


