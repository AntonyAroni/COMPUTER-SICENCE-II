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

int potencia(int a, int b){
    int cont=0,powd=1;
    while (cont<b)
    {
        powd=powd*a;
        cont++;
    }
    return powd;
}

int main(){
    system("cls");
    cout<<endl<<endl;
    int a,b;
    cout<<"ingrese el primer numero: ";cin>>a;cout<<endl;
    cout<<"ingrese el segundo numero: ";cin>>b;cout<<endl;
    cout<<"el resultado es: "<<potencia(a,b);
    return 0;
}