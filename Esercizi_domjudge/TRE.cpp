#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int k=0;
	int matrice[10][10];
	for(int i=0; i<10; i++)
		for(int j=0; j<10; j++)
		{
			matrice[i][j]= (k%n)+1;
			k++;
		}
	int somma=0;
	int a=0, b=9;
	for(int i=0; i<10; i++)
	{
		somma+=matrice[a][b];
		a++;
		b--;
	}
	cout<<somma;

	return 0;
}