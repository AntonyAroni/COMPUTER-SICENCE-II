#ifndef GALLINA_H
#define GALLINA_H
#include "Ave.h"

class Gallina: public Ave {
public:
	Gallina() = default;
	Gallina(std::string,int, std::string, std::string);
	~Gallina();
	void mostrar_Ga();
private:
	std::string tipo;
	std::string caracteristica;
};

#endif

