#include <iostream>
using namespace std;

int main()
{
	int corr;
	cin>>corr;
	bool condizione = true;
	bool pot2 ;
	int n=1;
	while(corr!=0)
	{
		pot2=false;
		while(n<=corr)
		{
			if(corr==n)
				pot2=true;
			n*=2;
		}
		n=1;
		if(!pot2)
			condizione=false;
		cin>>corr;
	}
	if(condizione)
		cout<<"SI";
	else
		cout<<"NO";

	return 0;
}		