#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> A;
	vector<int> B;

	int corr;
	cin>>corr;
	while(corr!=0)
	{
		A.push_back(corr);
		cin>>corr;
	}
	cin>>corr;
	while(corr!=0)
	{
		B.push_back(corr);
		cin>>corr;
	}
	int dimA=A.size();
	int dimB=B.size();

	if(dimA!=dimB)
		cout<<" le due sequenze hanno dimensioni diverse e percio'  non possono essere a coppie alterne ";
	else
	{
		if(dimA%2==1)
			cout<<" la dimensione delle sequenze DEVE essere pari ";
		else
		{
			bool alterne=true;
			for(int i=0; i<dimA; i++)
			{
				if(i%2==0)
				{
					if(A[i]!=B[i+1])
						alterne=false;
				}
				else
				{
					if(A[i]!=B[i-1])
						alterne=false;
				}
			}
			if(alterne)
				cout<<" le due sequenze sono a coppie alterne ";
			else
				cout<<" le due sequenze NON sono a coppie alterne ";
		}
	}


	return 0;
}
