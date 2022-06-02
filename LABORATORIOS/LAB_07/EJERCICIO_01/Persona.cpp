#include "Persona.h"
#include <iostream>
using namespace std;
Persona::Persona(int _edad, std::string _nombre) {
	edad = _edad;
	nombre = _nombre;
}

Persona::~Persona(){
	
}

void Persona::asignar_edad(int _edad){
	edad = _edad;
}

void Persona::asignar_nombre(std::string _nombre){
	nombre = _nombre;
}

void Persona::mostrar(){
	cout<<"edad(Persona): "<<edad<<endl;
	cout<<"nombre(Persona)"<<nombre<<endl;
}
		
