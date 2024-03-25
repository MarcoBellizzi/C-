#ifndef STUDENTE_H_
#define STUDENTE_H_

#include <iostream>
#include "Studente.cpp"

using namespace std ;


class Studente {
private:
	string nome ;
	string cognome ;
	int matricola ;
	int* esami ;
public:
	Studente();
	Studente(string n , string c , int m);
	void aggiungiEsame(int i, int voto);
	int media();
	int esamiMancanti();
	int esamiSuperati();
	int votoMax();
	int votoMin();
	friend ostream& operator<< (ostream& o , const Studente& s);
	int operator[] (int i);
	virtual ~Studente();
};

#endif /* STUDENTE_H_ */



