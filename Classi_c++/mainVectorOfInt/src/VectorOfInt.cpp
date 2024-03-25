/*
 * VectorOfInt.cpp
 *
 *  Created on: 10 ott 2017
 *      Author: Marco
 */

#include "VectorOfInt.h"

VectorOfInt::VectorOfInt( unsigned int i ) {
	capacity = 10 ;
	size = 0 ;
	vec = new int[capacity];
}

VectorOfInt::VectorOfInt( const VectorOfInt& v){
	capacity = v.capacity;
	size = v.size ;
	vec = new int[capacity];
	for(unsigned int i=0 ; i<size ; i++){
		vec[i]=v.vec[i];
	}
}

VectorOfInt::~VectorOfInt() {
	delete[] vec ;
}

unsigned int VectorOfInt::getCapacity() const {
	return capacity ;
}

unsigned int VectorOfInt::getSize() const {
	return size ;
}

void VectorOfInt::push_back(int a) {
	if (size<capacity){
		vec[size]=a;
		size++;
	}
	else {
		int* temp = new int[capacity*2];
		for (unsigned int i=0 ; i<size ; i++){
			temp[i]=vec[i];
		}
		temp[size]=a;
		size++;
		capacity = capacity*2 ;
		delete[] vec;
		vec=temp;
	}
}

void VectorOfInt::pop_back() {
	if (size>0){
		vec[size]=0;
		size--;
	}
}

void VectorOfInt::insert(unsigned int j , int a){     //assodiamo che i appartiene [0,size]
	if (size<capacity){
		for (unsigned int i=size ; i>j ; i--) {
			vec[i]=vec[i-1];
		}
		vec[j]=a;
		size++;
	}
	else {
		int* temp = new int[capacity*2];
		for (unsigned int i=0 ; i<size ; i++){
			temp[i]=vec[i];
		}
		vec=temp;
		capacity=capacity*2;
		delete[] temp;
		for (unsigned int i=size ; i>j ; i--) {
			vec[i]=vec[i-1];
		}
		vec[j]=a;
		size++;
	}
}

void VectorOfInt::stampa() {
	for (unsigned int i=0 ; i<size ; i++){
		cout<<vec[i]<<" " ;
	}
	cout<<endl ;
}

VectorOfInt& VectorOfInt:: operator= (const VectorOfInt& a) {

	capacity = a.capacity ;
	size = a.size ;
	int* temp = new int[capacity];
	for( unsigned int i=0 ; i<size ; i++){
		temp[i]=a.vec[i];
	}
	delete[] vec ;
	vec = temp ;
	return *this ;
}

bool VectorOfInt::operator==( const VectorOfInt& a) const {
	bool uguali = true ;
	if (capacity!=a.capacity || size!= a.size)
		return false ;
	for (unsigned int i=0 ; i<size ; i++){
		if (vec[i]!=a.vec[i])
			uguali = false ;
	}
	return uguali ;
}

bool VectorOfInt::operator!= (const VectorOfInt& a) const {
	return !(*this==a) ;
}

int VectorOfInt::operator[] (unsigned int i) const {
	return vec[i];
}










