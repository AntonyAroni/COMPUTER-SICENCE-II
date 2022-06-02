#include "Objeto.h"
#include "Material.h"
#include <iostream>

Objeto::Objeto(std::string _color, std::string _material, std::string _objeto)
:Color(_color),Material(_material) {
	objeto = _objeto;
}

Objeto::~Objeto() {
	
}
void Objeto::mostrar(){
	std::cout<<objeto<<" de color "<<color<<" y material de "<<material;
}

