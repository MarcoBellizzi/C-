
#include <iostream>
using namespace std;

int main() {
	int n,numero=0;
	bool cifre=true;
	bool vuoto=true;
	while(n!=-1){
		cin>>n;
		if(n!=-1){
			vuoto=false;
		}
		if(n/10!=0){
			cifre=false;
		}
		numero=numero*10+n;
	}
	if(vuoto){
		cout<<"VUOTO";
	}
	else{
		if(!cifre){
			cout<<"ERRORE";
		}
		else{
			numero=(numero+1)/10;
			cout<<numero<<endl;
			if(numero%3==0){
				cout<<"SI";
			}
			else{
				cout<<"NO";
			}
		}
	}

	return 0;
}