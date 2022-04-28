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
    int numeros,mayor,menor,temp;
    float total;
    cout<<"numeros a ingresar?";cin>>numeros;
    for(int i=0;i<numeros;i++){
        cout<<"Ingrese el numero ["<<i+1<<"]: ";cin>>temp;cout<<endl;
        if(i!=0) {
            if(temp>mayor) mayor=temp;
            if(temp<menor) menor=temp;
            total+=temp;
        }
        else{
            mayor=temp;
            menor=temp;
            total+=temp;
        }
    }

    cout<<"el numero mayor es: "<<mayor<<endl;
    cout<<"el numero menor es: "<<menor<<endl;
    cout<<"la media es de: "<<total/numeros<<endl;

    cout<<endl<<endl;
    
    return 0;
}