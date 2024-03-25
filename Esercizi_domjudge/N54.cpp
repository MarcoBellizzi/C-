//============================================================================
// Name        : dom54.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


int main() {

	char sorriso = 1 ;
	cout << sorriso << endl ;

	cout << "inserire dimA" << endl ;
	unsigned dimA ;
	cin >> dimA ;
	int A[dimA] ;
	for (int i=0 ; i<dimA ; i++) {
		cout<<"dammi un intero" << endl ;
		cin >> A[i] ;
	}
	cout << "inserire dimB" << endl ;
	unsigned dimB ;
	cin >> dimB ;
	int B[dimB] ;
	for (int i=0 ; i<dimB ; i++) {
		cout << "dammi un intero" << endl ;
		cin >> B[i] ;
	}
	cout << "ok" << endl ;
	if (dimA<dimB)
		cout<<"NO" ;
	else {
		bool condizione[dimB] ;
		for (int i=0 ; i<dimB ; i++) {
			condizione[i]=false ;
		}
		int j=0 ; //scorre B
		for (int i=0 ; i<dimB ; i++) {    //scorre A
			if (B[j]==A[i]) {
				condizione[j]=true ;
				j++;
			}
		}
		bool condizionefinale = true ;
		for (int i=0 ; i<dimB ; i++) {
			if (condizione[i]==false)
				condizionefinale=false;
		}
		if (condizionefinale==true)
			cout<<"SI" ;
		else
			cout<<"NO" ;
	}








	return 0;
}
