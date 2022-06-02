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
bool validar(int a){
    if(a%2==0) return true;
    else{
       return false;
    }
}
int suma(int b){
    int sum=0;
    for(int i=1;i<=b;i+=2) sum+=i;
    return sum;
}


int main(){
    int num;
    do
    {
        cout<<"Ingrese un numero entre 0 y 100: ";cin>>num;cout<<endl;

    } while (num<0 || num>100);
    
    if(validar(num)==true) cout<<"el numero "<<num<<" es par."<<endl;
    else{
        cout<<"el numero "<<num<<" es impar."<<endl;
    }
    cout<<"La suma de los ellemtos impares es de: "<<suma(num);
    

    return 0;
}