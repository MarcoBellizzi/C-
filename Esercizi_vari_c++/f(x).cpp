#include <iostream>
using namespace std;

bool funzione(char f[])
{
	int k=1;
	int cont=0;
	int cont2=0;
	while(true)
	{
		if(f[cont]!='-' && f[cont]!='.')
			cont2++;
		if(f[cont]=='-')
		{
			if(cont2!=(k*2)-1)
				return false;
			k++;
			cont2=0;
		}
		if(f[cont]=='.')
		{
			if(cont2!=(k*2)-1)
				return false;
			break;
		}
		cont++;
	}
	char m[k][k];
	int l=0;
	int I=0;
	int J=0;
	cont=0;
	while(l<k)
	{
		I=l;
		J=0;
		m[I][J]=f[cont++];
		for(int i=0; i<l; i++)
		{
			J++;
			m[I][J]=f[cont++];
		}
		for(int i=0; i<l; i++)
		{
			I--;
			m[I][J]=f[cont++];
		}
		l++;
		cont++;
	}
	for(int i=0; i<k; i++)
	{
		for(int j=0; j<k; j++)
			cout<<m[i][j]<<" ";
		cout<<endl;
	}
	return true;
}

int main()
{
	char corr;
	char frase[100];
	cin>>corr;
	int cont=0;
	frase[cont++]=corr;
	while(corr!='.')
	{
		cin>>corr;
		frase[cont++]=corr;
	}
	if(!funzione(frase))
		cout<<"false";

	return 0;
}