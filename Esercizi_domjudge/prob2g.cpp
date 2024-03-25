#include <iostream>
using namespace std;

int main()
{
	int corr;
	cin>>corr;
	int p=0;
	int d=0;
	while(corr!=0)
	{
		if(corr%2==0)
			p++;
		else
			d++;
		cin>>corr;
	}
	int k=2;
	bool coprimi=true;
	while(k<=p)
	{
		if(p%k==0)
			if(d%k==0)
				coprimi=false;
		k++;
	}
	if(coprimi)
		cout<<"SI";
	else
		cout<<"NO";

	return 0;
}