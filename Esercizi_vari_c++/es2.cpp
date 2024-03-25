//============================================================================
// Name        : es2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <time.h>
#include <stdlib.h>


int main() {

	srand(time(0));
	int sempre = 1 ;
	int corr ;
	int primo ;
	int secondo ;
	int risposta ;
	char corretta[4][80] = { "bravo" , "eccellente" , "ottimo lavoro" , "continua cosi'" };
	char sbagliata[4][80] = { "no, riprova" , "sbagliato, prova ancora" , "non ti arrendere, riprova" , "niente da fare, prova ancora"};
	while (sempre)
	{
		primo = rand()%11 ;
		secondo = rand()%11;
		corr = rand()%4 ;
		if (corr==0)
		{
			cout << "quanto fa " << primo << " + " << secondo << " ?" << endl ;
			cin >> risposta ;
			if (risposta == primo+secondo)
				cout << corretta[rand()%4] << endl ;
			else
			{
				while (risposta!=primo+secondo)
				{
					cout << sbagliata[rand()%4] << endl ;
					cin >> risposta ;
				}
				cout << corretta[rand()%4] << endl ;
			}
		}
		if (corr==1)
		{
			cout << "quanto fa " << primo << " - " << secondo << " ?" << endl ;
			cin >> risposta ;
			if (risposta == primo-secondo)
				cout << corretta[rand()%4] << endl ;
			else
			{
				while (risposta!=primo-secondo)
				{
					cout << sbagliata[rand()%4] << endl ;
					cin >> risposta ;
				}
				cout << corretta[rand()%4] << endl ;
			}
		}
		if (corr==2)
		{
			cout << "quanto fa " << primo << " * " << secondo << " ?" << endl ;
			cin >> risposta ;
			if (risposta == primo*secondo)
				cout << corretta[rand()%4] << endl ;
			else
			{
				while (risposta!=primo*secondo)
				{
					cout << sbagliata[rand()%4] << endl ;
					cin >> risposta ;
				}
				cout << corretta[rand()%4] << endl ;
			}
		}
		if (corr==3)
		{
			cout << "quanto fa " << primo << " / " << secondo << " ?" << endl ;
			if (secondo==0)
			{
				while (secondo!=0)
				{
					secondo = rand()%11;
				}
			}
			cin >> risposta ;
			if (risposta == primo/secondo)
				cout << corretta[rand()%4] << endl ;
			else
			{
				while (risposta!=primo/secondo)
				{
					cout << sbagliata[rand()%4] << endl ;
					cin >> risposta ;
				}
				cout << corretta[rand()%4] << endl ;
			}
		}
	}

	return 0;
}
