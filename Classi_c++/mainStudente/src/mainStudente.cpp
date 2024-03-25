//============================================================================
// Name        : mainStudente.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Studente.h"
#include <iostream>
using namespace std;

ostream& operator<< (ostream& o , const Studente& s){

	o<<s.nome << endl << s.cognome << endl << s.matricola << endl ;
	o<< "voti esami superati :" << endl ;
	for (int i=0 ; i<30 ; i++){
		if (s.esami[i]>17 && s.esami[i]<31){
			o<<"esame "<<i<<" = "<<s.esami[i]<<endl ;
		}
	}

	return o ;
}

int main() {
	Studente a ;
	Studente b("niki","bellizzi",178646);
	b.aggiungiEsame(3,25);
	b.aggiungiEsame(22,27);
	b.aggiungiEsame(13,18);
	cout << b.media()<< endl ;
	cout << b.esamiMancanti() << endl ;
	cout << b.esamiSuperati() << endl ;
	cout << b.votoMax() << endl ;
	cout << b.votoMin() << endl ;
	cout << b ;
	cout << b[3] ;
	return 0;
}














