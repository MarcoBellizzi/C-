#include <iostream>
using namespace std;

int main()
{
	int array[10];
	for(int i=0; i<10; i++)
		array[i]=0;
	bool libero1=true, libero2=true;
	char scelta;
	int cont1=1, cont2=6;
	while(libero1 || libero2)
	{
		cout << " Digitare 1 per fumatori o 2 per non fumatori: ";
		cin>>scelta;
		if(scelta=='1')
		{
			if(libero1)
			{
				cout << " Reparto fumatori, posto " << cont1 << endl << endl;
				array[cont1-1]=1;
				cont1++;
				if(cont1>=6)
					libero1=false;
			}
			else
			{
				cout << "  Reparto scelto al completo. Si desidera un posto nell'altro reparto (S/N)? ";
				cin>>scelta;
				if(scelta=='S')
				{
					cout << " Reparto NON fumatori, posto " << cont2 << endl << endl;
					array[cont2-1]=1;
					cont2++;
					if(cont2>=11)
						libero2=false;
				}
				if(scelta=='N')
					cout << "  Il prossimo volo parte tra 3 ore " << endl << endl;
			}
		}
		if(scelta=='2')
		{
			if(libero2)
			{
				cout << " Reparto NON fumatori, posto " << cont2 << endl << endl;
				array[cont2-1]=1;
				cont2++;
				if(cont2>=11)
					libero2=false;
			}
			else
			{
				cout << "  Reparto scelto al completo. Si desidera un posto nell'altro reparto (S/N)? ";
				cin>>scelta;
				if(scelta=='S')
				{
					cout << " Reparto fumatori, posto " << cont1 << endl << endl;
					array[cont1-1]=1;
					cont1++;
					if(cont1>=6)
						libero1=false;
				}
				if(scelta=='N')
					cout << "  Il prossimo volo parte tra 3 ore " << endl << endl;
			}
		}
	}

	return 0;
}



















