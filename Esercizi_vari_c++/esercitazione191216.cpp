//============================================================================
// Name        : esercitazione191216.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

int main() {

	cout << "metti un numero" << endl ;
	int N ;
	cin >> N ;

	int * a = new int[N-1] ;

	for (int k=0 ; k<N-1 ; k++)
	{
		a[k] = k+2 ;
	}

	int i = 0 ;
	while (i<N/12)
	{
		for ( int j=1 ; j<N-1 ; j++)
		{
			if (a[j] % a[i] == 0)
				a[j]=1;
		}
		i++ ;
	}

	for (int i=0 ; i<N-1 ; i++)
	{
		if (a[i]!= 1)
			cout << a[i] << " " ;
	}



}

