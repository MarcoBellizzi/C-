//============================================================================
// Name        : N61.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void cancellacolonna(int j, bool** pres, int m)
{
	for(int i=0; i<m; i++)
		pres[i][j]=false;
}

void cancellariga(int i, bool** pres, int n)
{
	for(int j=0; j<n; j++)
		pres[i][j]=false;
}

void cancellaregione(int i, int j, bool** pres, int m, int n)
{
	if(i>0 && j>0)
		pres[i-1][j-1]=false;
	if(i>0)
		pres[i-1][j]=false;
	if(i>0 && j<n-1)
		pres[i-1][j+1]=false;
	if(j>0)
		pres[i][j-1]=false;
	pres[i][j]=false;
	if(j<n-1)
		pres[i][j+1]=false;
	if(i<m-1 && j>0)
		pres[i+1][j-1]=false;
	if(i<m-1)
		pres[i+1][j]=false;
	if(i<m-1 && j<n-1)
		pres[i+1][j+1]=false;
}

int main() {
	int m,n;
	cin>>m>>n;
	char** matrice = new char*[m];
	for(int i=0; i<m; i++)
		matrice[i] = new char[n];
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			cin>>matrice[i][j];
	bool** pres = new bool*[m];
	for(int i=0; i<m; i++)
		pres[i] = new bool[n];
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			pres[i][j]=true;
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
		{
			if(matrice[i][j]=='|')
				cancellacolonna(j,pres,m);
			if(matrice[i][j]=='-')
				cancellariga(i,pres,n);
			if(matrice[i][j]=='*')
				cancellaregione(i,j,pres,m,n);
		}

	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			if(pres[i][j])
				cout<<matrice[i][j];

	return 0;
}
