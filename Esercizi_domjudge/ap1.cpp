#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> ostacoli;
	int corr;
	cin>>corr;
	while(corr!=0)
	{
		ostacoli.push_back(corr);
		cin>>corr;
	}
	if(ostacoli.size()==0)
		cout<<1;
	else
	{
		int k=0;
		bool condizione=false;
		while(!condizione)
		{
			k++;
			condizione=true;
			for(int j=0; j<ostacoli.size(); j++)
				if(ostacoli[j]%k==0)
					condizione=false;
		}
		cout<<k;
	}

	return 0;
}