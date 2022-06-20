#include "Pila.h"

Pila::Pila() {
	top = NULL;
}

Pila::~Pila() {
	while(!vacio())
		eliminar();
}
 
void Pila::agregar(std ::string d){
	Node *temp= new Node;
	temp->data = d;
	temp->siguiente=top;
	top = temp;
}

std::string Pila::mostrar(){
	std::string result = "(Incio de Pila)->";
	if(vacio()){
		result = result + "NULL";
		return result;
	}else{
		Node *current = top;
		while(current !=NULL){
			result = result + current->data+ "->";
			current = current -> siguiente;
		}
		result = result + "(Fin de Pila)";
		return result;
	}
}

bool Pila::vacio(){
	return (top == NULL);
}

std::string Pila::eliminar(){
	if (!vacio()){
		std::string value = top->data;
		Node *oldtop = top;
		top = oldtop->siguiente;
		delete oldtop;
		return value;
	}else{
		std::cout<<"Pila vacia! "<<std::endl;
		exit(1);
	}
}




