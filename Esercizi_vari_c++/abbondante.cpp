#include <iostream>
using namespace std;

bool abbondante(int n,int corr,int somma)
{
	cout<<somma<<endl;
	if(n==corr)
		return false;
	if(n%corr==0)
		somma+=corr;
	if(n<somma)
		return true;

	return abbondante(n,corr+1,somma);
}

int main()
{
	int n;
	cin>>n;
	if(abbondante(n,1,0))
		cout<<"SI";
	else
		cout<<"NO";

	return 0;
}