//============================================================================
// Name        : Controllo.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

int main() {
	cout<<"inserisci la lunghezza del primo array ";
	unsigned l;
	cin>>l;
	int A[l];
	cout<<"inserisci la lunghezza del secondo array ";
	unsigned l1;
	cin>>l1;
	int B[l1];
	if(A[l]<B[l1]){
		cout<<"il secondo array è più grande del primo ";
	}else{
		int C[l1];
		for(int i=0; i<l; i++){
			cout<<"inserisci valore primo array ";
			cin>>A[i];
			}
		for(int i=0; i<l1; i++){
			cout<<"inserisci valore secondo array ";
			cin>>B[i];
		}
		for(int i=0; i<l1; i++){
			for(int j=0; j<l; j++){
				if(B[i]== A[j]){
					C[i]= B[i];
				}
			}
		}
		cout<<"gli interi del secondo array presenti nel primo sono: ";
		for(int i=0; i<l1; i++){
			cout<<C[i]<<" ";
		}
		bool controllo= false;
		for(int i=0; i<l1;){
			for(int j=0; j<l;){
				if(C[i]== A[j]){
					i++;
					j++;
					controllo= true;
				}
					controllo = false;
					j++;

		}
		if(controllo== true)
			cout<<"SI";
		if(controllo== false)
			cout<<"NO";
		}
		return 0;
	}
}


