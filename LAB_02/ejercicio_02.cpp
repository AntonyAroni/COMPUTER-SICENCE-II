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
    cout<<"Primeros 50 numeros primos"<<endl;
    cout<<"Los numeros primos son: "<<endl;
    int a=0,i=0;
    while (a<50)
    {
        if(primo(i)){
            cout<<i<<", ";
            a++;
        } 
        i++;
    }
    
    cout<<endl<<endl;
    
    return 0;
}