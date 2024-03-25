#include <iostream>
using namespace std;

int main() {
	char c;
	bool condizione = true ;
	cin>>c;
	while(c!='.'){
		if(c<'A'|| (c>'Z' && c<'a') || c>'z'){
			condizione=false;
		}
		cin>>c;
	}
	if(condizione)
		cout<<"SI";
	else
		cout<<"NO";
	return 0;
}