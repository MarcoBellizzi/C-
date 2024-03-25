//============================================================================
// Name        : N59.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int n;
	cin>>n;
	int matrice[n][n];
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin>>matrice[i][j];
	int k=n/2;
	int sommac=0;
	int sommaa=0;
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
		{
			if(i==k || j==k)
				sommac+=matrice[i][j];
			else
				sommaa+=matrice[i][j];
		}
	//cout<<sommac<<" "<<sommaa<<" ";
	if(sommac>sommaa)
		cout<<"SI";
	else
		cout<<"NO";




	return 0;
}
