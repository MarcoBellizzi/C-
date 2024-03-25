#include <iostream>
using namespace std ;

int main()
{
	int alfabeto[26];
	for(int i=0; i<26; i++)
		alfabeto[i]=0;
	char corr;
	cin>>corr;
	int l;
	while(corr!='*')
	{
		if(corr>='a' && corr<='z')
		{
			l=corr-97;
			alfabeto[l]++;
		}
		cin>>corr;
	}
	int max=0;
	char lettera='z';
	for(int i=0; i<26; i++)
	{
		if(alfabeto[i]>max)
		{
			max=alfabeto[i];
			lettera='a'+i;
		}
		if(alfabeto[i]==max && ('a'+i)<=lettera)
			lettera='a'+i;
	}
	if(max==0)
		cout<<"VUOTA";
	else
		cout<<lettera<<" "<<max;

	return 0;
}