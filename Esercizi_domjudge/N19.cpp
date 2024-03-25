#include <iostream>
using namespace std;

int main() {
	char c;
	cin>>c;
	bool condizione=false;
	while(c!='*'){
		if(c>='0'&&c<='9'){
			condizione=true;
		}
		cin>>c;
	}
	if(condizione)
		cout<<"ALMENO UNA";
	else
		cout<<"NESSUNA";
	return 0;
}