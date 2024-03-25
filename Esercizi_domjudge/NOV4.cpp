#include <iostream>
using namespace std;

int main() {

	char c;
	cin>>c;
	if(c=='*')
		cout<<"SI";
	else
	{
		bool condizione=true;
		int cprec;
		if(c!='a' && c!='e' && c!='i' && c!='o' && c!='u')
			cprec=c;
		else
			cprec='b';
		cin>>c;
		while(c!='*')
		{
			if(c!='a' && c!='e' && c!='i' && c!='o' && c!='u')
			{
				if(c<cprec)
					condizione=false;
				cprec=c;
			}
			cin>>c;
		}
		if(condizione)
			cout<<"SI";
		else
			cout<<"NO";
	}

	return 0;	
}

