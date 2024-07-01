#include "HilfsFkt.h"
#include<iostream>
using namespace std;
rectmat operator*(const double scal, const rectmat mat1){
	return rectmat();
}

ostream& operator<<(ostream& os, const rectmat& mat1){

	for (int i = 0; i < mat1.getRow(); i++) {
		for (int j = 0; j < mat1.getCol(); j++) {
			os << mat1.get(i,j)<< "\t";
		}
		os << "\n";
	}
	os << endl;
	return os;
}

std::istream& operator>>(std::istream& in, rectmat& mat1){
	double s = 0;
	cout << "Matrixwerte Zeilenweise eingeben" << endl;
	for (int i = 0; i < mat1.getRow(); i++) {
		for (int j = 0; j < mat1.getCol(); j++) {
			cout << "Matrixwerte Elementweise eingeben:";
			in >> s;
			mat1.set(i, j, s);
		}
	}
	cout << endl;
	return in;
}


