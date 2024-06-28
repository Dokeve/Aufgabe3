#pragma once
#include "rectmat.h"
#include <iostream>
using namespace std;
rectmat operator*(const double scal, const rectmat mat1);
std::ostream& operator<<(std::ostream& os, const rectmat& mat1);
std::istream& operator>>(std::istream& in, rectmat& mat1);
