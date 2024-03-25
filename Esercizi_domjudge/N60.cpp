//============================================================================
// Name        : dom60.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

int main() {

	char S[50];
	cin >> S ;
	int N ;
	cin >> N ;
	char parole[N][50] ;
	for (int i=0 ; i<N ; i++) {
		cin >> parole[i] ;
	}
	for ( ; N>=0 ; N--) {
		cout << parole[N-1] << " " ;
	}


	return 0;
}
