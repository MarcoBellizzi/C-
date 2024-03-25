#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	char m[n][n];
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin>>m[i][j];
	string parola = "";
	char corr =' ';
	int cont=0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			corr=m[(cont++)%n][i];
			parola+=corr;
		}
		cont=corr-65;
	}
	cout<<parola;

	return 0;
}