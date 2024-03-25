//============================================================================
// Name        : random.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

	srand(time(0));
	int n = rand() % 10  ;
	cout << n ;

	return 0;
}
