//============================================================================
// Name        : es3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

int main() {
	int array[100] ;
	int corr = 0 ;
	int cont = 0 ;
	int a2[100] ;
	int cont2 = 10;
	while (corr!=-1)
	{
		cin >> corr ;
		if (corr%5!=0)
		{
			array[cont]=corr;
			cont++;
		}
	}
	for ( int i=0 ; i<cont-1 ; i++)
	{
		if (array[i]==2)
		{
			a2[cont2]=i;
			cont2++;
		}
		else
		{
			cout << "{ " << array[i] << " " ;
			i++;
			while (array[i]!=2 && i<cont-1)
			{
				cout << array[i] << " " ;
				i++;
			}
			i--;
			cout << "} " ;
		}
	}
	for (int i=0 ; i<cont2 ; i++)
	{
		cout << a2[i]+1 << " ";
	}
	return 0;
}
