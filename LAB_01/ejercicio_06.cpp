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
    int num;
    string decimal;
    do
    {
        cout<<"ingrese un numero: ";cin>>num;cout<<endl;
        
    } while (num<100 || num>999);
    
    while (num != 0){
        decimal += ( num % 2 == 0 ? "0" : "1" );
        num /= 2;
    }
    cout<<"numero binario: "<<decimal;
    
    cout<<endl<<endl;
    
    return 0;
}