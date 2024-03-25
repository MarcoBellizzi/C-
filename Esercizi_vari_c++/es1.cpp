//============================================================================
// Name        : es1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


int main() {
	double cont1 = 0;
	double cont2 = 0;
	double cont3 = 0;
	double contot = 0;
	double var = -1 ;
	while (var!=0)
	{
		cin >> var ;
		if (var == 1)
			cont1++;
		if (var == 2)
			cont2++;
		if (var == 3)
			cont3++;
		if (var!=0)
			contot++;
	}

	double per[3] = { cont1*100/contot , cont2*100/contot , cont3*100/contot };

	cout << "il candidato 1 ha preso " << cont1 << " voti " << per[0] << endl ;
	cout << "il candidato 2 ha preso " << cont2 << " voti " << per[1] << endl ;
	cout << "il candidato 3 ha preso " << cont3 << " voti " << per[2] << endl ;

	bool vincitore = false ;
	int vin = 0;

	for (int i=0 ; i<3 ; i++)
	{
		if (per[i]>50)
		{
			vincitore = true ;
			vin = i+1 ;
		}
	}
	if (vincitore==true)
		cout << "ha vinto il candidato " << vin << endl ;
	else
		cout << "si va in ballottaggio " << endl ;

	return 0;
}
