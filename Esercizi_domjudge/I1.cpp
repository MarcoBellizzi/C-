#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	bool meta=true;
	int k=1;
	int somma=0;
	for(int i=0; i<(n*2)-1; i++)
	{
		somma+=k;
		if(i>=n-1)
			meta=false;
		if(meta)
			k+=2;
		else
			k-=2;
	}
	cout<<somma;

	return 0;
}