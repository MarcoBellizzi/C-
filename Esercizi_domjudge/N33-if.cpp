#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int gg, gpc, contg=0, contpc=0;
	bool continua=true;
	bool corretto=true;
	while(continua)
	{
		while(corretto)
		{
			cout << "Inserisci la giocata del primo giocatore (1: sasso, 2: carta, 3: forbice):";
			cin >> gg;
			if(gg==1 || gg==2 || gg==3)
				corretto=false;
		}
		corretto=true;
		gpc=rand()%3 +1;
		if(gg==1)
		{
			cout << "hai giocato sasso"<<endl;
			if(gpc==1)
			{
				cout << "il PC ha giocato sasso"<<endl;
				cout << "Pari:";
				cout << contg << '-' << contpc << endl;
			}
			if(gpc==2)
			{
				contpc++;
				cout << "il PC ha giocato carta"<<endl;
				cout << "Vince il PC:"<<endl;
				cout << contg << '-' << contpc << endl;
			}
			if(gpc==3)
			{
				contg++;
				cout << "il PC ha giocato forbice"<<endl;
				cout << "Vinci tu:"<<endl;
				cout << contg << '-' << contpc << endl;

			}
		}
		if(gg==2)
		{
			cout << "hai giocato carta"<<endl;
			if(gpc==1)
			{
				contg++;
				cout << "il PC ha giocato sasso"<<endl;
				cout << "Vinci tu:"<<endl;
				cout << contg << '-' << contpc << endl;
			}
			if(gpc==2)
			{
				cout << "il PC ha giocato carta"<<endl;
				cout << "Pari:";
				cout << contg << '-' << contpc << endl;
			}
			if(gpc==3)
			{
				contpc++;
				cout << "il PC ha giocato forbice"<<endl;
				cout << "Vince il PC:"<<endl;
				cout << contg << '-' << contpc << endl;
			}
		}
		if(gg==3)
		{
			cout << "hai giocato forbice"<<endl;
			if(gpc==1)
			{
				contpc++;
				cout << "il PC ha giocato sasso"<<endl;
				cout << "Vince il PC:"<<endl;
				cout << contg << '-' << contpc << endl;
			}
			if(gpc==2)
			{
				contg++;
				cout << "il PC ha giocato carta"<<endl;
				cout << "Vinci tu:"<<endl;
				cout << contg << '-' << contpc << endl;
			}
			if(gpc==3)
			{
				cout << "il PC ha giocato forbice"<<endl;
				cout << "Pari:";
				cout << contg << '-' << contpc << endl;
			}
		}
		if(contg==3 || contpc==3)
			continua=false;
	}
	if(contg==3)
		cout << "Hai vinto la sfida!" << endl;
	if(contpc==3)
		cout << "Il PC ha vinto la sfida!" << endl;


	return 0;
}
