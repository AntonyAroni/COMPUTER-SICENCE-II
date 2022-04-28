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
    float temp, numeros, cantidad=0;
    cout<<"cuantos numeros desea ingresar?: ";cin>>cantidad;cout<<endl;
    for(int i=0;i<cantidad;i++){
        cout<<"ingrese el numero("<<i+1<<"): ";cin>>numeros;cout<<endl;
        temp+=numeros;
    }
    cout<<"La media es de: "<<temp/cantidad;
    cout<<endl<<endl;
    
    return 0;
}