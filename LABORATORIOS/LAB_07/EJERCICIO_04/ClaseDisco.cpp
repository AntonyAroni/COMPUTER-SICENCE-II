#include "ClaseDisco.h"

ClaseDisco::ClaseDisco(std::string _nombre, std::string _tipo, std::string _idioma, int _cantidad)
:ClaseMulti(_nombre, _tipo){
	idioma = _idioma;
	cantidad = _cantidad;
}

ClaseDisco::~ClaseDisco() {

}

void ClaseDisco::mostrar_disco(){
//	std::cout<<"nombre: "<<nombre<<std::endl;
//	std::cout<<"tipo: "<<tipo<<std::endl;
	mostrar_multi();
	std::cout<<"idioma: "<<idioma<<std::endl;
	std::cout<<"tipo: "<<tipo<<std::endl;
}
