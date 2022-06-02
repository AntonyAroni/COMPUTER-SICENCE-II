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

bool year(int year){
    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            return true;
        }
    }
    else{
        return false;
    }
}


int main(){
    system("cls");
    cout<<endl<<endl;
    int dato;
    cout<<"Ingrese un dato: ";cin>>dato;cout<<endl;
    bool fun=year(dato);
    if(fun==true) cout<<"El year ("<<dato<<") ingresado es bisiesto."<<endl;
    else{
        cout<<"El year ingresado ("<<dato<<") no es bisiesto.";
    }
    

    return 0;
}