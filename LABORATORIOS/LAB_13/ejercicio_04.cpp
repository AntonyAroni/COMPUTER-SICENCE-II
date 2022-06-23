//
// Created by olmer on 6/22/2022.
//

#include <iostream>
#include <cstdio>
#include <string>
#include <ctime>
/*4. Implemente un programa que maneje un arreglo de estructuras que solicite
nombre, sexo y sueldo de los empleados de una empresa y debe mostrar por
pantalla el menor y mayor sueldo.
*/
using namespace std;
struct Empleados{
	string nombre;
	string sexo;
	double sueldo;
};
void evaluar(Empleados [],int);

int main(int argc, char *argv[]) {
    system("cls");
	int cantidad;
	string nombre;
	string sexo;
	double sueldo;
	cout<<"Cantidad de empleados?: ";cin>>cantidad;cout<<endl;
	
	Empleados* emp = nullptr;
	emp=new Empleados[cantidad];
	
	for(int i=0;i<cantidad;i++){
		cout<<"Empleado ["<<i+1<<"]: "<<endl;
		cout<<"Nombre: "; getline(cin>>ws,nombre);
		cout<<"Sexo: ";getline(cin>>ws, sexo);
		cout<<"Sueldo: ";cin>>sueldo;cout<<endl<<endl;
		emp[i]={nombre,sexo,sueldo};
	}
	evaluar(emp,cantidad);
	delete[] emp;
	return 0;
}

void evaluar(Empleados emp[],int c){
	system("cls");
	int indice_min=0, indice_max=0;
	float min=emp[0].sueldo, max=emp[0].sueldo;
	for(int i=1; i<c; i++){
		if(emp[i].sueldo<min){
			min=emp[i].sueldo;
			indice_min=i;
		}
		if(emp[i].sueldo>max){
			max=emp[i].sueldo;
			indice_max=i;
		}
	}
	cout<<"EMPLEADO "<<indice_min+1<<" CON SALARIO MINIMO: "<<endl;
	cout<<"Nombre: "<<emp[indice_min].nombre<<endl;
	cout<<"Sexo: "<<emp[indice_min].sexo<<endl;
	cout<<"Sueldo: "<<emp[indice_min].sueldo<<endl<<endl;
	
	cout<<"EMPLEADO "<<indice_max+1<<" CON SALARIO MAXIMO: "<<endl;
	cout<<"Nombre: "<<emp[indice_max].nombre<<endl;
	cout<<"Sexo: "<<emp[indice_max].sexo<<endl;
	cout<<"Sueldo: "<<emp[indice_max].sueldo<<endl<<endl;
}
	
	

