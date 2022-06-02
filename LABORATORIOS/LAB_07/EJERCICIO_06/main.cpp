#include<iostream>
#include "Ganso.h"
#include "Pato.h"
#include "Gallina.h"
using namespace std;

int main (int argc, char *argv[]) {
	Ganso obj1("Pepe",2,5,1);
	Pato obj2("Juan",3,"amarillo","maiz, arroz");
	Gallina obj3("Manchas",4,"Galliforme","protuberancias: barbillones y cresta");
	obj1.mostrar_Gan();
	std::cout<<endl;
	obj2.mostrar_Pat();
	std::cout<<endl;
	obj3.mostrar_Ga();
	return 0;
}

