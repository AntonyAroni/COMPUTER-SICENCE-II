#ifndef PATO_H
#define PATO_H
#include "Ave.h"

class Pato: public Ave {
public:
	Pato() = default;
	Pato(std::string, int, std::string, std::string);
	~Pato();
	void mostrar_Pat();
private:
	std::string color;
	std::string alimentacion;
};

#endif

