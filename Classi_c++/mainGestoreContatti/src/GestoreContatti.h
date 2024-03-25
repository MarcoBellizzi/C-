/*
 * GestoreContatti.h
 *
 *  Created on: 19 ott 2017
 *      Author: Marco
 */

#ifndef GESTORECONTATTI_H_
#define GESTORECONTATTI_H_

#include "Contatto.h"
#include <list>
#include <vector>
#include <iostream>

using namespace std ;


class GestoreContatti {
private:
	list<Contatto> lista ;
public:
	GestoreContatti();
	virtual ~GestoreContatti();
	void aggiungiContatto(const Contatto&);
	void stampaContatti();
	int numeroContatti();
	void ordinaContatti();
	bool eliminaContattoConRemove(const Contatto&);
	bool eliminaContattoConErase(const Contatto&);
	string trovaCognomePiuFrequente();
	bool verificaContattiStessoTelefono();
	vector<string>  trovaNumeri  (const  string&  nome,  const  string&  cognome);


	void operator[] ( int i);

};

#endif /* GESTORECONTATTI_H_ */
