#include <iostream>
using namespace std;

int main() {
	int a,b;
	cin>>a>>b;
	int iinv,i2;
	for(int i=a+1; i<b; i++){
		iinv=0;
		i2=i;
		while(i2>0){
			iinv=iinv*10 + i2%10;
			i2=i2/10;
		}
		if(iinv>a && iinv<b)
			cout<<i;
	}
	return 0;
}