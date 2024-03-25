/*
 * Gelato.h
 *
 *  Created on: 01 feb 2018
 *      Author: Marco
 */

#ifndef GELATO_H_
#define GELATO_H_

#include <iostream>
using namespace std;

enum TipoGelato {CONO, COPPETTA, BRIOCHE};

class Gelato
{
	friend istream& operator>>(istream&, Gelato&);
	friend ostream& operator<<(ostream&, const Gelato &);

	private:
		string* gusti;
		int numeroGusti;
		TipoGelato tipo;
	public:
		Gelato ();
		Gelato (const string*,int, TipoGelato );
		~Gelato();

		const string& getGusto(int i) const { return gusti[i]; };
		int getNumeroGusti() const { return numeroGusti; };
		TipoGelato getTipo() const { return tipo; };
		void setTipo(TipoGelato t) { tipo=t; };

		bool contieneGusto(const string& t) const;
		bool operator==(const Gelato& g) const;
		Gelato& operator=(const Gelato& g);
};

#endif /* GELATO_H_ */
