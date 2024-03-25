#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int array[10];
	for(int i=0; i<10; i++)
		array[i]=-1;
	int cont=0;
	while(n>0)
	{
		array[cont]=n%10;
		cont++;
		n/=10;
	}
	int array2[cont];
	for(int i=0; i<cont; i++)
		array2[i]=array[i];
	int nMax=0, nMin=0;
	int cmax=0, cmin=9;
	int ccorr;
	for(int i=0; i<cont; i++)
	{
		for(int j=0; j<cont; j++)
		{
			if(array[j]>=cmax)
			{
				ccorr=j;
				cmax=array[j];
			}
		}
		nMax=nMax*10+cmax;
		cmax=0;
		array[ccorr]=-1;
	}
	
	for(int i=0; i<cont; i++)
	{
		for(int j=0; j<cont; j++)
		{
			if(array2[j]<=cmin && array2[j]>=0)
			{
				ccorr=j;
				cmin=array2[j];
			}
		}
		nMin=nMin*10+cmin;
		cmin=9;
		array2[ccorr]=-1;
	}
	cout<<nMax-nMin;

	return 0;
}










