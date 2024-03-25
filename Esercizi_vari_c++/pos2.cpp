#include <iostream>
using namespace std;

int main()
{
	int array[100];
	int cont=0;
	int corr;
	cin>>corr;
	while(corr>=0)
	{
		if(corr%5!=0)
			array[cont++]=corr;
		cin>>corr;
	};
	int pos2[100];
	int c2=0;
	cout<<'{';
	for(int i=0; i<cont; i++)
	{
		if(array[i]!=2)
			cout<<array[i]<<' ';
		else
		{
			cout<<"}{";
			pos2[c2++]=i+1;
		};
	};
	cout<<'}'<<endl;
	for(int i=0; i<c2; i++)
		cout<<pos2[i]<<' ';

	return 0;
}