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
    cout<<"numero?: ";cin>>num;cout<<endl;
    int matriz[10][2];
    for(int i=0;i<10;i++){
        for(int j=0;j<2;j++){
            if(j==0) *(*(matriz+i)+j)=i+1;
            else{
                *(*(matriz+i)+j)=num*(i+1);
            }
            
        }
    }

    for(int i=0;i<10;i++){
        for(int j=0;j<2;j++){
            if(j==0) cout<<*(*(matriz+i)+j)<<" | ";
            else{
                cout<<*(*(matriz+i)+j)<<endl;
            }
        }
        cout<<endl;
    }

    cout<<endl<<endl;
    
    return 0;
}