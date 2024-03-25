#include <iostream>
using namespace std;
int main()
{
	char prec, c;
	int cont=1;
	cin>>prec;
	if(prec=='.')
		cout<<0;
	else
	{
		cin>>c;
		while(c!='.')
		{
			if(prec=='a' || prec=='e' || prec=='i' || prec=='o' || prec=='u')
			{
				if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
					cont++;
			}
			else 
				if(c!='a' && c!='e' && c!='i' && c!='o' && c!='u')
					cont++;
			prec=c;
			cin>>c;
		}
		cout<<cont;
	}
	return 0;
}