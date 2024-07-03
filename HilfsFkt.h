#pragma once
#include "rectmat.h"
#include <iostream>
using namespace std;
/**
* @param double scal
*/
rectmat operator*(const double scal, const rectmat mat1);
ostream& operator<<(ostream& os, const rectmat& mat1);
istream& operator>>(istream& in, rectmat& mat1);
