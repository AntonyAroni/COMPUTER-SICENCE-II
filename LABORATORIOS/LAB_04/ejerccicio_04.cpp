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
    int cont=0,num=2;
    int *array=new int[100];
    while (cont<100){
        if(primo(num)){
            *(array+cont)=num;
            cont++;
            num++;
        }
        else{
            num++;
        }
    }

    for (int i = 99; i>=0; i--)
    {
        cout<<*(array+i)<<", ";
    }
    return 0;
}