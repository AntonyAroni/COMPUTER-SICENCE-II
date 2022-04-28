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
    cout<<" Sumar todos los enteros pares desde 2 hasta 100."<<endl;
    cout<<endl<<endl;
    int sum=0;
        for(int i=2;i<101;i++){
        sum+=i;
        i++;
        }
    cout<<"La suma es: "<<sum;
    cout<<endl<<endl;
    
    return 0;
}