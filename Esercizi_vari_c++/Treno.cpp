#include <iostream>
using namespace std;

class Treno
{
	private :
		int posti;
		string codice;
		string tipologia;
	public :
		Treno()
		{
			cout<<"sto usando il costruttore vuoto"<<endl;
			posti=0;
			codice=" ";
			tipologia="indefinito";
		};
	
		Treno(int p, string c, string t)
		{
			posti=p;
			codice=c;
			tipologia=t;
		};

		Treno(const Treno& t)
		{
			cout<<"sto usando il costruttore per copia"<<endl;
			posti=t.getPosti();
			codice=t.getCodice();
			tipologia=t.getTipologia();
		};

		int getPosti() const { return posti; };
		
		string getCodice() const { return codice; };

		string getTipologia() const { return tipologia; };

		void setPosti(int p) { posti=p; };

		void setCodice(string c) { codice=c; };

		void setTipologia(string t) { tipologia=t; };

		void operator=(const Treno& t)
		{
			cout<<"sto usando l opratore di assegnamento"<<endl;
			posti=t.getPosti();
			codice=t.getCodice();
			tipologia=t.getTipologia();
		};
			
};

class Orario
{
	private:
		int ore;
		int minuti;
	public:
		Orario() { ore=0; minuti=0; };
		Orario(int o, int m) { ore=o; minuti=m; };
		int getOre() const { return ore; };
		int getMinuti() const { return minuti; };
		bool operator<=(const Orario& o)
		{
			if(ore>o.getOre())
				return false;
			if(ore==o.getOre() && minuti>o.getMinuti())
				return false;
			return true;
		};
		bool operator>=(const Orario& o)
		{
			if(ore<o.getOre())
				return false;
			if(ore==o.getOre() && minuti<o.getMinuti())
				return false;
			return true;
		};
		void operator=(const Orario& o) 
		{
			ore=o.getOre();
			minuti=o.getMinuti();
		};
		friend ostream& operator<<(ostream& o, Orario& ora);
};

class Stazione
{
	private:
		int capacity;
		int size;
		Treno* treni;
		Orario* arrivi;
		Orario* partenze;
	public:
		Stazione()
		{
			capacity=10;
			size=0;
			treni=new Treno[10];
			arrivi=new Orario[10];
			partenze=new Orario[10];
		};
		Stazione(Treno* t, int dim)     //provare se usa il costruttore per copia o l operatore di assegnamento
		{
			capacity=dim;
			size=dim;
			treni=new Treno[dim];
			for(int i=0; i<dim; i++)
				treni[i]=t[i];
		};
		void setOrarioArrivo(string c, Orario o)
		{
			for(int i=0; i<capacity; i++)
				if(c==treni[i].getCodice())
					arrivi[i]=o;
		};
		void setOrarioPartenza(string c, Orario o)
		{
			for(int i=0; i<capacity; i++)
				if(c==treni[i].getCodice())
					partenze[i]=o;
		};
		const Orario& getOrarioArrivo(string c) const
		{
			for(int i=0; i<capacity; i++)
				if(c==treni[i].getCodice())
					return arrivi[i];
			Orario* o=new Orario();
			return *o;
		};
		const Orario& getOrarioPartenza(string c) const
		{
			for(int i=0; i<capacity; i++)
				if(c==treni[i].getCodice())
					return partenze[i];
			Orario* o = new Orario();
			return *o;
		};
		bool esisteTrenoInPartenza(string s, Orario o1, Orario o2)
		{
			for(int i=0; i<capacity; i++)
				if(s==treni[i].getTipologia())
					if(partenze[i]>=o1 && partenze[i]<=o2)
						return true;
			return false;
		};
};

ostream& operator<<(ostream& o, Orario& ora)
{
	o<<ora.getOre()<<" e "<<ora.getMinuti()<<endl;
	return o;
}

int main()
{
	Treno a(5,"001","freccia");
	cout<<a.getTipologia()<<endl;
	Orario b(10,20);
	cout<<b.getOre()<<endl;

	Treno a2(4,"002","freccia");
	Treno* p = new Treno[2];
	p[0]=a;
	p[1]=a2;

	Stazione s1(p,2);

	s1.setOrarioPartenza("001",b);

	Orario o1(9,30);
	Orario o2(11,45);
	
	if(s1.esisteTrenoInPartenza("freccia",o1,o2))
		cout<<"SI"<<endl;
	else
		cout<<"NO"<<endl;

	return 0;
}