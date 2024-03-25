/*
 * Universita.h
 *
 *  Created on: 01 feb 2018
 *      Author: Marco
 */

#ifndef UNIVERSITA_H_
#define UNIVERSITA_H_

#include "Studente.h"
using namespace std;

class Universita {
	friend istream& operator>>(istream&, Universita &);
	friend ostream& operator<<(ostream&, const Universita &);
	private:
		string nome;
		Studente* studenti;
		unsigned* matricole;
		unsigned size;
		unsigned capacity;
	public:
		Universita ();
		Universita (Studente*, unsigned*);   //e le dimenzioni?
		Universita (const Universita &);
		~ Universita ();
		Universita & operator=(const Universita &);
		const string & getCodiceFiscaleStudente (unsigned matricola) const ;
		void aggiungiStudente(const Studente &, unsigned);
		bool isIscritto(const Studente &) const ;
		const Studente & operator[](unsigned) const ;
		unsigned getSize() const ;
		const string & getNome() const;
		void operator--();
};
#endif /* UNIVERSITA_H_ */
