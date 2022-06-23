//
// Created by olmer on 6/22/2022.
//

#include <iostream>
#include <cstdio>
#include <ctime>
/*Implementar un programa que maneje un arreglo de estructuras para almacenar
los nombres y las fechas de cumpleaños de sus n compañeros. Y debe mostrarse
por pantalla quienes cumplen años en este mes.
*/
using namespace std;
struct alumnos{
	string nombre;
	int dia;
	int mes;
	int anio;
	
};

void evaluar(alumnos alumn[],int c);

int main(int argc, char *argv[]) {
	alumnos alumn[100];
	int cantidad;
	string nombre;
	int dia, mes, anio;
	cout<<"Cantidad de alumnos?: ";cin>>cantidad;cout<<endl;
	
	for(int i=1;i<=cantidad;i++){
		
		cout<<"Nombre ["<<i<<"]: ";
		getline(cin>>ws,nombre);cout<<endl;
		cout<<"dia de nacimiento ["<<i<<"]: ";cin>>dia;cout<<endl;
		cout<<"mes de nacimiento ["<<i<<"]: ";cin>>mes;cout<<endl;
		cout<<"anio de nacimiento ["<<i<<"]: ";cin>>anio;cout<<endl;
		//f[i]={dia,mes,anio};
		alumn[i]={nombre,dia,mes,anio};
		
	}
	evaluar(alumn,cantidad);
	return 0;
	
}

void evaluar(alumnos alumn[],int c){
	time_t now = time(0);
	tm *ltm = localtime(&now);
	int mes= 1 + ltm->tm_mon;
	int cont=0;
	
	cout<<"alumnos con nacimiento en mes actual: "<<endl;
	for(int i=0; i<c; i++){
		if(alumn[i].mes == mes){
			cout<<"Nombre: "<<alumn[i].nombre<<endl;
			cont++;
		}
	}
	if(cont==0)cout<<"No se econtraron alumnos con nacimiento en el mes actual";
}
	
	

