#include <iostream>
using namespace std;

int main() {

	int anno ;
	cin >> anno ;
	if (anno%4==0){
		if (anno%100==0 && anno%400!=0){
			cout << "NON BISESTILE";
		}
		else {
			cout << "BISESTILE";
		}
	}
	else {
		cout << "NON BISESTILE" ;
	}
	return 0;
}
