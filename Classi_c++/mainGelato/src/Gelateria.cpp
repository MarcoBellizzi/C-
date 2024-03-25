/*
 * Gelateria.cpp
 *
 *  Created on: 01 feb 2018
 *      Author: Marco
 */

#include "Gelateria.h"

Gelateria::Gelateria()
{
	gelatiInVendita=new Gelato[10];
	size=0;
	capacity=10;
}

Gelateria::Gelateria(Gelato* g, unsigned i)
{
	gelatiInVendita=new Gelato[i];
	for(unsigned j=0; j<i; j++)
		gelatiInVendita[i]=g[i];
	size=i;
	capacity=i;
}

Gelateria::Gelateria(const Gelateria& g)
{
	capacity=g.capacity;
	size=g.size;
	gelatiInVendita=new Gelato[capacity];
	for(unsigned i=0; i<size; i++)
		gelatiInVendita[i]=g.gelatiInVendita[i];
}

Gelateria::~Gelateria()
{
	delete[] gelatiInVendita;
}

Gelateria& Gelateria::operator=(const Gelateria& g)
{
	delete[] gelatiInVendita;
	capacity=g.capacity;
	size=g.size;
	gelatiInVendita=new Gelato[capacity];
	for(unsigned i=0; i<size; i++)
		gelatiInVendita[i]=g.gelatiInVendita[i];
	return *this;
}

void Gelateria::aggiungiGelato(const Gelato& g)
{
	if(size<capacity)
	{
		gelatiInVendita[size]=g;
		size+=1;
	}
	else
	{
		capacity*=2;
		Gelato* gelati= new Gelato[capacity];
		for(unsigned i=0; i<size; i++)
			gelati[i]=gelatiInVendita[i];
		gelati[size++]=g;
		delete[] gelatiInVendita;
		gelatiInVendita=gelati;
	}
}

unsigned Gelateria::getNumeroGelatiPerTipo(TipoGelato t) const
{
	int cont=0;
	for(unsigned i=0; i<size; i++)
		if((gelatiInVendita[i]).getTipo()==t)
			cont++;
	return cont;
}

const Gelato& Gelateria::operator[](unsigned i) const
{
	return gelatiInVendita[i];
}

const Gelato& Gelateria::getGelatoConPiuGusti() const
{
	int max=0;
	int imax;
	for(unsigned i=0; i<size; i++)
		if(gelatiInVendita[i].getNumeroGusti()>max)
		{
			max=gelatiInVendita[i].getNumeroGusti();
			imax=i;
		}
	return gelatiInVendita[imax];
}

void Gelateria::trasformaTuttiIConiInCoppette()
{
	for(unsigned i=0; i<size; i++)
		if((gelatiInVendita[i].getTipo())==CONO)
			gelatiInVendita[i].setTipo(COPPETTA);
}

const Gelato& Gelateria::getUltimoGelatoInserito() const
{
	return gelatiInVendita[size-1];
}




