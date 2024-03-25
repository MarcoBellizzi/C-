#include <iostream>
using namespace std;

int main()
{
	int array[100];
	for(int i=0; i<100; i++)
		cin>>array[i];
	bool trovato1=false;
	bool trovato2=false;
	int somma=0;
	int cont=0;
	for(int i=0; i<100; i++)
	{
		if(array[i]<-50 || array[i]>50)
		{
			trovato1=true;
			cout<<array[i];
		}	
		else
		{
			trovato2=true;
			somma+=array[i];
			cont++;
		}
	}
	if(!trovato1)
		cout<<"VUOTO1";
	cout<<endl;
	if(!trovato2)
		cout<<"VUOTO2";
	else
	{
		float s;
		s = somma ;
		s = s/cont ;
		cout<<s;
	}

	return 0 ;
}