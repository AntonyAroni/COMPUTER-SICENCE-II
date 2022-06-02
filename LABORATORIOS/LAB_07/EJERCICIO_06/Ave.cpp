#include "Ave.h"
#include<iostream>

Ave::Ave(std::string _nombre, int _edad) {
	nombre=_nombre;
	edad = _edad;
}

Ave::~Ave() {
	
}

void Ave::mostrar_A(){
	std::cout<<"Nombre: "<<nombre<<std::endl;
	std::cout<<"Edad: "<<edad<<std::endl;
}
