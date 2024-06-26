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
};
sqmat::sqmat(int row):rectmat(row,row) {
	cout << "Der zweite überladene Konstruktor von sqmat wurde aufgerufen." << endl;
};
void sqmat::trace() {
	for (int i = 0; i < this->getRow(); i++) {
		tracevalue += get(i, i);
	}
	cout << "Der Wert der Spur beträgt:" << tracevalue << endl;
};
