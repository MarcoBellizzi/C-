#include <iostream>
using namespace std;

int main() {

	char x,y;
	cin>>x>>y;
	if(x>='a' && x<='z' && y>=x && y<='z')
	{
		char X=x-32;
		char Y=y-32;
		for(char i=X; i<=Y; i++)
			cout<<i;
	}
	
	return 0;	
}

