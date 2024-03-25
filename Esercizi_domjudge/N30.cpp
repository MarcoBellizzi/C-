#include <iostream>
using namespace std;

int main() {
	bool condizione=false;
	char prec,corr;
	cin>>prec;
	if(prec=='*')
		cout<<"NO";
	else
	{
		cin>>corr;
		while(corr!='*')
		{
			if(corr==prec)
			{
				if(corr>='A' && corr<='Z')
					condizione=true;
				if(corr>='a' && corr<='z')
					condizione=true;
			}
			prec=corr;
			cin>>corr;
		}
		if(condizione)
			cout<<"SI";
		else
			cout<<"NO";

	}
	return 0;
}