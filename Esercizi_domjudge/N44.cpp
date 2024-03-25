#include <iostream>
using namespace std;

int main()
{
	char a[26];
	for(int i=0; i<26; i++)
		cin>>a[i];
	int n;
	cin>>n;
	int b[n];
	for(int i=0; i<n; i++)
	{
		cin>>b[i];
		if(b[i]<26)
			cout<<a[b[i]];
	}

	return 0;
}