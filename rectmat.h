#pragma once
#include "constants.h"
#include <iostream>
using namespace std;

class rectmat
{
public:
	rectmat();
	~rectmat();
	rectmat(int, int);
	rectmat(int, int, double);
	rectmat(int, int, double[]);
	/**
	Copyconstruktor
	*/
	rectmat(const rectmat& mat1);
	/**
	* Gibt Feldwert am Index i,j zur�ck
	* @param int row
	* @param int col
	*
	*/
	double get(int, int);
	double get(int, int) const;
	/**
	* Setzt Feldwert am Index i,j
	* @param int row
	* @param int col
	* @param double entry
	*/
	void set(int, int, double);
	/**
	 Gibt Matrix auf der Konsole aus
	*/
	void show();
	/**
	 Gibt Zeilenwert des aktuellen Objekts auf der Konsole zur�ck
	*/
	int getRow() const;
	/**
	 Gibt Spaltenwert des aktuellen Objekts auf der Konsole zur�ck
	*/
	int getCol() const;
	rectmat operator*(const double scal);
	rectmat operator/(const double scal);
	rectmat operator+(const rectmat mat1);
	rectmat operator-(const rectmat mat1);
	rectmat &operator=(const rectmat& mat1);
	/*
	Operator << �berladung
	**/
	friend ostream& operator<<(ostream& os, const rectmat& mat1);
	/*
	Operator >> �berladung
	**/
	friend istream& operator>>(istream& in, rectmat& mat1);
private:
	/**
	* Gibt Gibt index in abh�ngigkeit von Zeile und Spalte zur�ck
	* @param int row
	* @param int col
	*/
	int getIndex(int, int);
	const int row;
	const int col;
	int index{};
	/**
	Pointer f�r Matrix
	*/
	double* pmat;
	
	


};

