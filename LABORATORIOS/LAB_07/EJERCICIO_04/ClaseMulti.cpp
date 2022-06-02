#include "ClaseMulti.h"

ClaseMulti::ClaseMulti(std::string _nombre, std::string _tipo) {
	nombre = _nombre;
	tipo = _tipo;
}

ClaseMulti::~ClaseMulti() {
	
}

void ClaseMulti::mostrar_multi(){
	std::cout<<"nombre: "<<nombre<<std::endl;
	std::cout<<"tipo: "<<tipo<<std::endl;
}

