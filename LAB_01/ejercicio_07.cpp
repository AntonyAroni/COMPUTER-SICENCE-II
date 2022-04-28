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
    int a,b;
    cout<<"formato: el primer numero es divisor del segundo?"<<endl;
    cout<<"ingrese el primer numero: ";cin>>a;cout<<endl;
    cout<<"ingrese el segundo numero: ";cin>>b;cout<<endl;
    if(b%a==0) cout<<"El numero: "<<a<<" si es divisor del numero: "<<b;
    else{
        cout<<"El numero: "<<a<<" no es divisor del numero: "<<b;
    }

    cout<<endl<<endl;
    
    return 0;
}
