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
    int num;
    float notas, *promedios;
    promedios = new float(num);
    cout<<"Cantidad de estudiantes?: ";cin>>num;cout<<endl;
    
    for(int i=0;i<num;i++){
        int temp=0;
        for(int j=0;j<3;j++){
            cout<<"Cual es la nota numero ("<<i+1<<") del alumno?: ";cin>>notas;cout<<endl;
            temp+=notas;
        }
        *(promedios+i)=temp/3;
        cout<<endl;
    }
    
    for(int i=0;i<num;i++){
        cout<<"El promedio del alumno ("<<i+1<<") es de: "<<*(promedios+i)<<endl;
    }
    cout<<endl<<endl;
    
    return 0;
}