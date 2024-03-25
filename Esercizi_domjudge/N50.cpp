//============================================================================
// Name        : N50.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	int corr;
	cin>>corr;
	if(corr>50)
		cout<<"SI";
	else{
		while(corr<=50){
			v.push_back(corr);
			cin>>corr;
		}
		vector<int> occorrenze;
		int cont=1;
		for(unsigned i=0; i<v.size(); i++){
			if(v[i]!=0){
				for(unsigned j=i+1; j<v.size(); j++){
					if(v[i]==v[j]){
						v[j]=0;
						cont++;
					}
				}
				occorrenze.push_back(cont);
				cont=1;
			}
		}
		bool diverso=true;
		cont=0;
		for(unsigned i=0; i<occorrenze.size(); i++){
			if(occorrenze[i]!=0){
				for(unsigned j=i+1; j<occorrenze.size(); j++){
					if(occorrenze[i]==occorrenze[j]){
						diverso=false;
						occorrenze[j]=0;
					}
				}
				cont++;
			}
		}
		if(diverso)
			cout<<"SI";
		else
			cout<<"NO"<<cont;
	}
	return 0;
}


//  2 7 1 3 7 4 2 2 7 3 7 4 7 5 5 5 7 52
