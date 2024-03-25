#include <iostream>
using namespace std;

int cifre(int n)
{
	int cont=0;
	while(n!=0)
	{
		n/=10;
		cont++;
	}
	return cont;
};

int main()
{
	int A[100];
	int B[100];
	int cont1=0;
	int cont2=0;
	int corr;
	cin>>corr;
	while(corr>0)
	{
		A[cont1++]=corr;
		cin>>corr;
	}
	cin>>corr;
	while(corr>0)
	{
		B[cont2++]=corr;
		cin>>corr;
	}
	bool condizione=true;
	for(int i=0; i<cont1; i++)
	{
		for(int j=0; j<cont2; j++)
		{
			if(cifre(A[i])==cifre(B[j]))
			{
				cout<<A[i]<<" ";
				for(int k=0; k<cont2; k++)
					if(A[i]<=B[k])
						condizione=false;
				break;
			}
		}
	}
	if(condizione)
		cout<<"OK";
	else
		cout<<"NO";

	return 0;
}











	