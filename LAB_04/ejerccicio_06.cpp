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

int main(){
    system("cls");
    int **matriz,mayor=0,indice=0;
    
    matriz=new int *[3];
    for (int i = 0; i < 3; i++){
        matriz[i]=new int[3];
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<"dato a ingresar en entrada: ["<<i+1<<"]["<<j+1<<"]: ";cin>>*(*(matriz+i)+j);
        } 
    }
    //calcular mayor=
    for (int i = 0; i < 3; i++){
        int temp=0;
        for (int j = 0; j < 3; j++){
            temp+=*(*(matriz+i)+j);
        }
        if(temp>mayor) {
            mayor=temp;
            indice=i;
        }
    }

    cout<<endl<<"la fila con mayor suma es la numero: ("<<indice+1<<") con un total de: "<<mayor;
    
    return 0;
}