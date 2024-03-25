/*
 * Universita.h
 *
 *  Created on: 04 gen 2018
 *      Author: Marco
 */

#ifndef UNIVERSITA_H_
#define UNIVERSITA_H_

#include "Studente.h"
using namespace std;

class Universita {
	friend ostream& operator>>(ostream&, Universita &);
	friend ostream& operator<<(ostream&, const Universita &);
	private:
		string nome;
		Studente* studenti;
		unsigned* matricole;
		unsigned size;
		unsigned capacity; //inizializzata a 100
	public:
		Universita (); // ____ ;
		Universita (Studente*, unsigned*); // ____ ;    e la size??
		Universita (const Universita &); // ____ ;
		~ Universita (); // ____ ;
		Universita & operator=(const Universita &); // ____ ;
		const string & getCodiceFiscaleStudente (unsigned matricola); // ____ ;
		void aggiungiStudente(const Studente &, unsigned); // ____ ;
		bool isIscritto(const Studente &); // ____ ;
		const Studente & operator[](unsigned) const; // ____ ;
		const unsigned& getSize() const; // ____ ;
		const string& getNome() const ;
		unsigned operator--();
};

#endif /* UNIVERSITA_H_ */
