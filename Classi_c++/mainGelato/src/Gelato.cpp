/*
 * Gelato.cpp
 *
 *  Created on: 01 feb 2018
 *      Author: Marco
 */

#include "Gelato.h"

Gelato::Gelato ()
{
	gusti=new string[1];
	gusti[0]="cioccolato";
	numeroGusti=1;
	tipo=CONO;
};

Gelato::Gelato (const string* p,int n, TipoGelato t)
{
	gusti=new string[n];
	for(int i=0; i<n; i++)
		gusti[i]=p[i];
	numeroGusti=n;
	tipo=t;
};

Gelato::~Gelato()
{
	delete[] gusti;
}

bool Gelato::contieneGusto(const string& g) const
{
	for(int i=0; i<numeroGusti; i++)
		if(g==gusti[i])
			return true;
	return false;
};

Gelato& Gelato::operator=(const Gelato& g)
{
	numeroGusti=g.numeroGusti;
	tipo=g.tipo;
	delete[] gusti;
	gusti=new string[g.getNumeroGusti()];
	for(int i=0; i<g.getNumeroGusti(); i++)
		gusti[i]=g.gusti[i];
	return *this;
}

bool Gelato::operator==(const Gelato& g) const
{
	if(g.numeroGusti!=numeroGusti)
		return false;
	for(int i=0; i<numeroGusti; i++)
		if(gusti[i]!=g.gusti[i])
				return false;
	if(tipo!=g.tipo)
		return false;
	return true;
};









