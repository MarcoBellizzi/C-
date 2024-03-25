#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int numero[n];
	for(int i=0; i<n; i++)
		cin>>numero[i];
	int somma=0;
	int e=1;
	for(int i=n-1; i>=0; i--)
	{
		if(numero[i]==1)
			somma+=e;
		e*=2;
	}
	cout<<somma<<" ";
	e=1;
	bool pot2=false;
	while(e<=somma)
	{
		if(somma==e)
			pot2=true;
		e*=2;
	}
	if(pot2)
		cout<<"SI";
	else
		cout<<"NO";



	return 0;
}
