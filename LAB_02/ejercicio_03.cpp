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
    cout<<"Multiplos de 5 comprendidos entre 1 y 100:"<<endl;
    for(int i=1;i<101;i++){
        if(i%5==0) cout<<i<<", ";
    }
    cout<<endl<<endl;
    
    return 0;
}