#include<iostream>
#include "Alumno.h"
using namespace std;

int main (int argc, char *argv[]) {
	Alumno obj2(50,"Juancito");
	obj2.asignar_edad(20);
	obj2.asignar_nombre("pedro");
	obj2.mostrar_A();
	return 0;
}

