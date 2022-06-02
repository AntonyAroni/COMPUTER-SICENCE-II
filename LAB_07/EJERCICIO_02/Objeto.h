#ifndef OBJETO_H
#define OBJETO_H
#include "Material.h"
#include "Color.h"

class Objeto : public Color, public Material {
public:
	Objeto(std::string, std::string, std::string);
	~Objeto();
	void mostrar();
private:
	std::string objeto;
};

#endif

