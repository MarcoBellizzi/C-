/*
 * Gelateria.h
 *
 *  Created on: 01 feb 2018
 *      Author: Marco
 */

#ifndef GELATERIA_H_
#define GELATERIA_H_

#include "Gelato.h"

class Gelateria{
	friend ostream& operator<<(ostream&, const Gelateria &);
	private:
		Gelato* gelatiInVendita;
		unsigned size;
		unsigned capacity;
	public:
			Gelateria ();
			Gelateria (Gelato*, unsigned);
			Gelateria (const Gelateria &);
			~Gelateria ();
			Gelateria& operator=(const Gelateria &);
			void aggiungiGelato(const Gelato &);
			unsigned getNumeroGelatiPerTipo(TipoGelato) const;
			const Gelato & operator[](unsigned) const;
			const Gelato & getGelatoConPiuGusti() const;
			void trasformaTuttiIConiInCoppette();
			const Gelato & getUltimoGelatoInserito() const;
};

#endif /* GELATERIA_H_ */
