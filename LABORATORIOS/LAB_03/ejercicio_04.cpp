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

bool primo (int n){
    bool con;
    if(n!=1 && n!=0){
        for(int i=2; i <=n; i++){
            if(n%i==0){
                if(n==i){
                    con = true;
                }
                else{
                    con = false;
                    return con;
                }
            }
        }
    }else con = false;
    return con;
}

int main(){
    system("cls");
    cout<<endl<<endl;
    int num;
    cout<<"Hasta que numero desea calcular?";cin>>num;cout<<endl;
    cout<<"Los numeros primos desde 1 a "<<num<<"son: "<<endl;
    for(int i=1;i<=num;i++) {
        if(primo(i)){
            cout<<i<<", ";
        } 
    }
    cout<<endl<<endl;
    return 0;
}