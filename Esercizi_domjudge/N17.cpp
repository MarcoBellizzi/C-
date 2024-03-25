#include <iostream>
using namespace std;

int main() {

	int prec;
	cin>>prec;
	if(prec==0)
		cout<<"NO";
	else
	{
		int corr;
		cin>>corr;
		bool condizione=false;
		while(corr!=0)
		{
			if(corr%2==0 && prec%2==0)
				condizione=true;
			if((corr+prec)%corr==0 || (corr+prec)%prec==0)
				condizione=true;
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