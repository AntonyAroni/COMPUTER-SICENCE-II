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

void sumar(int a, int b){
    cout<<"La suma-> "<<a<<" + "<<b<<" = "<<a+b<<endl<<endl;
}
void restar(int a, int b){
    cout<<"La resta-> "<<a<<" - "<<b<<" = "<<a-b<<endl<<endl;
}
void multiplicar(int a, int b){
    cout<<"La multiplicacion-> "<<a<<" * "<<b<<" = "<<a*b<<endl<<endl;
}
void dividir(int a, int b){
    cout<<"La dicision-> "<<a<<" / "<<b<<" = "<<a/b<<endl<<endl;
}

int main(){
    void (*ope[4]) (int,int) = {sumar,restar,multiplicar, dividir};
    int opc,a,b;
    do
    {
        cout<<"   OPERACIONES:"<<endl<<endl;
        cout<<"1. SUMAR"<<endl;
        cout<<"2. RESTAR"<<endl;
        cout<<"3. MULTIPLICAR"<<endl;
        cout<<"4. DIVIDIR"<<endl;
        cout<<"5. SALIR"<<endl;
        cin>>opc;
    } while (opc>5 || opc<1);

    switch (opc){
    case 1:
        system ("cls");
        cout<<"SUMAR: "<<endl<<endl;
        cout<<"Ingrese el primer elemento: ";cin>>a;
        cout<<"Ingrese el segundo elemento: ";cin>>b;
        (ope[0])(a,b);
        main();
        break;
    
    case 2:
        system ("cls");
        cout<<"RESTAR: "<<endl<<endl;
        cout<<"Ingrese el primer elemento: ";cin>>a;
        cout<<"Ingrese el segundo elemento: ";cin>>b;
        (ope[1])(a,b);
        main();
        break;

    case 3:
        system ("cls");
        cout<<"MULTIPLICAR: "<<endl<<endl;
        cout<<"Ingrese el primer elemento: ";cin>>a;
        cout<<"Ingrese el segundo elemento: ";cin>>b;
        (ope[2])(a,b);
        main();
        break;

    case 4:
        system ("cls");
        cout<<"DIVIDIR: "<<endl<<endl;
        cout<<"Ingrese el primer elemento: ";cin>>a;
        cout<<"Ingrese el segundo elemento: ";cin>>b;
        (ope[3])(a,b);
        main();
        break;

    case 5:
        return 0;
        break;
    }


    
}