/*
 * Studente.cpp
 *
 *  Created on: 01 feb 2018
 *      Author: Marco
 */

#include "Studente.h"

Studente::Studente() {
	nome="vuoto";
	cognome="vuoto";
	codiceFiscale="vuoto";
}

Studente::Studente(const string& n, const string& c, const string& cc)
{
	nome=n;
	cognome=c;
	codiceFiscale=cc;
}

Studente::Studente(const Studente& s)
{
	nome=s.nome;
	cognome=s.cognome;
	codiceFiscale=s.codiceFiscale;
}

const string& Studente::getNome() const
{
	return nome;
}

const string& Studente::getCognome() const
{
	return cognome;
}

const string& Studente::getCodiceFiscale() const
{
	return codiceFiscale;
}

Studente& Studente::operator=(const Studente& s)
{
	nome=s.nome;
	cognome=s.cognome;
	codiceFiscale=s.codiceFiscale;
	return *this;
}

bool Studente::operator==(const Studente& s) const
{
	if(nome==s.nome && cognome==s.cognome && codiceFiscale==s.codiceFiscale)
		return true;
	return false;
}






