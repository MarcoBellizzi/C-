#include <iostream>
using namespace std ;

int main()
{
	int array[10];
	for(int i=0; i<10; i++)
		cin>>array[i];
	int X;
	cin>> X;
	bool condizione=true;
	for(int i=0; i<10; i++)
		if(array[i]%X==0)
			condizione=false;
	if(condizione)
		cout<<"OK";
	else
		cout<<"NO";
	return 0;
}