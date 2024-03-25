/*
 * AgenziaViaggi.cpp
 *
 *  Created on: 13 nov 2017
 *      Author: Marco
 */


#include "AgenziaViaggi.h"

/*
	Il ricavo di un viaggio e' definito come il prodotto tra numero di prenotazioni e costo a persona.
	Restituire la destinazione del viaggio con il ricavo piu' alto.
	Se non sono presenti viaggi restituire "-1".
	Se due o piu' viaggi hanno come ricavo lo stesso ricavo massimo,
	restituire la destinazione del viaggio con distanza piu' bassa.

	Ad esempio, se la lista di viaggi contenesse:
		("Londra",EUROPA,3000,50,100)
		("Tokyo",ASIA,10000,1000,200)
		("New York",AMERICA,9000,2000,100)
	in cui per ogni viaggio sono riportati (Destinazione,Continente,Distanza,Costo,Prenotazioni),
	il metodo restituirebbe "New York".

	Infatti, il ricavo massimo e' 200000 e si ottiene su due viaggi con destinazioni "Tokio" e "New York".
	Tuttavia, per il viaggio a "New York" la distanza e' 9000, mentre per il viaggio a "Tokyo" e' 10000.

*/
string AgenziaViaggi::metodo1()
{
    if(viaggi.empty())
    	return "-1";
    int ricavomax=0;
    unsigned distanzamax=0;
    int ricavo;
    string risultato="";
    for(list<Viaggio>:: iterator iter=viaggi.begin(); iter!=viaggi.end(); iter++){
    	ricavo=(*iter).getCosto()*(*iter).getPrenotazioni();
    	if(ricavo==ricavomax){
    		if((*iter).getDistanza()<distanzamax){
    			risultato=(*iter).getDestinazione();
    			ricavomax=ricavo;
    			distanzamax=(*iter).getDistanza();
    		}
    	}
    	if(ricavo>ricavomax){
    		risultato=(*iter).getDestinazione();
    		ricavomax=ricavo;
    		distanzamax=(*iter).getDistanza();
    	}
    }
    return risultato ;
}

/*
	Sia C il continente con il maggior numero di destinazioni (distinte).
	Se due o piu' continenti hanno lo stesso numero massimo di destinazioni, considerare il primo in ordine alfabetico.
	Restituire il numero di prenotazioni totali per il continente C.
	Se non sono presenti viaggi, restituire "-1".

	Ad esempio, se la lista di viaggi contesse:
		("Londra",EUROPA,3000,50,100)
		("Tokyo",ASIA,10000,1000,200)
		("New York",AMERICA,9000,2000,100)
		("New York",AMERICA,9000,1500,130)
	in cui per ogni viaggio sono riportati (Destinazione,Continente,Distanza,Costo,Prenotazioni),
	il il metodo restituirebbe 230.

	Il numero di destinazioni per i continenti AMERICA, ASIA e EUROPA e' pari a 1, mentre per OCEANIA e AFRICA e' 0.
	Il maggior numero di destinazioni e' 1, e si deve considerare il continente AMERICA, dal momento che e' il primo in ordine alfabetico.
	Il totale delle prenotazioni per AMERICA e' 230.

*/
int AgenziaViaggi::metodo2()
{

    return -1;
}

