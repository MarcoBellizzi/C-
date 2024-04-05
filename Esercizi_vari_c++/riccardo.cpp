//============================================================================
// Name        : riccardo.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

void metodo(int a[]) {
	int N = sizeof(a) ;
	int *punt = new int[N];
	int *inizio = punt ;
	for (int i=N-1 ; i>=0 ; i--) {
		*punt = a[i] ;
		punt++;
	}
	punt = inizio  ;
	cout << "fine" ;
}

int main() {

	int array[] = {1,2,3,4,5};

	int *puntatore = new int[sizeof(array)] ;
	
	metodo(array) ;

	return 0;
}
