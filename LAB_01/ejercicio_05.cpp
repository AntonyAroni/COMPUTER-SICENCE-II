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

int main(){

    system("cls");
    cout<<endl<<endl;
    char *dato=new char[100];
    float numero;
    
    cout<<"ingrese datos: ";
    cin.getline(dato,100);
    numero=atoi(dato);
    cout<<numero<<endl;

    cout<<"el numero redondeado hacia abajo es: "<<floor(numero);
    cout<<endl<<endl;
    
    return 0;
}