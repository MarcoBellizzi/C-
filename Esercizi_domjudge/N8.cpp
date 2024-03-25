#include <iostream>
using namespace std ;

int main(){
	int x , y ;
	cin >> x >> y ;
	int somma = 0 ;
	while (x!=y+1){
		if (x%2==1){
			somma+=x;
		}
	x++;
	}
	cout << somma ;
	return 0 ;
}