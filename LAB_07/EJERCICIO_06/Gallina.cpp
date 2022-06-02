#include "Gallina.h"

Gallina::Gallina(std::string _nombre, int _edad, std::string _tipo, std::string _caracteristica)
: Ave(_nombre, _edad){
	tipo = _tipo;
	caracteristica = _caracteristica;
}

Gallina::~Gallina() {
	
}

void Gallina::mostrar_Ga(){
	mostrar_A();
	std::cout<<"Tipor: "<<tipo<<std::endl;
	std::cout<<"P. caracteristica: "<<caracteristica<<std::endl;
}
