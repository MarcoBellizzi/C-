#include <iostream>
using namespace std;

int main() {

	int occ[26];
	for(int i=0; i<26; i++)
		occ[i]=0;
	char corr;
	cin>>corr;
	if(corr=='*')
		cout<<"SI";
	else
	{
		while(corr!='*')
		{
			if(corr>='a' && corr<='z')
			{
				int c = corr-97;
				occ[c]++;
			}
			if(corr>='A' && corr<='Z')
			{
				int c = corr-65;
				occ[c]++;
			}
			cin>>corr;
		}
		int prec=0;
		bool condizione=true;
		for(int i=0; i<26; i++)
		{
			if(occ[i]!=0)
			{
				if(occ[i]<prec)
				{
					condizione=false;
				}
				prec=occ[i];
			}
		}
		if(condizione)
			cout<<"SI";
		else
			cout<<"NO";
	}
	return 0;
}