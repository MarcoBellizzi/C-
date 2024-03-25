/*
 * Over.h
 *
 *  Created on: 08 ott 2017
 *      Author: Marco
 */

#ifndef OVER_H_
#define OVER_H_

#include <iostream>

using namespace std ;

class Over {
private:
	int q ;

public:
	Over();
	friend int operator+(int& a, Over& b);
	friend ostream& operator<<(ostream& o , Over& a);
	virtual ~Over();
};

#endif /* OVER_H_ */
