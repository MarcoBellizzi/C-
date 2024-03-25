#include <iostream>
using namespace std;

int main() {
	int cont=0;
	bool condizione = true;
	char corr , prec ;
	cin>>prec>>corr;
	if (prec=='o')
		if(corr=='k')
			condizione=false;
	while(condizione){
		prec=corr;
		cin>>corr;
		cont++;
		if (prec=='o')
			if(corr=='k')
				condizione=false;
	}
	cout<<cont;
	return 0;
}