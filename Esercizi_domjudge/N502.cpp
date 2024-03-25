#include <iostream>
using namespace std;

int main()
{
	int occorrenze[51];
	for(int i=0; i<51; i++)
		occorrenze[i]=0;
	int corr;
	cin>>corr;
	while(corr<=50)
	{
		occorrenze[corr]++;
		cin>>corr;
	}
	bool diverse=true;
	int cont=0;
	for(int i=0; i<51; i++)
	{
		if(occorrenze[i]!=0)
		{
			cont++;
			for(int j=i+1; j<51; j++)
			{
				if(occorrenze[i]==occorrenze[j])
				{
					occorrenze[j]=0;
					diverse=false;
				}
			}
		}
	}
	if(diverse)
		cout<<"SI";
	else
		cout<<"NO "<<cont;

	return 0;
}
