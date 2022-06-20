#include<iostream>
#include "Pila.h"
#include <cstdlib>

int main (int argc, char *argv[]) {
	Pila *a = new Pila();
	
	std::cout<<"salida inicial: "<<std::endl<<a->mostrar()<<std::endl;
	a->agregar("primero");
	a->agregar("segundo");
	a->agregar("tercero");
	a->agregar("cuarto");
	a->agregar("quinto");
	a->eliminar();
	a->eliminar();

	std::cout<<"\nsalida luego de agregar elementos: "<<std::endl<<a->mostrar()<<std::endl;
	delete a;
	return 0;
}

 
