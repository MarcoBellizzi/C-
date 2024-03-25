/*
 * Studente.cpp
 *
 *  Created on: 04 gen 2018
 *      Author: Marco
 */

#include "Studente.h"

Studente::Studente()
{
	nome="";
	cognome="";
	codiceFiscale="";
}

Studente::Studente(const string& n, const string& c, const string& cf)
{
	nome=n;
	cognome=c;
	codiceFiscale=cf;
}

Studente::Studente(const Studente& s)
{
	nome=s.nome;
	cognome=s.cognome;
	codiceFiscale=s.codiceFiscale;
}

const string& Studente::getNome() const
{
	return this->nome ;
}

const string& Studente::getCognome() const
{
	return this->cognome;
}

const string& Studente::getCodiceFiscale() const
{
	return this->codiceFiscale;
}

bool Studente::operator==(const Studente& s) const
{
	if(nome==s.nome && cognome==s.cognome && codiceFiscale==s.codiceFiscale)
		return true;
	return false;
}

Studente& Studente:: operator=(const Studente& s)
{
	nome=s.nome;
	cognome=s.cognome;
	codiceFiscale=s.codiceFiscale;
	return *this;
}
















