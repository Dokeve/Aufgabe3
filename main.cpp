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
#include "HilfsFkt.h"
using namespace std;



int main()  {
	/*rectmat matA(3, 4, 5);
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
	cout << matA;
	matC = 7*matB;
	cout <<matC;
	rectmat matD(3, 3);
	cin >> matD;
	cout << matD;
	cout << matD.transp();*/
	rectmat A(3, 4, 7);
	rectmat B(3, 4);
	cin >> B;
	rectmat C(3, 4);
	C = B - 3 * A;
	cout << A << endl;
	cout << B << endl;
	cout << C << endl;
	//cout << "C Transponiert" << C.transp() << endl;
	rectmat D(3, 4);
	D = C.transp();//<- hier schmeißt er immer einen Löschfehler, wieso?
	cout << D << endl;
	return 0;
}

