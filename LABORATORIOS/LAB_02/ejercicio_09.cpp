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
    int cont=1,wa=0;
    cout<<"numero?";cin>>num;cout<<endl;
    for(int i=0;i<num;i++){
        int wa=0;
        while (wa<cont){
           cout<<"* ";
           wa++;
       }
       cout<<endl;
       cont++;
       
    }
    cout<<endl<<endl;
    
    return 0;
}