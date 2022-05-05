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

int **matriz;   
void suma(){
    int sum;
    for(int i=1;i<5;i+=2){
        for (int j = 0; j <3; j++){
            sum+=*(*(matriz+i)+j);
        }      
    }
    cout<<"el resultado de la suma de filas pares es de: "<<sum;
}
int main(){
    system("cls");

    matriz=new int*[5];
    for(int i=0;i<5;i++) matriz[i]=new int[3];
    //ingresar datos:
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 3; j++){
            cout<<"ingresa dato en ["<<i+1<<"] ["<<j+1<<"]";
            cin>>*(*(matriz+i)+j);
        }
    }
    suma();
    return 0;
}