#include <iostream>
using namespace std;

int main()
{
	int sequenza[100];
	int conts=0;
	int corr;
	cin>>corr;
	while(corr>=0)
	{
		sequenza[conts]=corr;
		conts++;
		cin>>corr;
	}
	if(conts==0)
		cout<<"Empty";
	if(conts==1)
		cout<<sequenza[0]<<endl<<1;
	if(conts>1)
	{
		int matrice[100][100];
		matrice[0][0]=sequenza[0];
		int r=0, c=1;
		
		int cont=1;
		int contmax=1;
		int rmax=0;
		
		for(int i=1; i<conts; i++)
		{
			if(sequenza[i]>=sequenza[i-1])
			{
				matrice[r][c]=sequenza[i];
				c++;
				cont++;
				if(cont>contmax)
				{
					contmax=cont;
					rmax=r;
				}
			}
			else
			{
				r++;
				matrice[r][0]=sequenza[i];
				c=1;
				cont=1;
			}
		}
		for(int j=0; j<contmax; j++)
			cout<<matrice[rmax][j];
		cout<<endl<<contmax;
	}

	return 0;
}