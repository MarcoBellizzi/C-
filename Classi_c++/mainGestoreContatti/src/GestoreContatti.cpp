/*
 * GestoreContatti.cpp
 *
 *  Created on: 19 ott 2017
 *      Author: Marco
 */

#include "GestoreContatti.h"

GestoreContatti::GestoreContatti() {
	// TODO Auto-generated constructor stub
}

GestoreContatti::~GestoreContatti() {
	// TODO Auto-generated destructor stub
}

void GestoreContatti::aggiungiContatto(const Contatto& c){
	lista.push_back(c);
}

void GestoreContatti::stampaContatti() {
	for (list<Contatto>::iterator iter = lista.begin() ; iter!=lista.end() ; iter++) {
		cout << (*iter).getNome() << endl ;
		cout << (*iter).getCognome() << endl ;
		cout << (*iter).getTelefono() << endl ;
		cout << (*iter).getEmail() << endl ;
	}
}

int GestoreContatti::numeroContatti() {
	int cont = 0 ;
	for (list<Contatto>::iterator iter = lista.begin() ; iter != lista.end() ; iter++)
		cont++;
	return cont ;
}

void GestoreContatti::ordinaContatti(){
	lista.sort();
}

bool GestoreContatti::eliminaContattoConRemove(const Contatto& con){
	int a = lista.size();
	lista.remove(con);
	int b = lista.size();
	if (a==b)
		return false ;
	else
		return true ;
}

bool GestoreContatti::eliminaContattoConErase(const Contatto& con) {

	int a = lista.size();

	for (list<Contatto>::iterator i = lista.begin() ; i!=lista.end() ; i++) {
		if ((*i)==con){
			lista.erase(i);
		}
	}

	int b = lista.size();

	if (a==b)
		return false ;
	return true ;
}

string GestoreContatti::trovaCognomePiuFrequente(){

	int cont = 0 ;
	int contmax = 0 ;
	string s ;

	for (list<Contatto>::iterator iter = lista.begin() ; iter != lista.end() ; iter++) {
		for( list<Contatto>::iterator inizio2 = lista.begin() ; inizio2 != lista.end() ; inizio2++)
			if ( (*iter).getCognome()==(*inizio2).getCognome())
				cont++;
		if (contmax<cont){
			contmax=cont ;
			s = (*iter).getCognome();
		}
		cont = 0 ;
	}
	return s ;
}

bool GestoreContatti::verificaContattiStessoTelefono(){

	for (list<Contatto>::iterator iter = lista.begin() ; iter != lista.end() ; iter++) {
		for( list<Contatto>::iterator iter2 = lista.begin() ; iter2 != lista.end() ; iter2++){
			if ((*iter).getTelefono()==(*iter2).getTelefono()){
				if ((*iter).getNome()==(*iter).getNome() || (*iter).getCognome()==(*iter2).getCognome()){
					return true ;
				}
			}
		}
	}
	return false ;
}

vector<string> GestoreContatti::trovaNumeri(const string& nome , const string& cognome){
	vector<string> vettore ;
	for (list<Contatto>::iterator iter = lista.begin() ; iter != lista.end() ; iter++){
		if ((*iter).getNome()==nome && (*iter).getCognome()==cognome){
			vettore.push_back((*iter).getTelefono());
		}
	}
	return vettore ;
}

void GestoreContatti::operator[]( int i){

	int cont = 0 ;

	for (list<Contatto>::iterator iter = lista.begin() ; iter != lista.end() ; iter++ ){
		if (i==cont){
			cout << (*iter).getNome() << endl ;
			cout << (*iter).getCognome() << endl ;
		}
		cont++;
	}


}






























