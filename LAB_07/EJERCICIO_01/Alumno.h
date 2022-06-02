#ifndef ALUMNO_H
#define ALUMNO_H
#include "Persona.h"
class Alumno : public Persona {
public:
	Alumno();
	Alumno(int, std::string);
	~Alumno();
	void asignar_edad(int);
	void asignar_nombre(std::string);
	void mostrar_A();
private:
};

#endif

