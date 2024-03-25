#include "Studente.h"

Studente::Studente() {
	nome = " " ;
	cognome = " " ;
	matricola = 0 ;
	esami = new int[30];
	for (int i=0 ; i<30 ; i++){
		esami[i]=0;
	}
}

Studente::Studente(string n , string c , int m){
	nome = n ;
	cognome = c ;
	matricola = m ;
	esami = new int[30] ;
	for (int i=0 ; i<30 ; i++){
		esami[i]=0;
	}
}

void Studente::aggiungiEsame(int i, int voto){
	if (i<0 || i>29){
		cout << "esame non valido" << endl ;
		return ;
	}
	if (voto<18 || voto>31){
		cout << "voto non valido" << endl ;
		return ;
	}
	esami[i]=voto ;

}

int Studente::media(){
	int media = 0 ;
	int cont = 0 ;

	for (int i=0 ; i<30 ; i++ ){
		if (esami[i]>17&&esami[i]<32){
			media += esami[i];
			cont++ ;
		}
	}

	return media/cont ;
}

int Studente::esamiMancanti(){
	int mancanti = 0 ;

	for (int i=0 ; i<30 ; i++){
		if (esami[i]==0){
			mancanti++;
		}
	}

	return mancanti ;
}

int Studente::esamiSuperati(){
	return 30-esamiMancanti();
}

int Studente::votoMax(){
	int max = 0 ;

	for (int i=0 ; i<30 ; i++){
		if (esami[i]>max){
			max = esami[i];
		}
	}

	return max ;
}

int Studente::votoMin(){
	int min = 32 ;

	for (int i=0 ; i<30 ; i++){
		if (esami[i]>17 && esami[i]<min){
			min = esami[i];
		}
	}

	return min ;
}

int Studente::operator[] (int i){
	return esami[i];
}

Studente::~Studente() {
	delete[] esami ;
}






