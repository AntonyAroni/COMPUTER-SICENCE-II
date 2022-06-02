#ifndef GANSO_H
#define GANSO_H
#include "Ave.h"

class Ganso : public Ave{
public:
	Ganso() = default;
	Ganso(std::string, int, int, int);
	void mostrar_Gan();
	~Ganso();
private:
	int peso;
	int longitud;
};

#endif

