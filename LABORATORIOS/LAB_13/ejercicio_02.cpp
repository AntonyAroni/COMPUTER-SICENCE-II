//
// Created by olmer on 6/22/2022.
//

#include <iostream>
#include <cstdio>
#include <string>
#include <ctime>
/*2. Implementar un programa que maneje un arreglo de estructuras que calcule la
nota final del Ciencia de la Computación. El programa debe permitir el ingreso
de cualquier cantidad de alumnos y para cada alumno, se podrá ingresar nombre,
grupo, nota de la primera fase, segunda fase, tercera fase y proyecto final. El
porcentaje de cada ítem es 15%, 20%, 25% y 40% respectivamente.
*/
using namespace std;
struct alumnos{
	string nombre;
	string grupo;
	float notas[4];
	
};

void evaluar(alumnos [],int);

int main(int argc, char *argv[]) {
	int cantidad;
	float nota[4];
	string nombre, grupo;
	
	cout<<"Cantidad de alumnos?: ";cin>>cantidad;cout<<endl;
	alumnos* alumn = nullptr;
	alumn=new alumnos[cantidad];
	
	for(int i=0;i<cantidad;i++){
		
		cout<<"Nombre ["<<i<<"]: ";
		getline(cin>>ws,nombre);cout<<endl;
		cout<<"Grupo: ";
		getline(cin>>ws,grupo);cout<<endl;;
		cout<<"Primera Nota: ";cin>>nota[0];
		cout<<"Segunda Nota: ";cin>>nota[1];
		cout<<"Tercera Nota: ";cin>>nota[2];
		cout<<"Tranajo final: ";cin>>nota[3];
		alumn[i]={nombre,grupo,nota[0],nota[1],nota[2],nota[3]};
		
	}
	evaluar(alumn,cantidad);
	
	delete[] alumn;
	return 0;
	
}

void evaluar(alumnos alumn[],int c){
	float final;
	system("cls");
	for(int i=0; i<c; i++){
		cout<<"Alumno: "<<alumn[i].nombre<<endl;
		cout<<"Grupo: "<<alumn[i].grupo<<endl;
		final = (alumn[i].notas[0]*0.15) + (alumn[i].notas[1]*0.2) +
				(alumn[i].notas[2]*0.25) + (alumn[i].notas[3]*0.4);
		cout<<"Nota Final: "<<final<<endl<<endl;
		
	}
	
}
	
	

