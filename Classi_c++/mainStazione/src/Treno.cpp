//============================================================================
// Name        : Treno.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Treno.h"



Treno::Treno() {
	posti = 0 ;
	codice = "vuoto" ;
	tipologia = 0 ;
}

Treno::Treno(int p , char* c , int t) {
	posti = p ;
	codice = c ;
	tipologia = t ;
}

void Treno::setPosti(int p) {
	posti = p ;
}

void Treno::setCodice(char* c) {
	codice = c ;
}

void Treno::setTipologia(int t) {
	tipologia = t ;
}

int Treno::getPosti() {
	return posti ;
}

char* Treno::getCodice() {
	return codice ;
}

int Treno::getTipologia() {
	return tipologia ;
}






int main() {

	cout<<"main"<<endl;

	Treno artem ;
	cout<<artem.getCodice()<<endl ;

	char* m = new char[10];
	cout << "inserire una parola" << endl ;
	cin >> m ;
	Treno marcella(500,m,3);
	cout<<marcella.getCodice() << endl ;

	marcella.setPosti(300);
	cout << marcella.getPosti() << endl ;


}

















