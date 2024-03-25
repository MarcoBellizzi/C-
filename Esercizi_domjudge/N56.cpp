#include <iostream>
using namespace std;


void vaiaest(int** pavimento, bool penna, int* cxt, int* cyt)
{
	cout<<"passi? "<<endl;
	int n;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		if(*cyt<19)
		{
			(*cyt)++;
			if(penna)
			{
				pavimento[*cxt][*cyt]=1;
			}
		}

	}

}

void vaiaovest(int** pavimento, bool penna, int* cxt, int* cyt)
{
	cout<<"passi? "<<endl;
	int n;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		if(*cyt>0)
		{
			(*cyt)--;
			if(penna)
			{
				pavimento[*cxt][*cyt]=1;
			}
		}

	}
}

void vaianord(int** pavimento, bool penna, int* cxt, int* cyt)
{
	cout<<"passi? "<<endl;
	int n;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		if(*cxt>0)
		{
			(*cxt)--;
			if(penna)
			{
				pavimento[*cxt][*cyt]=1;
			}
		}

	}
}

void vaiasud(int** pavimento, bool penna, int* cxt, int* cyt)
{
	cout<<"passi? "<<endl;
	int n;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		if(*cxt<19)
		{
			(*cxt)++;
			if(penna)
			{
				pavimento[*cxt][*cyt]=1;
			}
		}

	}
}

void visualizzapavimento(int** pavimento)
{
	for(int i=0; i<20; i++)
	{
		for(int j=0; j<20; j++)
		{
			if(pavimento[i][j]==1)
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<endl;
	}
}


int main() {
	int** pavimento = new int*[20];
	for(int i=0; i<20; i++)
		pavimento[i]= new int[20];

	for(int i=0; i<20; i++)
		for(int j=0; j<20; j++)
			pavimento[i][j]=0;

	int* cxt=new int();
	int* cyt=new int();

	*cxt=0;
	*cyt=0;

	bool penna = true;

	int* comandi = new int[100];
	int* comandi2 = comandi;

	cin >> *comandi ;
	int cont=1;

	while(*comandi!=9)
	{
		comandi++;
		cin>>*comandi;
		cont++;
	}

	comandi=comandi2;

	for(int i=0; i<cont; i++)
	{
		switch(comandi[i])
		{
		case(1):
			penna=false;
			break;
		case(2):
			penna=true;
			break;
		case(3):
			vaiaest(pavimento,penna,cxt,cyt);
			break;
		case(4):
			vaiaovest(pavimento,penna,cxt,cyt);
			break;
		case(5):
			vaiasud(pavimento,penna,cxt,cyt);
			break;
		case(6):
			vaianord(pavimento,penna,cxt,cyt);
			break;
		case(7):
			visualizzapavimento(pavimento);
			break;
		}
	}





	return 0;
}