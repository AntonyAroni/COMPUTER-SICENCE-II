//ANTONY ARONI JARATA
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<string>
#include<time.h>
#include<conio.h>
#include<stdlib.h>
#include <windows.h>
#include <cmath>
#include<math.h>
#include<ctime>
#include<vector>
using namespace std;
void in_datos();
int main(){
    system("cls");

    in_datos();
    return 0;
}

void in_datos(){
    string nombre [3]; 
    string apellido [3];
    int edad [3];
    int dni [3];

    for(int i=0;i<3;i++){
        cout<<"ingrese el nombre del alumno ("<<i<<"): ";
        getline(cin,nombre[i]);

    }
    for(int i=0;i<3;i++){
        cout<<"ingrese el apellido del alumno ("<<i<<"): ";
        getline(cin,apellido[i]);

    }
    for(int i=0;i<3;i++){
        cout<<"ingrese la edad del alumno ("<<i<<"): ";
        cin>>edad[i];

    }
    for(int i=0;i<3;i++){
        cout<<"ingrese el dni del alumno ("<<i<<"): ";
        cin>>dni[i];

    }


    //MOSTRAR DATOS:
    for(int i=0;i<3;i++){
        cout<<"DATOS DEL ALUMNO("<<i<<"): "<<endl;
        cout<<"NOMBRE: "<<nombre[i]<<endl;
        cout<<"APELLIDO:"<<apellido[i]<<endl;
        cout<<"EDAD: "<<edad[i]<<endl;
        cout<<"DNI: "<<dni[i]<<endl;
        cout<<endl<<endl;
    }
}