/*  IO und namensbereich für std->cout bzw cin anstatt std::cout bzw std::cin
	Bibliothek cmath Mathematische Konstanten, hier M_PI für Pi
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
	rectmat matA(3, 4, 5);
	rectmat matB(3, 4);
	matB = matA * 3;
	matA.show();
	matB.show();
	rectmat matC(3, 4);
	matC	= matA+matB;
	matC.show();
	matC = matB / 5;
	matC.show();
	matA = matB - matC;
	matA.show();
	/*matA.set(1, 2, 6);
	matA.set(0, 2, 7);
	matA.set(1, 3, 4);
	matA.set(1, 0, 1);
	
	rectmat matB = matA;
	matB.set(1, 2, 9);
	matB.show();
	matA.show();*/
	/*rectmat matA;
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
	matC.show();*/
	return 0;
}

