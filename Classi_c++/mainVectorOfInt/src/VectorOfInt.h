/*
 * VectorOfInt.h
 *
 *  Created on: 10 ott 2017
 *      Author: Marco
 */

#ifndef VECTOROFINT_H_
#define VECTOROFINT_H_

#include <iostream>

using namespace std ;

class VectorOfInt {
private:
	int* vec;
	unsigned int size;
	unsigned int capacity;

public:
	VectorOfInt( unsigned int = 0 );
	VectorOfInt( const VectorOfInt& );
	~VectorOfInt();

	unsigned int getSize() const;
	unsigned int getCapacity() const;

	void stampa();

	/* Aggiunge l'intero ricevuto in input alla fine del vettore.
       Se la capacita' non e' sufficiente per aggiungere un ulteriore elemento,
       il vettore viene reallocato raddoppiando la sua attuale capacita'. */
	void push_back( int );

	// Rimuove l'ultimo elemento;
	void pop_back();

	/* Inserisce un elemento in una posizione data.
       Se la capacita' non e' sufficiente per aggiungere un ulteriore elemento,
       il vettore viene reallocato raddoppiando la sua attuale capacita'.
       Il primo parametro rappresenta la posizione, il secondo l'elemento da inserire*/
	void insert(unsigned int, int);

	/* Ridimensiona il vettore.
       Se n e' minore della dimensione corrente, la capacity rimane invariata e la size diventa n.
       Se n e' maggiore della dimensione corrente, la size rimane invariata e la capacity diventa n.*/
	void resize( unsigned int n);

	VectorOfInt& operator=( const VectorOfInt& );
	bool operator==( const VectorOfInt& ) const;
	bool operator!=( const VectorOfInt& ) const;
	int operator[]( unsigned int i ) const;
	int& operator[]( unsigned int i );






};

#endif /* VECTOROFINT_H_ */
