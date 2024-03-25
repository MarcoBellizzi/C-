#include <iostream>
using namespace std;

int main()
{
	char array[100];
	for(int i=0; i<100; i++)
		cin>>array[i];
	bool trovatavocale = false ;
	bool condizione = true ;
	char v;
	for(int i=0; i<100; i++)
	{
		if (trovatavocale)
		{
			if(array[i]=='a' || array[i]=='e' || array[i]=='i' || array[i]=='o' || array[i]=='u')
			{
				if(array[i]!=v)
				{
					condizione=false;
					break;
				}
			}
		}
		else
		{
			if(array[i]=='a' || array[i]=='e' || array[i]=='i' || array[i]=='o' || array[i]=='u')
			{
				v = array[i];
				trovatavocale=true;
			}
		}
	}
	if(condizione)
		cout<<"OK";
	else
		cout<<"ERRORE";

	return 0;
}