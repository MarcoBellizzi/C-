#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int tg=0;
	int sg=0;
	int contG=0;
	int contPC=0;
	bool continua=true;
	while(continua)
	{
		bool trovato=true;
		while(trovato)
		{
			cout << "Inserisci la giocata del primo giocatore (1: sasso, 2: carta, 3: forbice):";   
			cin>>tg;                                                                                
			if(tg==1 || tg==2 || tg==3)
				trovato=false;
		}
		trovato=true;
		sg=rand()%3;
		switch(tg)
		{
			case (1):
			cout << "hai giocato sasso"<<endl;
				switch(sg)
				{
				case (0):
					cout << "il PC ha giocato sasso"<<endl;
					cout << "Pari:";
					cout << " " << contG << '-' << contPC << endl;
					break;
				case (1):
					cout << "il PC ha giocato carta"<<endl;
					cout << "Vince il PC:"<<endl;
					contPC++;
					cout << contG << '-' << contPC << endl;
					break;
				case (2):
					cout << "il PC ha giocato forbice"<<endl;
					cout << "Vinci tu:"<<endl;
					contG++;
					cout << contG << '-' << contPC << endl;
					break;
				}
				break;
			case (2):
				cout << "hai giocato carta"<<endl;
				switch(sg)
				{
				case (0):
					cout << "il PC ha giocato sasso"<<endl;
					cout << "Vinci tu:"<<endl;
					contG++;
					cout << contG << '-' << contPC << endl;
					break;
				case (1):
					cout << "il PC ha giocato carta"<<endl;
					cout << "Pari:";
					cout << " " << contG << '-' << contPC << endl;
					break;
				case (2):
					cout << "il PC ha giocato forbice"<<endl;
					cout << "Vince il PC:"<<endl;
					contPC++;
					cout << contG << '-' << contPC << endl;
					break;
				}
				break;
			case (3):
				cout << "hai giocato forbice"<<endl;
				switch(sg)
				{
				case (0):
					cout << "il PC ha giocato sasso"<<endl;
					cout << "Vince il PC:"<<endl;
					contPC++;
					cout << contG << '-' << contPC << endl;
					break;
				case (1):
					cout << "il PC ha giocato carta"<<endl;
					cout << "Vinci tu:"<<endl;
					contG++;
					cout << contG << '-' << contPC << endl;
					break;
				case (2):
					cout << "il PC ha giocato forbice"<<endl;
					cout << "Pari:";
					cout << " " << contG << '-' << contPC << endl;
					break;
			}
			break;
		}
		if(contG==3 || contPC==3)
			continua=false;
		tg=0;
		sg=0;
	}
	if(contG==3)
		cout << "Hai vinto la sfida!" << endl;
	if(contPC==3)
		cout << "Il PC ha vinto la sfida!" << endl;

	return 0;
}