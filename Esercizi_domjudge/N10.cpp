#include <iostream>
using namespace std;

int main() {

	int num , num2 , capovolto ;
	cin >> num ;
	num2 = num ;

	if (num==0){
		cout << 0 ;
	}
	else {
		capovolto = num%10 ;
		num = num/10 ;
		while (num>0){
			capovolto = capovolto*10 + num%10 ;
			num = num/10 ;
		}
		cout << num2-capovolto ;
	}
	return 0;
}
