#pragma once
#include "constants.h"
#include "rectmat.h"

class sqmat : public rectmat {
	double tracevalue = 0;
public:
	sqmat();
	~sqmat();
	sqmat(int);
	sqmat(int,double);
	sqmat(int, double[]);
	sqmat& operator=(const rectmat& mat1);
	void trace();
};