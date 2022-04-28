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
    string palabra;
    int longi;
    cout<<"ingrese palabra: ";
    getline(cin,palabra);cout<<endl;
    longi=palabra.length();

    for(int i=longi-1;i>=0;i--){
        cout<<palabra[i]<<" ";
    }


    cout<<endl<<endl;
    
    return 0;
}