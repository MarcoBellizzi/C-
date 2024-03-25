#include <iostream>
using namespace std;

int main()
{
	int array[100];
	int corr;
	int i=0;
	int somma=0;
	while(true)
	{
		cin>>corr;
		if(corr==-50)
			break;
		array[i]=corr;
		somma+=array[i];
		i++;
	}
	if(i==0)
		cout<<"VUOTA";
	else
	{
		int media=somma/i;
		int min=somma;
		for(int j=0; j<i; j++)
			if(array[j]>=media && array[j]<=min)
				min=array[j];
		cout<<min;
	}
	
	return 0;
}