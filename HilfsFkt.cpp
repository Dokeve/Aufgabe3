#include "HilfsFkt.h"
#include<iostream>

rectmat operator*(const double scal, const rectmat mat1){
	return rectmat();
}

std::ostream& operator<<(std::ostream& os, const rectmat& mat1){
	return os;
}

std::istream& operator>>(std::istream& in, rectmat& mat1){
	return in;
}


