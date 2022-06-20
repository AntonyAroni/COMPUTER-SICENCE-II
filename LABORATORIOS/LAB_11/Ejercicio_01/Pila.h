#ifndef PILA_H
#define PILA_H
#include <iostream>
#include "Node.h"
#include <string>

class Pila {
public:
	Pila();
	~Pila();
	void agregar(std::string d);
	std::string mostrar();
	std::string eliminar();
	bool vacio();
private:
	Node *top;
};

#endif
