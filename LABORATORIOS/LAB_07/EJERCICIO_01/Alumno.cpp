#include "Alumno.h"

Alumno::Alumno(){}
Alumno::~Alumno() {
	
}
Alumno::Alumno(int _edad, std::string _nombre): Persona(_edad, _nombre){
	
}

void Alumno::asignar_edad(int _edad){
	edad = _edad;
}
	
void Alumno::asignar_nombre(std::string _nombre){
	nombre = _nombre;
}
void Alumno::mostrar_A(){
	std::cout<<"edad(Alumno): "<<edad<<std::endl;
	std::cout<<"nombre(Alumno)"<<nombre<<std::endl;
}
		
