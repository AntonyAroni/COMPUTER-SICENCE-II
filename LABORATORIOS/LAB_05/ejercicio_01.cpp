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
#include <chrono>
#include <thread>
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;


void intercambio(int *_a,int *_b){
    int temp = *_a;
    
    *_a=*_b;
    *_b=temp;
}

int main(){
    int a,b;
    cout<<"Ingrese primer valor";cin>>a;
    cout<<"ingrese segundo valor";cin>>b;

    intercambio(&a,&b);
    cout<<endl<<"el valor de a es de: "<<a<<" y el valor de b: "<<b;

    return 0;
}