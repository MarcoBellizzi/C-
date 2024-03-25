#include <iostream>
using namespace std ;

int main(){
	int num ;
	int cont = 0 ;
	cin >> num ;
	while(num!=0){
		if (num%2==1 && num%3==0){
			cont++;
		}
		cin >> num ;
	}
	cout << cont ;
	return 0 ;
}