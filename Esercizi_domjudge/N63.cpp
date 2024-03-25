//============================================================================
// Name        : N63.cpp
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
			matrice[i][j]=0;

	int k1=n/2, k2=k1;

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(j>=k1 && j<=k2)
				matrice[i][j]=1;
		}
		if(i<n/2)
		{
			k1--;
			k2++;
		}
		else
		{
			k1++;
			k2--;
		}
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++)
			cout<<matrice[i][j]<<" ";
		cout<<endl;
	}

	return 0;
}
