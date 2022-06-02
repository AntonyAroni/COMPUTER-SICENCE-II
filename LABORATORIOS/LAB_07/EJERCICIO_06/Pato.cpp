#include "Pato.h"

Pato::Pato(std::string _nombre, int _edad, std::string _color, std::string _alimentacion)
: Ave(_nombre, _edad){
	color = _color;
	alimentacion = alimentacion;
}

Pato::~Pato() {
	
}

void Pato::mostrar_Pat(){
	mostrar_A();
	std::cout<<"Color: "<<color<<std::endl;
	std::cout<<"Alimentacion: "<<alimentacion<<std::endl;
}
