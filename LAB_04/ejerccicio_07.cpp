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
int **matriz;

void crear();
void mostrar();
void filas();
void columnas();

int main(){
    system("cls");
    int opc;
    do
    {
        cout<<"1. CREAR MATRIZ."<<endl;
        cout<<"2. MOSTRAR MATRIZ."<<endl;
        cout<<"3. CAMBIAR FILAS."<<endl;
        cout<<"4. CAMBIAR COLUMNAS."<<endl;
        cout<<"5. SALIR."<<endl;
        cin>>opc;
    } while (opc<1 || opc>5);
    switch (opc)
    {
    case 1:
        crear();
        sleep_for(seconds(3));
        main();
        break;
    case 2:
        mostrar();
        sleep_for(seconds(3));
        main();
        break;

    case 3:
        filas();
        sleep_for(seconds(3));
        main();
        break;

    case 4:
        columnas();
        sleep_for(seconds(3));
        main();
        break;
    case 5:
        return 0;
        break;
    }
}

void crear(){
    matriz=new int*[4];
    for(int i=0;i<4;i++) matriz[i]=new int[4];
    
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            *(*(matriz+i)+j)=i+j;
        }
        
    }
    cout<<endl<<"MATRIZ CREADA EXITOSAMENTE!"<<endl;
}
void mostrar(){

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            cout<<*(*(matriz+i)+j)<<" ";
        }
        cout<<endl;
    }  
}

void filas(){
    int temp,a,b;
    cout<<"primera fila?(incio 0): ";cin>>a;
    cout<<endl<<"segunda fila?(incio 0): ";cin>>b;

    for (int i = 0; i < 4; i++){
        temp=*(*(matriz+b)+i);
        *(*(matriz+b)+i)=*(*(matriz+a)+i);
        *(*(matriz+a)+i)=temp;
    }
    cout<<endl<<"cambios realizados!"<<endl;
    mostrar();
    
}

void columnas(){
    int temp,a,b;
    cout<<"primera columna??(incio 0): ";cin>>a;
    cout<<endl<<"segunda columna?(incio 0): ";cin>>b;


    for (int i = 0; i < 4; i++){
        temp=*(*(matriz+i)+b);
        *(*(matriz+i)+b)=*(*(matriz+i)+a);
        *(*(matriz+i)+a)=temp;
    }
    cout<<endl<<"cambios realizados!"<<endl;
    mostrar();
}