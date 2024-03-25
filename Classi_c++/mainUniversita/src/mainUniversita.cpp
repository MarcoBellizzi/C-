//============================================================================
// Name        : mainUniversita.cpp
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
	o<<s.nome<<" "<<s.cognome<<" "<<s.codiceFiscale<<endl;
	return o;
}

ostream& operator<<(ostream& o, const Universita& u)
{
	cout<<u.nome<<endl;
	for(unsigned i=0; i<u.size; i++)
	{
		cout<<u.studenti[i]<<u.matricole[i]<<endl;
	}
	return o;
}

istream& operator>>(istream& i, Studente& s)
{
	cout<<"inserire nome ";
	i>>s.nome;
	cout<<endl<<"inserire cognome ";
	i>>s.cognome;
	cout<<endl<<"inserire codice fiscale ";
	i>>s.codiceFiscale;
	cout<<endl;
	return i;
}

istream& operator>>(istream& i, Universita& u)
{
	cout<<"inserire nome ";
	i>>u.nome;
	cout<<endl<<"quanti studenti ha? ";
	unsigned n;
	i>>n;
	u.size=n;
	u.capacity=n;
	delete[] u.studenti;
	delete[] u.matricole;
	u.studenti=new Studente[n];
	u.matricole=new unsigned[n];
	for(unsigned i=0; i<n; i++)
	{
		//i>>(u.studenti)[i];
		cout<<"inserire matricola ";
		//i>>(u.matricole)[i];
		cout<<endl;
	}
	return i;
}

int main() {
	cout << "ciao"<<endl;
	return 0;
}
