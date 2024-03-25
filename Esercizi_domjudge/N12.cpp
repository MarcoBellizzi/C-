
#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	bool primo=true;
	for(int i=2; i<n; i++){
		if(n%i==0){
			primo=false;
		}
	}
	if(primo){
		cout<<"si";
	}
	else{
		cout<<"no";
	}



	return 0;
}
