#include <iostream>
using namespace std;

int main() {

	bool condizione=false;
	int n;
	cin>>n;
	int corr;
	int cont=0;
	cin>>corr;
	while(corr!=-1)
	{
		if(corr<=n)
			cont++;
		else
			cont=0;
		if(cont>=n)
			condizione=true;
		cin>>corr;
	}
	if(condizione)
		cout<<"OK";
	else
		cout<<"NO";

	return 0;
}