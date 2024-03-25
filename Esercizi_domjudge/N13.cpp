
#include <iostream>
using namespace std;

int main() {
	unsigned n,m;
	bool Nprimo=true , Mprimo=true;
	cin>>n>>m;
	if(n>3)
		for(unsigned i=2; i<n/2; i++)
			if(n%i==0)
				Nprimo=false;
	if(m>3)
		for(unsigned j=2; j<m/2; j++)
			if(m%j==0)
				Mprimo=false;
	if(Nprimo&&Mprimo)
		if(n==m+2||n==m-2)
			cout<<"gemelli";
		else
			cout<<"non gemelli";
	else
		cout<<"non entrambi primi";
	return 0;
}