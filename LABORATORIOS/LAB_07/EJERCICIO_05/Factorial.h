#ifndef FACTORIAL_H
#define FACTORIAL_H
#include<iostream>
#include "Base.h"

class Factorial : public Base {
public:
	Factorial()= default;
	~Factorial();
	void setOperador1(int);
	int getOperador1();
	int devolverFac();
private:
};

#endif

