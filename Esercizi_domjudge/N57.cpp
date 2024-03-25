//============================================================================
// Name        : N57.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int calcolasomma(char**,int,int);
int calcolanumero(char);
bool presente(char, char**,int);
char calcolacarattere(int);

int main() {
	int N;
	cin>>N;
	char** A=new char*[N];

	for(int i=0; i<N; i++)
		A[i]= new char[N];

	for(int i=0; i<N; i++)
		for(int j=0; j<N; j++)
			cin>>A[i][j];

	int k=0;
	while(k<N/2)
	{
	int c=calcolasomma(A,N,k);
	c=(c%26)+1;
	cout<<c;
	char car=calcolacarattere(c);
	cout<<car;
	if(presente(car,A,N))
		cout<<car;
	k++;
	}

	return 0;
}

int calcolasomma(char** p, int dim,int k)
{
	int somma=0;
	somma+=calcolanumero(p[k][k]);
	somma+=calcolanumero(p[k][dim-k-1]);
	somma+=calcolanumero(p[dim-k-1][k]);
	somma+=calcolanumero(p[dim-k-1][dim-k-1]);
	cout<<endl;
	return somma;
}

int calcolanumero(char c)
{
	cout<<c;
	if(c>='a' && c<='z')
	{
		return c-96;
	}
	else
		return 0;
}

bool presente(char c, char** p, int n)
{
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			if(c==p[i][j])
				return true;
	return false;
}

char calcolacarattere(int num)
{
		char c = num+96;
		return c;
}






