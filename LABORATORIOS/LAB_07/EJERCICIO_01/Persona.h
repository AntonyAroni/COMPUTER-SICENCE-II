#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>

class Persona {
public:
	Persona(){};
	Persona(int,std::string);
	~Persona();
	void asignar_edad(int);
	void asignar_nombre(std::string);
	void mostrar();
protected:
	int edad;
	std::string nombre;
};

#endif

