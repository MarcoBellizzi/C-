//============================================================================
// Name        : es4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

int cifre(int n, int c) {
	if (n / 10 != 0) {
		c++;
		return cifre(n / 10, c);
	} else {
		c++;
		return c;
	}
}

bool star(int a, int b[]) {
	bool cond = false;
	for (int i = 0; i < 100; i++) {
		if (b[i] == 0)
			break;
		if (cifre(a, 0) == cifre(b[i], 0))
			cond = true;
	}
	return cond;
}

int main() {

	int a[100];
	int b[100];
	bool starmax = true;
	for (int i = 0; i < 100; i++) {
		cin >> a[i];
		if (a[i] == 0)
			break;
	}
	for (int i = 0; i < 100; i++) {
		cin >> b[i];
		if (b[i] == 0)
			break;
	}
	for (int i = 0; i < 100; i++) {
		if (a[i] == 0)
			break;
		if (star(a[i], b) == true) {
			for (int j = 0; j < 100; j++) {
				if (b[j] == 0)
					break;
				if (a[i] < b[j])
					starmax = false;
			}
		}
	}
	if (starmax)
		cout << "OK" << endl;
	else
		cout << "NO" << endl;

	return 0;
}


