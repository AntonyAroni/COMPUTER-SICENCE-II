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
int *datos,buscar;
bool busqueda(){
    for(int i=0;i<8;i++){
        if(*(datos+i)==buscar) return true;
        else{
            return false;
        }
    }
}

int main(){
    system("cls");
    datos=new int[8];
    for(int i=0;i<8;i++){
        cout<<"ingrese numero: ";cin>>*(datos+i);cout<<endl;
    }
    cout<<"dato a buscar: ";cin>>buscar;
    if(busqueda()==true) cout<<"si se encontró el numero"<<endl;
    else{
        cout<<"no se encontroó el numero"<<endl;
    }

    return 0;
}