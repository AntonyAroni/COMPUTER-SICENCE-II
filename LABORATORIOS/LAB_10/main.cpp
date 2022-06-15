#include<iostream>
#include "list.h"
using namespace std;

int main (int argc, char *argv[]) {
	List prueba;
	prueba.agregarNode(1);
	prueba.agregarNode(5);
	prueba.agregarNode(15);
	prueba.agregarNode(7);
	prueba.mostrar();
	
	prueba.eliminarNode(15);
	prueba.mostrar();
	
	return 0;
}

