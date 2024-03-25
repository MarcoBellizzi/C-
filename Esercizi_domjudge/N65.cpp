#include <iostream>
using namespace std;

int main()
{
	int pesi[8];
	for(int i=0; i<8; i++)
		cin>>pesi[i];
	string matricole[70];
	int voti[70][8];
	for(int i=0; i<70; i++)
	{
		cin>>matricole[i];
		for(int j=0; j<8; j++)
			cin>>voti[i][j];
	}
	int soglia;
	cin>>soglia;
	int punteggi[70];
	for(int i=0; i<70; i++)
		punteggi[i]=0;
	for(int i=0; i<70; i++)
		for(int j=0; j<8; j++)
			punteggi[i]+=voti[i][j]*pesi[j];
	string max="";
	int votomax=0;
	string min="";
	int votomin=0;
	bool primo=true;
	int cont=0;
	for(int i=0; i<70; i++)
	{
		if(punteggi[i]>=soglia)
		{
			cout<<matricole[i]<<" "<<punteggi[i]<<endl;
			cont++;
			if(primo)
			{
				min=matricole[i];
				votomin=punteggi[i];
				max=matricole[i];
				votomax=punteggi[i];
				primo=false;
			}
			if(punteggi[i]<votomin && punteggi[i]>=soglia)
			{
				min=matricole[i];
				votomin=punteggi[i];
			}
			if(punteggi[i]>votomax)
			{
				max=matricole[i];
				votomax=punteggi[i];
			}
		}
	}
	cout<<cont<<" "<<max<<" "<<min;

	return 0;
}













