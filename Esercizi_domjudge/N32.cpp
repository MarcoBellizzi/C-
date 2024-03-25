#include <iostream>
using namespace std;

int main() {

	bool condizione=false, crescenza=true , decrescenza=false ;
	int prec;
	cin>>prec;
	if(prec==0)
		cout<<"NO";
	else
	{
		int corr;
		cin>>corr;
		if(corr<=prec)
			crescenza=false;
		while(corr!=0)
		{
			if(decrescenza)
			{
				if(corr>=prec)
				{
					condizione=false;
					decrescenza=false;
				}
				
			}
			if(crescenza)
			{
				if(corr==prec)
				{
					crescenza=false;
					decrescenza=false;
				}
				if(corr<prec)
				{
					crescenza=false;
					decrescenza=true;
					condizione=true;
				}
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