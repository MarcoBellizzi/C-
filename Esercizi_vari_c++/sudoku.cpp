#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool sudoku(int**);
bool riga(int,int,int**);
bool colonna(int,int,int**);
bool settore(int,int,int**);
void giusti(int**);

int main()
{
	int** m = new int*[9];
	for(int i=0; i<9; i++)
		m[i] = new int[9];

	int cont=-1;
	for(int i=0; i<9; i++)
	{
		if(i%3==0)
			cont++;
		for(int j=0; j<9; j++)
			m[i][j]=(cont++ % 9)+1;
		cont+=3;
	}

	for(int i=0; i<9; i++)
	{
		for(int j=0; j<9; j++)
			cout<<m[i][j]<<" ";
		cout<<endl;
	}

	if(sudoku(m))
		cout<<"OK"<<endl;
	else
		cout<<"NO"<<endl;
	giusti(m);
	
	cout<<endl<<endl<<endl;

	srand(time(0));
	
	int** m2 = new int*[9];
	for(int i=0; i<9; i++)
		m2[i] = new int[9];

	for(int i=0; i<9; i++)
		for(int j=0; j<9; j++)
			m2[i][j]=(rand()%9)+1;

	for(int i=0; i<9; i++)
	{
		for(int j=0; j<9; j++)
			cout<<m2[i][j]<<" ";
		cout<<endl;
	}

	if(sudoku(m2))
		cout<<"OK"<<endl;
	else
		cout<<"NO"<<endl;
	giusti(m2);

	return 0;
}

bool sudoku(int** m)
{
	for(int i=0; i<9; i++)
		for(int j=0; j<9; j++)
			if(!riga(i,j,m) || !colonna(i,j,m) || !settore(i,j,m))
				return false;
	return true;
}

void giusti(int** m)
{
	for(int i=0; i<9; i++)
	{
		for(int j=0; j<9; j++)
		{
			if(riga(i,j,m) && colonna(i,j,m) && settore(i,j,m))
				cout<<"x ";
			else
				cout<<"  ";
		}
		cout<<endl;
	}
}

bool riga(int I, int J, int** m)
{
	for(int j=0; j<9; j++)
		if(j!=J && m[I][j]==m[I][J])
			return false;
	
	return true;
}

bool colonna(int I, int J, int** m)
{
	for(int i=0; i<9; i++)
		if(i!=I && m[i][J]==m[I][J])
			return false;

	return true;
}

bool settore(int I, int J, int** m)
{
	int k1=0;
	if(I>2)
		k1=3;
	if(I>5)
		k1=6;
	int k2=0;
	if(J>2)
		k2=3;
	if(J>5)
		k2=6;
	for(int i=0; i<3; i++)
		for(int j=0; j<3; j++)
			if( !((i+k1==I) && (j+k2==J)) && (m[i+k1][j+k2]==m[I][J]))
				return false;

	return true;
}





















