#include <iostream>
using namespace std;

int main() {
	int num , cifra ;
	cin >> num ;
	bool trovato0 = false ;
	if (num==0){
		cout << "NO" ;
	}
	else {
		while (num>0){
			cifra = num%10 ;
			if (cifra==0){
				trovato0 = true ;
			}
			num = num/10 ;
		}
		if (trovato0){
			cout << "NO" ;
		}
		else {
			cout << "SI" ;
		}
	}
	return 0;
}
