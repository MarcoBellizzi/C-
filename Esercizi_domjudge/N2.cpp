#include <iostream>
using namespace std;
int main()
	{
	int a,b;
	cin>>a>>b;
	if(b!=0)
		{
		cout<<"Somma: "<<a+b<<endl;
		cout<<"Differenza: "<<a-b<<endl;
		cout<<"Moltiplicazione: "<<a*b<<endl;
		cout<<"Quoziente: "<<a/b<<endl;
		cout<<"Resto: "<<a%b;
		}
	return 0;
	}