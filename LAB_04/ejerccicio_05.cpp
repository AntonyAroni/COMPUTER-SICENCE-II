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
#include <chrono>
#include <thread>
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;
int num[10][2],tot=0;
string nombre[10];
void agregar();
int buscar();
void modificar();

int main(){
    system("cls");
    int opc,respuesta;
    //crear matriz y array;
    //menu
    do
    {
        cout<<"ELIGA UNA OPCION: "<<endl<<endl;
        cout<<"1. agregar producto."<<endl;
        cout<<"2. buscar producto por nombre."<<endl;
        cout<<"3. modificar producto."<<endl;
        cout<<"4. salir."<<endl;
        cin>>opc;

    } while (opc<1 || opc>3);
    switch (opc)
    {
        case 1:
            agregar();
            main();
            break;
    
        case 2:
            respuesta = buscar();
            cout<<respuesta<<endl<<endl;
            if(respuesta !=11){
                cout<<endl<<"PRODUCTO ENCONTRADO!"<<endl;
                cout<<"NOMBRE: "<<nombre[respuesta]<<endl;
                cout<<"PRECIO: "<<*(*(num+respuesta)+0)<<endl;
                cout<<"STOCK: "<<*(*(num+respuesta)+1)<<endl<<endl;
            }
            sleep_for(seconds(4));
            main();
            break;
        case 3:
            modificar();
            sleep_for(seconds(2));
            main();
            break;
        case 4:
            return 0;
            break;
    }
}
void agregar(){
    cout<<"Nombre del producto?: ";getline(cin>>ws,nombre[tot]);
    cout<<"Precio: ";cin>>*(*(num+tot)+0);
    cout<<"Cantidad en stock?: ";cin>>*(*(num+tot)+1);cout<<endl<<endl;
    tot++;


    cout<<"PRODUCTO AGREGADO!";

    sleep_for(seconds(2));
    
}

int buscar(){
    string _nombre;
    int date=11;
    cout<<"producto? : ";getline(cin>>ws,_nombre);

    for(int i=0;i<tot;i++){
        if(nombre[i].compare(_nombre)==0){
            date=i;
        }
        
    }
    return date;
}

void modificar(){
    int dato= buscar();
    int pre, sto;
    cout<<" Precio a modificar?: ";cin>>pre;
    cout<<"Stock a modificar?: ";cin>>sto;
    *(*(num+dato)+0)=pre;
    *(*(num+dato)+1)=sto;
    cout<<endl<<"datos actualizados exitosamente!";    

}
