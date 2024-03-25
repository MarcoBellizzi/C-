#include <iostream>
using namespace std;

int main() {

	int n;
	int corr, cont=0;
	bool condizione=false;
	cin>>n;
	if(n==0)
		condizione=true;
	cin>>corr;

	while(corr!=-1)
	{
		if(corr==0)
			cont++;
		else
			cont=0;
		if(cont==n)
			condizione=true;
		cin>>corr;
	}

	if(condizione)
		cout<<"OK";
	else
		cout<<"NO";

	return 0;
}