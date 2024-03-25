/*
 * Contatto.h
 *
 *  Created on: 19 ott 2017
 *      Author: Marco
 */
#ifndef CONTATTO_H_
#define CONTATTO_H_

#include <iostream>
#include <string>
using namespace std ;

class Contatto {
private:
	string nome;
	string cognome;
	string telefono;
	string email;

public:
	Contatto();
	Contatto(const string & nom, const string & cog);
	Contatto(const string & nom, const string & cog, const string& n, const string& e);

	friend istream& operator >> (istream& in, Contatto&);
	friend ostream& operator << (ostream& out, const Contatto&);

	void setNome(const string & nom);
	void setCognome(const string & cog);
	void setTelefono(const string& telefono);
	void setEmail(const string & email);

	const string& getCognome() const;
	const string& getEmail() const;
	const string& getNome() const;
	const string& getTelefono() const;

	bool operator==(const Contatto& c) const;
	bool operator!=(const Contatto& c) const;
	bool operator<(const Contatto& c) const;
	bool operator>(const Contatto& c) const;

};

#endif /* CONTATTO_H_ */
