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
    float num[10],sum;
    for(int i=0;i<10;i++){
        cout<<"ingrese el numero("<<i+1<<"): ";cin>>num[i];cout<<endl;
        if(num[i]<0) sum+=num[i];
    }
    cout<<"la suma de numeros negativos es de: "<<sum;
    cout<<endl<<endl;
    
    return 0;
}