/*
 * Rettangolo.h
 *
 *  Created on: 05 ott 2017
 *      Author: Marco
 */

#ifndef RETTANGOLO_H_
#define RETTANGOLO_H_

#include <iostream>

using namespace std;

class Rettangolo {

private:
	float lunghezza ;
	float altezza ;

public:
	Rettangolo();
	Rettangolo(float l , float a);
	float perimetro();
	float area();
	friend ostream& operator<< (ostream& out , const Rettangolo& rett);
	virtual ~Rettangolo();
};




#endif /* RETTANGOLO_H_ */



























