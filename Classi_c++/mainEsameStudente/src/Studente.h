/*
 * Studente.h
 *
 *  Created on: 04 gen 2018
 *      Author: Marco
 */

#ifndef STUDENTE_H_
#define STUDENTE_H_

#include <iostream>
using namespace std;

class Studente {
	friend ostream& operator<<(ostream&, const Studente&);
	private:
		string nome;
		string cognome;
		string codiceFiscale;
	public:
		Studente ();
		Studente (const string&, const string&, const string&);
		Studente (const Studente&);
		const string& getNome() const;
		const string& getCognome() const;
		const string& getCodiceFiscale() const;
		bool operator==(const Studente &) const;
		Studente& operator=(const Studente&);
};

#endif /* STUDENTE_H_ */
