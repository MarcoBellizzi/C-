//============================================================================
// Name        : mainOverload.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Over.h"
using namespace std;

class Prova {
private:
	int x ;
public :
	Prova() {
		x=3 ;
	}
	friend int operator+(int& y , Prova& a);
	friend ostream& operator<< (ostream& o , Prova& a) ;
};

ostream& operator<< (ostream& o , Prova& a) {
	o<<"modificato << Prova" << endl ;
	o<< a.x << endl ;
	return o ;
}

ostream& operator<< (ostream& o , Over& a) {
	o<<"modificato << Over" << endl ;
	o<< a.q << endl ;
	return o ;
}

int operator+ (int& y , Prova& a){
	cout<<"modificato + Prova"<<endl;
	return y+a.x ;
}

int operator+ (int& a , Over&b){
	cout<<"modificato + Over"<< endl ;
	return a+b.q ;
}



int main() {
	cout << "inizio main" << endl ;

	int xa = 0 ;
	int xb = 0 ;

	Prova a ;
	Prova b ;
	cout << a << endl ;
	cout << b << endl ;
	xa = xa + a ;
	xb = xb + b ;
	cout << a << endl ;
	cout << b << endl ;

	return 0;
}















