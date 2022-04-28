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

void nacimiento(int a, int m, int d){
    int year,month,day;
    time_t now =time(0);
    tm * time = localtime(&now);
    year=(1900+(time->tm_year))-a;
    if((1+(time->tm_mon))>m) month=(1+(time->tm_mon))-m ;
    else{
        month=(12-(m-(1+(time->tm_mon))));
    }
    if(time->tm_mday>d) day=time->tm_mday-d ;
    else{
        day=(30-(d-(time->tm_mday)));
    
    }


    cout<<"Usted tiene: "<<year<<" years old."<<endl;
    cout<<"Usted tiene: "<<(year*12)+month<<" meses de edad."<<endl;
    cout<<"Usted tiene: "<<((year*12)+month)*30+day<<" dias de edad."<<endl;

}

int main(){
    system("cls");
    cout<<endl<<endl;
    int a,m,d;
    cout<<"En que year nacio?: ";cin>>a;cout<<endl;
    cout<<"En que mes nacio(num)?: ";cin>>m;cout<<endl;
    cout<<"En que dia nacio?: ";cin>>d;cout<<endl;
    nacimiento(a,m,d);

    return 0;
}