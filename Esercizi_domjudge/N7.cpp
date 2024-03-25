#include <iostream>
using namespace std;

int main() {
	int num = 3 ;
	bool mul5 = false ;
	while (num!=5){
		if (num%5==0){
			mul5 = true ;
		}
		cin >> num ;
	}
	if (mul5) {
		cout << "ALMENO 1" ;
	}
	else {
		cout << "NESSUNO" ;
	}
	return 0;
}
