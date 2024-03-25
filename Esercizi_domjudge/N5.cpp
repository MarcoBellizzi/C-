#include <iostream>
using namespace std;

int main() {

	int primo , secondo , terzo ;
	cin >> primo >> secondo >> terzo ;
	bool triangolo = false ;
	if (primo<(secondo+terzo)&&secondo<(primo+terzo)&&terzo<(primo+secondo)){
		triangolo = true ;
	}
	if (triangolo){
		if (primo==secondo&&primo==terzo){
			cout << "TRIANGOLO EQUILATERO";
		}
		else {
			if (primo==secondo||primo==terzo||secondo==terzo){
				cout << "TRIANGOLO ISOSCELE";
			}
			else {
				cout << "TRIANGOLO SCALENO";
			}
		}
	}
	else
		cout << "NO";

	return 0;
}
