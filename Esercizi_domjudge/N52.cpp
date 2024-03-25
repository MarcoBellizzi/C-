#include <iostream>
#include <vector>
using namespace std;

int main() {

	char corr;
	cin>>corr;
	int cont=0;
	bool condizione=true;
	vector<int> vett;
	if(corr=='.')
	{
		vett.push_back(0);
		cin>>corr;
		if(corr=='.')
			condizione=false;
	}
	while(condizione)
	{
		if(corr!='.')
		{
			cont++;
			cin>>corr;
		}
		else
		{
			if(cont==0)
				condizione=false;
			else
			{
				vett.push_back(cont);
				cont=0;
				cin>>corr;
			}
		}
	}
	bool crescente=true;
	cout<<vett[0]<<endl;
	for(unsigned i=1; i<vett.size(); i++)
	{
		cout<<vett[i]<<endl;
		if(vett[i]<vett[i-1])
			crescente=false;
	}
	if(crescente)
		cout<<"VERO";
	else
		cout<<"FALSO";



	return 0;
}
