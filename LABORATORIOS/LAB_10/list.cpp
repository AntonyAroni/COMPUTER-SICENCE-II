#include <cstdlib>
#include <iostream>
#include "list.h"
using namespace std;

List::List(){
	head = NULL;
	curr = NULL;
	temp = NULL;
}

void List::agregarNode(int _dato){
	NodePtr n= new Node;
	n -> siguiente = NULL;
	n -> dato = _dato;
	if(head !=NULL){
		curr = head;
		while(curr->siguiente != NULL){
			curr = curr -> siguiente;
		}
		curr->siguiente = n;
	}
	else{
		head =n;
	}
}


void List::eliminarNode(int _dato){
	NodePtr n=NULL;
	temp=head;
	curr=head;
	while(curr!=NULL &&  curr->dato!=_dato){
		temp=curr;
		curr=curr->siguiente;
	}
	if(curr == NULL){
		cout << _dato <<"no s encuentra en la lista\n";
		delete n;
	}
	else{
		n = curr;
		curr = curr -> siguiente;
		temp->siguiente = curr;
		if(n==head){
			head = head->siguiente;
			temp =NULL; 
		}
		delete n;
		cout<<"el valor: "<<_dato<<" fue eliminado\n";
	}
}

void List::mostrar(){
	curr = head;
	while(curr != NULL){
		cout<<curr->dato<<endl;
		curr = curr->siguiente;
	}
}
