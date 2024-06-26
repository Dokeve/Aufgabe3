/*  IO und namensbereich f�r std->cout bzw cin anstatt std::cout bzw std::cin
	Bibliothek cmath Mathematische Konstanten, hier M_PI f�r Pi
	!!!Wichtig zuesrst 'define und dann #include sonst erkennt er define nicht!!!
*/
#pragma once
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include "constants.h"
#include "sqmat.h"
#include "rectmat.h"
using namespace std;



int main()  {
	rectmat matA;
	matA.show();
	rectmat mats[4] = {
	rectmat(7,6),
	rectmat(3,5,5),
	rectmat(4,3,1)
	};
	for (int i = 0; i <= 3; i++) {
		cout << "Matrize " << i << endl;
		mats[i].show();
	}
	sqmat matB(5,4);
	for (int i = 0; i < matB.getRow(); i++) {
		for (int j = 0; j < matB.getCol(); j++) {
			matB.set(i,j,j+i*N);
		}
	}
	matB.show();
	matB.trace();
	sqmat sqmats[4] = {
	sqmat(7),
	sqmat(4,10),
	sqmat(6,3),
	};
	for (int i = 0; i < sqmats[0].getRow(); i++) {
		for (int j = 0; j < sqmats[0].getCol(); j++) {
			sqmats[0].set(i, j, j + i * N);
		}
	}
	for (int i = 0; i <= 3; i++) {
		cout << "Square Matrix " << i << endl;
		sqmats[i].show();
		sqmats[i].trace();
	}
	double val[35] = {
		1,2,3,4,5,6,7,8,9,12,76,66,334,7,9,67,99
	};
	rectmat matC(5, 7, val);
	matC.show();
	return 0;
}

