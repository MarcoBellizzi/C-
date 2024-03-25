#include <iostream>
using namespace std;

int main() {
	char c;
	bool condizione = false ;
	cin>>c;
	while(c!='*'){
		if( c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ){
			condizione=true;
		}
		cin>>c;
	}
	if(condizione)
		cout<<"ALMENO 1 VOCALE";
	else
		cout<<"NESSUNA VOCALE";
	return 0;
}