#include "rectmat.h"
#include "constants.h"
#include <iostream>
using namespace std;
/**
 Standardkonstruktor
*/
rectmat::rectmat() : col(Ncol), row(Nrow) {
	cout << "Der Standardkonstruktor von rectmat wurde aufgerufen." << endl;
	pmat = new double[Ncol*Nrow];
	for (int i = 0; i < Ncol*Nrow; i++) {
		*(pmat + i) = 0.0;
	}
};
rectmat::~rectmat() {
	cout << "Der Destruktor von rectmat wurde aufgerufen." << endl;
	delete[] pmat;
};
/**
* Überladener Konstruktor mit Größe und Füllwert
*@param row Zeilenanzahl
* @param col Spaltenanzahl
* @param d Füllwert
*/
rectmat::rectmat(int row, int col, double d) : col(col), row(row) {
	pmat = new double[col * row];
	for (int i = 0; i < col * row; i++) {
		*(pmat + i) = d;
	}
	cout << "Der erste überladene Konstruktor von rectmat wurde aufgerufen." << endl;
};
/**
* Überladener Konstruktor mit Größe und Füllwert
*@param row Zeilenanzahl
*@param col Spaltenanzahl
*@param values Füllwertarray
*/
rectmat::rectmat(int row, int col, double values[]):col(col), row(row){
	cout << "Der überladene Feldkonstruktor von rectmat wurde aufgerufen." << endl;
	pmat = new double[row * col];
	for (int i = 0; i < col * row; i++) {
		*(pmat + i) = values[i];
	}
}
rectmat::rectmat(const rectmat& mat1): row(mat1.getRow()),col(mat1.getCol()) {
	cout << "Der Copyconstruktor  von rectmat wurde aufgerufen." << endl;
	pmat = new double[row * col];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			this->set(i, j, mat1.pmat[this->getIndex(i, j)]);
		}
		
	}
};
rectmat::rectmat(int row, int col) : col(col), row(row) {
	pmat = new double[row * col];
	for (int i = 0; i < col * row; i++) {
		*(pmat + i) = 0;
	}
	cout << "Der zweite überladene Konstruktor von rectmat wurde aufgerufen." << endl;
};
double rectmat::get(int i, int j) {
	return *(pmat + this->getIndex(i, j));
};
double rectmat::get(int i, int j) const {
	return pmat[j+i*col];
};

void rectmat::show() {
	for (int i = 0; i < row * col; i++) {
		cout << *(pmat + i) << "\t";
		if (i%col ==(col-1) && i!=0)
		{
			cout << "\n";
		}
	}
	cout << endl;
	return;
};
void rectmat::set(int i, int j, double entry) {
	*(pmat + this->getIndex(i, j)) = entry;
};
int rectmat::getIndex(int irow, int jcol)  {
	index = jcol + irow * col;
	return index;
};

int rectmat::getRow() const {
	return row; 
};
int rectmat::getCol() const {
	return col; 
}
rectmat rectmat::operator*(const double scal){ 
	rectmat temp(row, col);
		temp = *this;
		for (int i = 0; i < col * row; i++) {
			temp.pmat[i]*=scal;
		}
	
	return temp;
}
rectmat rectmat::operator/(const double scal){
	rectmat temp(row, col);
	temp = *this;
	for (int i = 0; i < col * row; i++) {
		temp.pmat[i] /= scal;
	}

	return temp;
}
rectmat rectmat::operator+(const rectmat mat1){
	rectmat temp(row, col);
	temp = *this;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			temp.set(i, j, this->get(i, j) + mat1.pmat[this->getIndex(i, j)]);
		}

	}
	return temp;
}
rectmat rectmat::operator-(const rectmat mat1) {
	rectmat temp(row, col);
	temp = *this;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			temp.set(i, j, this->get(i, j) - mat1.pmat[this->getIndex(i, j)]);
		}

	}
	return temp;
}
rectmat& rectmat::operator=(const rectmat& mat1){
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			this->set(i, j, mat1.pmat[this->getIndex(i, j)]);
		}

	}
	return *this;
}
;