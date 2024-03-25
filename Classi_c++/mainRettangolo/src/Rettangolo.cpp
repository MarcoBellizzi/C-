/*
 * Rettangolo.cpp
 *
 *  Created on: 05 ott 2017
 *      Author: Marco
 */

#include "Rettangolo.h"


Rettangolo::Rettangolo() {
	cout<<"costruito"<<endl;
	altezza = 1.0 ;
	lunghezza = 1.0 ;
}

Rettangolo::Rettangolo(float a , float l) {
	cout << "construito"<<endl ;
	altezza = a ;
	lunghezza = l ;
}

float Rettangolo::perimetro(){
	float somma = lunghezza*2 + altezza*2 ;
	return somma ;
}

float Rettangolo::area(){
	float prodotto = lunghezza*altezza ;
	return prodotto ;
}

Rettangolo::~Rettangolo(){

}



















