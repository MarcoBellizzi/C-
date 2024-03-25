//============================================================================
// Name        : N64.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int calcolasomma(int** p, int ip, int jp, int k)
{
	int somma=0;
	for(int i=ip; i<ip+k; i++)
		for(int j=jp; j<jp+k; j++)
			somma+=p[i][j];
	return somma;
}

int main() {

	int n;
	cin>>n;
	int** matrice = new int*[n];
	for(int i=0; i<n; i++)
		matrice[i]=new int[n];

	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin>>matrice[i][j];

	int k;
	cin>>k;

	int corr ;
	int max ;
	int imax,jmax;

	for(int i=0; i<=n-k; i++)
		for(int j=0; j<=n-k; j++)
		{
			corr = calcolasomma(matrice,i,j,k);
			if(i==0 && j==0)
				max = corr ;
			if(corr>max)
			{
				max=corr;
				imax=i;
				jmax=j;
			}
		}

	for(int i=imax; i<imax+k; i++)
		for(int j=jmax; j<jmax+k; j++)
			cout<<matrice[i][j];

	return 0;
}
