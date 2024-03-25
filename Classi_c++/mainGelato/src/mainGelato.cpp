//============================================================================
// Name        : mainGelato.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Gelateria.h"
using namespace std;

ostream& operator<<(ostream& o, const Gelateria& g)
{
	for(unsigned i=0; i<g.size; i++)
	{
		o<<"gelato "<<i+1<<endl;
		cout<<g[i];
	}
	return o;
}

ostream& operator<<(ostream& o, const Gelato& g)
{
	if(g.getTipo()==CONO)
		cout<<"CONO";
	if(g.getTipo()==COPPETTA)
		cout<<"COPPETTA";
	if(g.getTipo()==BRIOCHE)
		cout<<"BRIOCHE";
	o<<" con "<<g.getNumeroGusti()<<" gusti : ";
	for(int i=0; i<g.getNumeroGusti(); i++)
		cout<<g.gusti[i]<<" ";
	cout<<endl;
	return o;
}

int main() {
	Gelato a;

	string* gusti = new string[3];
	gusti[0]="fragola";
	gusti[1]="lampone";
	gusti[2]="ciliegia";
	Gelato c(gusti,3,COPPETTA);

	Gelato e;
	cin>>e;

	Gelateria b;

	b.aggiungiGelato(a);
	b.aggiungiGelato(c);
	b.aggiungiGelato(e);

	cout<<b;

	return 0;
}
