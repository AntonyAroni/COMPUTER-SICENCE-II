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
    char *inicial=new char[20];
    int h,m,agr=0;
    cout<<"Ingrese hora en formato (HH:MM): ";cin.getline(inicial,20);cout<<endl;
    cout<<"Ingrese tiempo en minutos a agregar: ";
    cin>>agr;
    cout<<endl;
    char *min=new char[2];
    for(int i=0;i<2;i++){
        *(min+i)=*(inicial+3+i);
    } 
    h=atoi(inicial);
    m=atoi(min);
    //AGREGANDO HORA:
    
    if((m+agr)>59) {
        h=h+((m+agr)/60);
        m=(m+agr)%60;
    }
    else{
        m=m+agr;
    }
    if (h<10){
    cout<<"La hora resultante es: 0"<<h<<":";
        if(m<10) cout<<"0"<<m<<endl;
        else cout<<m<<endl;
    }
    if (h>9 && h<13){
        cout<<"La hora resultante es: "<<h<<":";
        if(m<10) cout<<"0"<<m<<endl;
        else cout<<m<<endl;
    }
    if(h>12){
        h-=12;
        if (h<10){
        cout<<"La hora resultante es: 0"<<h<<":";
            if(m<10) cout<<"0"<<m<<endl;
            else cout<<m<<endl;
        }
        if(10<h<13){
        cout<<"La hora resultante es: "<<h<<":";
            if(m<10) cout<<"0"<<m<<endl;
            else cout<<m<<endl;
        }
    }
    cout<<endl<<endl;
    return 0;
}