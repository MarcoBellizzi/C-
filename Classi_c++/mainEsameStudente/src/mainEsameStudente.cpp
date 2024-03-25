//============================================================================
// Name        : mainEsameStudente.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Universita.h"
using namespace std;

ostream& operator<<(ostream& o, const Studente& s)
{
	o<<s.getNome()<<" "<<s.getCognome()<<" "<<s.getCodiceFiscale();

	return o;
}

ostream& operator<<(ostream& o, const Universita& u)
{
	o<<u.getNome()<<endl;
	for(unsigned i=0; i<u.getSize(); i++)
		o<<u.matricole[i]<<" "<<u[i]<<endl;

	return o;
}

int main() {
	Studente s1("marco","bellizzi","1234");
	Studente s2("andrea","meccico","2345");
	Studente s3("niki","bellizzi","3456");
	Universita u1;
	u1.aggiungiStudente(s1,1);
	u1.aggiungiStudente(s2,2);
	u1.aggiungiStudente(s3,3);
	cout<<u1;



	return 0;
}
