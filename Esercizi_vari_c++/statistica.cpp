//============================================================================
// Name        : statistica.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

	srand(time(0));
	int risultati[11][6];
	int risultati2[11][6];
	int dado1, dado2;
	int somma;
	int casuale;

	for(int i=0; i<11; i++)
		for(int j=0; j<6; j++){
			risultati[i][j]=0;
			risultati2[i][j]=0;
		}
	int j=0;
	for(int i=10; i<=1000000; i*=10)
	{
		for(int k=0; k<i; k++)
		{
			dado1=rand()%6 +1;
			dado2=rand()%6 +1;
			somma=dado1+dado2;
			switch(somma)
			{
			case(2): risultati[0][j]++;
				break;
			case(3): risultati[1][j]++;
				break;
			case(4): risultati[2][j]++;
				break;
			case(5): risultati[3][j]++;
				break;
			case(6): risultati[4][j]++;
				break;
			case(7): risultati[5][j]++;
				break;
			case(8): risultati[6][j]++;
				break;
			case(9): risultati[7][j]++;
				break;
			case(10): risultati[8][j]++;
				break;
			case(11): risultati[9][j]++;
				break;
			case(12): risultati[10][j]++;
				break;
			}
			casuale=rand()%11 +2;
			switch(casuale)
				{
				case(2): risultati2[0][j]++;
					break;
				case(3): risultati2[1][j]++;
					break;
				case(4): risultati2[2][j]++;
					break;
				case(5): risultati2[3][j]++;
					break;
				case(6): risultati2[4][j]++;
					break;
				case(7): risultati2[5][j]++;
					break;
				case(8): risultati2[6][j]++;
					break;
				case(9): risultati2[7][j]++;
					break;
				case(10): risultati2[8][j]++;
					break;
				case(11): risultati2[9][j]++;
					break;
				case(12): risultati2[10][j]++;
					break;
				}
		}
		j++;
	}

	float corr;

	float freq[11][6];
	float freq2[11][6];
	int b = 10;
	for(int j=0; j<6; j++){
		for(int i=0; i<11; i++){
			corr = risultati[i][j];
			freq[i][j]= corr / b ;
			corr = risultati2[i][j];
			freq2[i][j]= corr / b ;
		}
		b*=10;
	}

	cout << endl;

	int k=0;
	cout<<"DUE DADI      N     2    3    4    5    6    7    8    9    10   11   12"<<endl;
	for(int j=0; j<6; j++)
	{
		k++;
		cout<<"freq. ass.    10^"<<k<<"  ";
		for(int i=0; i<11; i++)
			cout << risultati[i][j] << "    " ;
		cout << endl << "freq. rel.    10^"<<k<<"  ";
		for(int i=0; i<11; i++)
			cout << freq[i][j] << "    " ;
		cout << endl ;
	}

	cout << endl << endl ;


	k=0;
	cout<<"NUMERO        N     2    3    4    5    6    7    8    9    10   11   12"<<endl;
	for(int j=0; j<6; j++)
	{
		k++;
		cout<<"freq. ass.    10^"<<k<<"  ";
		for(int i=0; i<11; i++)
			cout << risultati2[i][j] << "    " ;
		cout << endl << "freq. rel.    10^"<<k<<"  ";
		for(int i=0; i<11; i++)
			cout << freq2[i][j] << "    " ;
		cout << endl ;
	}

	cout<<endl;
	cout<<"Nel caso dei dadi le probabilità aumentano più la somma tende a 7."<<endl;
	cout<<"Nel caso casuale le probabilità sono distribuite aquamente.";

	return 0;
}
















