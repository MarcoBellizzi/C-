#include <iostream>
using namespace std;
int main()
	{
	int n;
	cin>>n;
	if(n<0 || n>30)
		cout<<"VOTO NON VALIDO";
	else if(n>=18)
			cout<<"ESAME SUPERATO";
		else
			cout<<"BOCCIATO";
	return 0;
	}