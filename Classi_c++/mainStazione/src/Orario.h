/*
 * Orario.h
 *
 *  Created on: 09 lug 2017
 *      Author: marcobellizzi
 */

#ifndef ORARIO_H_
#define ORARIO_H_

class Orario {

private:
	int ore ;
	int minuti ;
	int secondi ;

public:
	Orario();
	Orario(int o, int m, int s);
	void stampaOra();

};

#endif /* ORARIO_H_ */
