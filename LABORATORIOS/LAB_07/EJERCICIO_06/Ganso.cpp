#include "Ganso.h"

Ganso::Ganso(std::string _nombre, int _edad, int _peso, int _longitud)
:Ave(_nombre, _edad){
	peso = _peso;
	longitud =_longitud;
}

Ganso::~Ganso() {
	
}

void Ganso::mostrar_Gan(){
	mostrar_A();
	std::cout<<"Peso: "<<peso<<std::endl;
	std::cout<<"Longitud: "<<longitud<<std::endl;
}


