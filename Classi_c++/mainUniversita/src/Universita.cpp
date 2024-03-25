/*
 * Universita.cpp
 *
 *  Created on: 01 feb 2018
 *      Author: Marco
 */

#include "Universita.h"

Universita::Universita()
{
	nome = "vuoto";
	size=0;
	capacity=10;
	studenti=new Studente[10];
	matricole=new unsigned[10];
}

Universita::Universita(const Universita& s)
{
	nome=s.nome;
	size=s.size;
	capacity=s.capacity;
	studenti=new Studente[capacity];
	matricole=new unsigned[capacity];
	for(unsigned i=0; i<size; i++)
	{
		studenti[i]=s.studenti[i];
		matricole[i]=s.matricole[i];
	}
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
	nome=u.nome;
	size=u.size;
	capacity=u.capacity;
	studenti=new Studente[capacity];
	matricole=new unsigned[capacity];
	for(unsigned i=0; i<size; i++)
	{
		studenti[i]=u.studenti[i];
		matricole[i]=u.matricole[i];
	}
	return *this;
}

const string& Universita::getCodiceFiscaleStudente(unsigned i) const
{
	return studenti[i].getCodiceFiscale();
}

void Universita::aggiungiStudente(const Studente& s, unsigned m)
{
	if(size<capacity)
	{
		studenti[size]=s;
		matricole[size++]=m;
	}
	else
	{
		capacity*=2;
		Studente* temps = new Studente[capacity];
		unsigned* tempm = new unsigned[capacity];
		for(int i=0; i<size; i++)
		{
			temps[i]=studenti[i];
			tempm[i]=matricole[i];
		}
		temps[size]=s;
		tempm[size++]=m;
		delete[] studenti;
		delete[] matricole;
		studenti=temps;
		matricole=tempm;
	}
}

bool Universita::isIscritto(const Studente& s) const
{
	for(int i=0; i<size; i++)
		if(s==studenti[i])
			return true;
	return false;
}

const Studente& Universita::operator[](unsigned i) const
{
	return studenti[i];
}

unsigned Universita::getSize() const
{
	return size;
}

const string& Universita::getNome() const
{
	return nome;
}

void Universita::operator --()
{
	size--;
}

















