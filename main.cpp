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
	rectmat A(3, 3, 7);
	rectmat B(3, 3);
	cin >> B;
	rectmat C(3, 3);
	C = B - 3 * A;
	cout << A << endl;
	cout << B << endl;
	cout << C << endl;
	rectmat D(3, 3);
	D = B.transp();
	cout << D << endl;
	rectmat E(3, 3, 4);
	sqmat F(3);
	sqmat G(3,3);
	sqmat H(3);
	F = E+A;
	H = F + G;
	cout << E << endl;
	cout << F << endl;
	cout << H << endl;
	H.trace();
	return 0;
}

