#pragma once
#include "constants.h"

class rectmat
{
public:
	rectmat();
	~rectmat();
	rectmat(int, int);
	rectmat(int,int,double);
	rectmat(int, int, double[]);
	/**
	* Gibt Feldwert am Index i,j zur�ck
	* @param int row
	* @param int col
	* 
	*/
	double get(int, int);
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

