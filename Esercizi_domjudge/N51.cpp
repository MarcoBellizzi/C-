#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<char> v1,v2;
	char corr;
	cin>>corr;
	while(corr!='.'){
		v1.push_back(corr);
		cin>>corr;
	}
	cin>>corr;
	while(corr!='.'){
		v2.push_back(corr);
		cin>>corr;
	}
	bool disgiunte=true;
	bool primo=true;;
	char c;
	for(unsigned i=0; i<v1.size(); i++){
		for(unsigned j=0; j<v2.size(); j++){
			if(v1[i]==v2[j]){
				disgiunte=false;
				if(primo){
					c=v1[i];
					primo=false;
				}
			}
		}
	}
	if(disgiunte)
		cout<<"DISGIUNTE";
	else
		cout<<c;



	return 0;
}
