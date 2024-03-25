//============================================================================
// Name        : prova.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int x;
	int y;
	cin>>x>>y;
	int somma=0;


	while(x<=y){
		if(x%2==1){
			somma=somma+x;
		}
		x=x+1;
	}
	cout<<somma;





}
