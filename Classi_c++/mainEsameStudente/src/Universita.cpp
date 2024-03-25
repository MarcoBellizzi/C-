/*
 * Universita.cpp
 *
 *  Created on: 04 gen 2018
 *      Author: Marco
 */

#include "Universita.h"

Universita::Universita()
{
	nome="unical";
	studenti=new Studente[10];
	matricole=new unsigned[10];
	size=0;
	capacity=10;
}

Universita::Universita(const Universita& u)
{
	nome=u.nome;
	studenti=new Studente[u.capacity];
	matricole=new unsigned[u.capacity];
	for(unsigned i=0; i<u.size; i++)
	{
		studenti[i]=Studente(u.studenti[i]);
		matricole[i]=u.matricole[i];
	}
	size=u.size;
	capacity=u.capacity;
}

Universita::~Universita()
{
	delete[] studenti;
	delete[] matricole;
}

Universita& Universita::operator=(const Universita& u)
{
	delete[] studenti;
	delete[] matricole;
	studenti=new Studente[u.capacity];
	matricole=new unsigned[u.capacity];
	nome=u.nome;
	for(unsigned i=0; i<u.size; i++)
	{
		studenti[i]=Studente(u.studenti[i]);
		matricole[i]=u.matricole[i];
	}
	size=u.size;
	capacity=u.capacity;
	return *this;
}

const string& Universita::getCodiceFiscaleStudente(unsigned m)
{
	for(unsigned i=0; i<size; i++)
		if(m==matricole[i])
			return studenti[i].getCodiceFiscale();
	const string& a = "";
	return a;
}

void Universita::aggiungiStudente(const Studente& s, unsigned m)
{
	if(size==capacity)
	{
		Studente* punt = new Studente[size*2];
		unsigned* mat = new unsigned[size*2];
		for(unsigned i=0; i<size; i++)
		{
			punt[i]= Studente(studenti[i]);
			mat[i]= matricole[i];
		}
		punt[size]=Studente(s);
		mat[size]=m;
		size++;
		capacity*=2;
		delete[]studenti;
		delete[]matricole;
		studenti=punt;
		matricole=mat;
	}
	else
	{
		studenti[size]=Studente(s);
		matricole[size]=m;
		size++;
	}
}

bool Universita::isIscritto(const Studente& s)
{
	for(unsigned i=0; i<size; i++)
		if(studenti[i]==s)
			return true;
	return false;
}

const Studente& Universita::operator[](unsigned k) const
{
	if(k<size)
		return studenti[k];
	Studente* a = new Studente();
	return *a;
}

const unsigned& Universita::getSize() const
{
	return size;
}

const string& Universita::getNome() const
{
	return nome;
}

unsigned Universita::operator--()
{
	size--;
	return size+1 ;
}






