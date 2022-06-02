#include "Factorial.h"

//Factorial::Factorial() {
//	
//}

Factorial::~Factorial() {
	
}
void Factorial::setOperador1(int _operador){
	setOperador(_operador);
}

int Factorial::getOperador1(){
	return getOperador();
}

int Factorial::devolverFac(){
	int fact=operador;
	for(int i=operador-1;i>0;i--){
		fact= fact*i;
	}
	return fact;
}
