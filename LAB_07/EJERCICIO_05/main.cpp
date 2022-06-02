#include<iostream>
#include "Factorial.h"
using namespace std;

int main (int argc, char *argv[]) {
	Factorial obj1;
	obj1.setOperador1(8);
	std::cout<<obj1.devolverFac();
	return 0;
}

