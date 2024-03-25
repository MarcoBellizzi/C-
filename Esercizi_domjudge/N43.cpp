#include <iostream>
using namespace std;

int main()
{
	char corr,prec;
	int contp=0;
	bool condizione1=true;
	bool condizione2=true;
	cin>>corr;
	prec=corr;
	while(corr!='.')
	{
		if(corr=='(')
			contp++;
		if(corr==')')
		{
			if(prec=='(')
				condizione2=false;
			contp--;
			if(contp<0)
				condizione1=false;
		}
		prec=corr;
		cin>>corr;
	}
	if(contp!=0)
		condizione1=false;
	if(condizione1)
		cout << " ok.. l'espressione e' ben parentesizzata... " << endl;
	else
		cout << " attento! parentesi non bilanciate! " << endl; 
	if(condizione2)
		cout << " ok.. l'espressione non contiene coppie di parentesi superflue " << endl;
	else
		cout << " attento! esistono coppie di parentesi superflue! " << endl;

	return 0;
}




