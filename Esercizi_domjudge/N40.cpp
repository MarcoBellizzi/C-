#include <iostream>
using namespace std;

int main()
{
	char array[100];
	for(int i=0; i<100; i++)
		cin>>array[i];
	bool vuoto=true;
	int contT=0;
	int contm=0;
	for(int i=99; i>=0; i--)
	{
		if(array[i]>='a' && array[i]<='z')
		{
			vuoto=false;
			cout<<array[i];
			contm++;
			contT++;
		}
		if(array[i]>='A' && array[i]<='Z')
		{
			vuoto=false;
			cout<<array[i];
			contT++;
		}
	}
	if(vuoto)
		cout<<"VUOTO";
	else
	{
		cout<<endl;
		float perc;
		perc = contm*100;
		perc = perc / contT ;
		cout<<perc<<'%';
	}

	return 0;
}