/*
	Si supponga di classificare i viaggi presenti nella lista in viaggi occidentali e viaggi orientali.
	I viaggi che hanno come continente EUROPA o AMERICA sono occidentali.
	I viaggi che hanno come continente ASIA sono orientali.
	Sia N1 il numero totale di prenotazioni nei viaggi occidentali.
	Sia N2 il numero totale di prenotazioni nei viaggi orientali.
	Se N1 >= N2 restituire la destinazione occidentale piu' ambita,
	ovvero la destinazione occidentale per cui sono presenti piu' prenotazioni.
	Nel caso in cui piu' destinazioni occidentali hanno lo stesso
	numero massimo di prenotazioni restituire la prima in ordine di apparizione nella lista.
	Se N1 < N2 restituire la destinazione orientale piu' ambita,
	ovvero la destinazione orientale per cui sono presenti piu' prenotazioni.
	Nel caso in cui piu' destinazioni orientali hanno lo stesso
	numero massimo di prenotazioni restituire la prima in ordine di apparizione nella lista.
	Se non sono presenti viaggi, oppure se non sono presenti viaggi nei continenti EUROPA, AMERICA e ASIA restituire "-1".
	Inoltre, si noti che alcune destinazioni potrebbero fare parte di piu' continenti (ad esempio Cambridge si trova si in AMERICA sia in EUROPA).

	Ad esempio, se la lista di viaggi contenesse:
	("Londra",EUROPA,3000,50,100)
	("Tokyo",ASIA,10000,1000,200)
	("New York",AMERICA,9000,2000,100)
	("New York",AMERICA,9000,1500,130)
	in cui per ogni viaggio sono riportati (Destinazione,Continente,Distanza,Costo,Prenotazioni),
	il metodo restituirebbe "New York".

	Infatti, N1 = 100 + 100 + 130 = 330, mentre N2 = 200.
	Poiche' N1 >= N2, bisogna restituire la destinazione occidentale con piu' prenotazioni.
	Per "Londra" abbiamo 100 prenotazioni, mentre per "New York" 230.

*/
string AgenziaViaggi::metodo3()
{
    list<Viaggio> occidentali;
    list<Viaggio> orientali;
    if(viaggi.empty())
    	return "-1";
    for(list<Viaggio>::iterator iter=viaggi.begin(); iter!=viaggi.end(); iter++){
    	if((*iter).getContinente()==EUROPA || (*iter).getContinente()==AMERICA){
    		occidentali.push_back(*iter);
    	}
    	if((*iter).getContinente()==ASIA){
    		orientali.push_back(*iter);
    	}
    }
    if(occidentali.empty() || orientali.empty())
    	return "-1";
    int N1=0;
    for(list<Viaggio>::iterator iterOC=occidentali.begin(); iterOC!=occidentali.end(); iterOC++){
    	N1+=(*iterOC).getPrenotazioni();
    }
    int N2=0;
    for(list<Viaggio>::iterator iterOR=occidentali.begin(); iterOR!=occidentali.end(); iterOR++){
    	N2+=(*iterOR).getPrenotazioni();
    }
    int preno=0, prenomax=0;
    string risultato="";
    if(N1>=N2){
    	for(list<Viaggio>::iterator iter=occidentali.begin(); iter!=occidentali.end(); iter++){
    		for(list<Viaggio>::iterator iter2=occidentali.begin(); iter2!=occidentali.end(); iter2++){
    			if((*iter).getDestinazione()==(*iter2).getDestinazione()){
    				preno+=(*iter2).getPrenotazioni();
    			}
    		}
    		if(preno>prenomax){
    			prenomax=preno;
    			risultato=(*iter).getDestinazione();
    		}
    	}
    }
    else{
    	for(list<Viaggio>::iterator iter=orientali.begin(); iter!=orientali.end(); iter++){
    		for(list<Viaggio>::iterator iter2=orientali.begin(); iter2!=orientali.end(); iter2++){
    			if((*iter).getDestinazione()==(*iter2).getDestinazione()){
    				preno+=(*iter2).getPrenotazioni();
    			}
    		}
    		if(preno>prenomax){
    			prenomax=preno;
    			risultato=(*iter).getDestinazione();
    		}
    	}
    }
    return risultato ;
}

/*
	Costruire una lista L di destinazioni (distinte), in cui le destinazioni sono ordinate come segue:
		- in ordine decrescente rispetto al numero di occorrenze nella lista di viaggi,
		- a parita' di numero di occorrenze in ordine alfabetico (dalla A alla Z).

	Restituire la penultima destinazione presente in L.
	Se non sono presenti almeno due destinazioni distinte o non sono presenti viaggi restituire "-1".

	Ad esempio, se la lista di viaggi contenesse:
		("Londra",EUROPA,3000,50,100)
		("Tokyo",ASIA,10000,1000,200)
		("New York",AMERICA,9000,2000,100)
		("New York",AMERICA,9000,1500,130)
	in cui per ogni viaggio sono riportati (Destinazione,Continente,Distanza,Costo,Prenotazioni),
	il metodo restituirebbe "Londra".

	Infatti, la lista L contiene le destinazioni nell'ordine:
		New York	(Numero Occorrenze 2)
		Londra		(Numero Occorrenze 1)
		Tokyo 		(Numero Occorrenze 1)

*/
string AgenziaViaggi::metodo4()
{
   if(viaggi.empty())
	   return "-1";
   list<string> destinazioni;
   for(list<Viaggio>::iterator iter=viaggi.begin(); iter!=viaggi.end(); iter++){
	   destinazioni.push_back((*iter).getDestinazione());
   }
   destinazioni.sort();
   destinazioni.unique();

   int occ=0, occmax=0;
   list<string>::iterator prox;
   list<string> risultato ;

   while(destinazioni.empty()==false){

	   for(list<string>::iterator iter=destinazioni.begin(); iter!=destinazioni.end(); iter++){
		   for(list<Viaggio>::iterator iter2=viaggi.begin(); iter2!=viaggi.end(); iter2++){
			   if((*iter)==(*iter2).getDestinazione()){
				   occ++;
			   }
		   }
		   if(occ==occmax){
			   if((*iter)<(*prox)){
				   prox=iter;
			   }
		   }
		   if(occ>occmax){
			   occmax=occ;
			   prox=iter;
		   }
		   occ=0;
	   }
	   risultato.push_back(*prox);
	   destinazioni.remove(*prox);
	   occmax=0;
   }

   int cont=1;
   int giusto=risultato.size()-1;
   string finale;


   for(list<string>::iterator iter=risultato.begin(); iter!=risultato.end(); iter++){
	   if(cont==giusto){
		   finale=(*iter);
	   }
	   cont++;
   }

   return finale;



}


























