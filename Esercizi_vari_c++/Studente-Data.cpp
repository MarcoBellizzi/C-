#include <iostream>
using namespace std;

class Data
{
	private:
		int giorno;
		int mese;
		int anno;
	public:
		Data() { giorno=1; mese=1; anno=2000; };
		Data(int g,int m, int a)
		{
			giorno=g;
			mese=m;
			anno=a;
		};
		Data(const Data& d)
		{
			cout<<"uso costruttore per copia data"<<endl;
			giorno=d.giorno;
			mese=d.mese;
			anno=d.anno;
		};
		void setGiorno(int g) { giorno=g; };
		void setMese(int m) { mese=m; };
		void setAnno(int a) { anno=a; };
		const int getGiorno() const { return giorno; };
		const int getMese() const { return mese; };
		const int getAnno() const { return anno; };
		void leggi()
		{
			cout<<"inserire giorno mese e anno"<<endl;
			cin>>giorno>>mese>>anno; 
		};
		void stampa() const { cout<<giorno<<"/"<<mese<<"/"<<anno<<endl; };
		Data& operator=(const Data& d)
		{
			cout<<"uso operatore di assegnamento data"<<endl;
			giorno=d.giorno;
			mese=d.mese;
			anno=d.anno;
			return *this;
		};
		bool operator<(const Data& d)
		{
			if(anno>d.anno)
				return true;
			if(anno==d.anno)
			{
				if(mese>d.mese)
					return true;
				if(mese==d.mese)
					if(giorno>d.giorno)
						return true;
			};
			return false;
		};
};

class Studente
{
	private:
		int matricola;
		Data nascita;    //usa costruttore vuoto
		int* voti;
	public:
		Studente()
		{
			cout<<"uso costruttore vuoto studente"<<endl;
			matricola=0;
			voti=new int[25];
			for(int i=0; i<25; i++)
				voti[i]=0;
		};
		Studente(int m, const Data& n, int* v)
		{
			matricola=m;
			nascita=n;
			voti=new int[25];
			for(int i=0; i<25; i++)
				voti[i]=v[i];
		};
		Studente(const Studente& s)
		{
			cout<<"uso costruttore per copia studente"<<endl;
			matricola=s.matricola;
			nascita=s.nascita;   // usa operatore di assegnameto data
			voti=new int[25];
			for(int i=0; i<25; i++)
				voti[i]=s.voti[i];
		};
		void setMatricola(int m) { matricola=m; };
		void setNascita(const Data& n) { nascita=n; };
		void setVoto(int i, int v) { voti[i]=v; };
		const int getMatricola() const { return matricola; };
		const Data getData() const { return nascita; };
		const int GetVoto(int i) { return voti[i]; };
		const Studente& operator=(const Studente& s)
		{
			matricola=s.matricola;
			nascita=s.nascita;
			for(int i=0; i<25; i++)
				voti[i]=s.voti[i];
			return *this;
		};
		void leggi()
		{
			cout<<"inserire matricola"<<endl;
			cin>>matricola;
			nascita.leggi();
			for(int i=0; i<25; i++)
			{
				cout<<"inserire un voto"<<endl;
				cin>>voti[i];
			};
		};
		void stampa()
		{
			cout<<"matricola: "<<matricola<<endl;
			cout<<"nascita ";
			nascita.stampa();
			for(int i=0; i<25; i++)
				cout<<"esame "<<i+1<<" voto "<<voti[i]<<endl;
		};
		int getMedia()
		{
			int somma=0;
			for(int i=0; i<25; i++)
				somma+=voti[i];
			return somma/25;
		};
		int getVotoMax()
		{
			int max=0;
			for(int i=0; i<25; i++)
				if(voti[i]>max)
					max=voti[i];
			return max;
		};
		int getNumEsamiAllaLaurea()
		{
			int num=0;
			for(int i=0; i<25; i++)
				if(voti[i]<18)
					num++;
			return num;
		};
		bool studentePiuGiovaneDi(const Studente& s)
		{
			if(nascita<s.nascita)
				return true;
			return false;
		};
};

main()
{
	int n=3;
	Studente* lista = new Studente[n];
	for(int i=0; i<n; i++)
		lista[i].leggi();
	for(int i=0; i<n; i++)
		lista[i].stampa();
	int media=0;
	for(int i=0; i<n; i++)
		media+=lista[i].getMedia();
	media/=n;
	cout<<media<<endl;
	int migliore=0;
	int mediamax=0;
	for(int i=0; i<n; i++)
		if(lista[i].getMedia()>mediamax)
		{
			mediamax=lista[i].getMedia();
			migliore=lista[i].getMatricola();
		};
	cout<<migliore<<endl;
	
	
	
	return 0;
}











	




