/*
 * Treno.h
 *
 *  Created on: 12 giu 2017
 *      Author: marcobellizzi
 */

#ifndef TRENO_H_
#define TRENO_H_

class Treno {

private:
	int posti ;
	char* codice ; // lunghezza 10
	int tipologia ; // 0 indefinito, 1 regionale, 2 interregionale, 3 intercity, 4 freccia

public:
	Treno();
	Treno(int,char*,int);
	void setPosti(int p);
	void setCodice(char* c);
	void setTipologia(int t);
	int getPosti();
	char* getCodice();
	int getTipologia();
};

#endif /* TRENO_H_ */
