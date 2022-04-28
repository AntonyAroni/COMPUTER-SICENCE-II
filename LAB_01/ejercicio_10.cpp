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
    char pass[100], pass1[100];
    cout<<"Registre password: ";gets(pass);cout<<endl;
    cout<<endl<<endl;
    do{
        cout<<"introduzca su password: ";gets(pass1);cout<<endl;
    } while (strcmp(pass, pass1));
    
    return 0;
}