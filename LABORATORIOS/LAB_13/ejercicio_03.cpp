//
// Created by olmer on 6/22/2022.
//

#include <iostream>
#include <cstdio>
#include <string>
#include <ctime>
/*3. Implemente un programa que maneje un arreglo de estructuras que solicite el
nombre, edad y talla de 10 jugadores, debe mostrar por pantalla los que son
menores de 20 años y tienen una talla mayor a 1,70 mts de altura..
*/
using namespace std;
struct alumnos{
	string nombre;
	int edad;
	double talla;
	
};

void evaluar(alumnos [],int);

int main(int argc, char *argv[]) {
    system("cls");
	string nombre;
	int edad;
	double talla;
	
	int cantidad{10};
	
	alumnos* alumn = nullptr;
	alumn=new alumnos[cantidad];
	
	for(int i=0;i<cantidad;i++){
		cout<<"JUGADOR ["<<i+1<<"]: "<<endl;
		cout<<"Nombre: "; getline(cin>>ws,nombre);
		cout<<"Edad: ";cin>>edad;
		cout<<"Talla (metros): ";cin>>talla;cout<<endl<<endl;
		alumn[i]={nombre,edad,talla};
	}
	evaluar(alumn,cantidad);
	
	delete[] alumn;
	return 0;
	
}

void evaluar(alumnos alumn[],int c){
	system("cls");
	for(int i=0; i<c; i++){
		if(alumn[i].edad<20 && alumn[i].talla>1.7){
			cout<<"JUGADOR NUMERO "<<i+1<<": "<<endl;
			cout<<"Nombre: "<<alumn[i].nombre<<endl;
			cout<<"Edad: "<<alumn[i].edad<<endl;
			cout<<"Talla: "<<alumn[i].talla<<" metros"<<endl<<endl;
		}
	}
	
}
	
	

