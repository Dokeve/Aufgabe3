#include "sqmat.h"
#include <iostream>
using namespace std;

sqmat::sqmat():rectmat(N,N) {
	cout << "Der Standardkonstruktor von sqmat wurde aufgerufen." << endl;

};
sqmat::~sqmat() {
	cout << "Der Dekonstructor von sqmat wurde aufgerufen." << endl;
};
sqmat::sqmat(int row, double d):rectmat(row,row,d) {
	
	cout << "Der erste überladene Konstruktor von sqmat wurde aufgerufen." << endl;
}
sqmat::sqmat(int row, double values[]) :rectmat(row,row,values){
	cout<< "Der überladene Feldkonstruktor von sqmat wurde aufgerufen." << endl;
}
sqmat& sqmat::operator=(const rectmat& mat1)
{
	for (int i = 0; i < this->getRow(); i++) {
		for (int j = 0; j < this->getRow(); j++) {
			this->set(i, j, mat1.get(i,j));
		}
	}
	return *this;
}
;
sqmat::sqmat(int row):rectmat(row,row) {
	cout << "Der zweite überladene Konstruktor von sqmat wurde aufgerufen." << endl;
};
void sqmat::trace() {
	for (int i = 0; i < this->getRow(); i++) {
		tracevalue += get(i, i);
	}
	cout << "Der Wert der Spur beträgt:" << tracevalue << endl;
};
