#include <iostream>
using namespace std;

int main()
{
	int array[100];
	int cont=0;
	int corr;
	cin>>corr;
	while(corr!=0)
	{
		array[cont++]=corr;
		cin>>corr;
	}
	int A[100];
	int B[100];
	int conta=0;
	int contb=0;
	for(int i=1; i<cont-1; i++)
	{
		if(array[i]%2==0)
		{
			if(array[i-1]%2==1 && array[i+1]%2==1)
				B[contb++]=array[i];
		}
		else
			if(array[i-1]%2==0 && array[i+1]%2==0)
				A[conta++]=array[i];
	}
	for(int i=0; i<conta; i++)
		cout<<A[i]<<" ";
	cout<<endl;
	for(int i=0; i<contb; i++)
		cout<<B[i]<<" ";
	cout<<endl;
	bool condizionefinale = true;
	bool condizione;
	for(int i=0; i<conta; i++)
	{
		condizione=false;
		for(int j=0; j<contb; j++)
		{
			if(B[j]%A[i]==0)
				condizione=true;
		}
		if(!condizione)
			condizionefinale=false;
	}
	if(condizionefinale)
		cout<<"OK";
	else
		cout<<"NO";

	return 0;
}














