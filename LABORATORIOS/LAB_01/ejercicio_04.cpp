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
    int minutos,year,month,day,hour,min;
    cout<<"Cuantos minutos desea agregar?";cin>> minutos;
    time_t now =time(0);
    tm * time = localtime(&now);
    year=1900+(time->tm_year);
    month=1+(time->tm_mon);
    day=time->tm_mday;
    hour=time->tm_hour;
    min=time->tm_min;



    if((min+minutos)>59) {
        hour=hour+((min+minutos)/60);
        min=(min+minutos)%60;
    }
    else{
        min=min+minutos;
    }
    cout<<"hora y fecha mas la agregada: "<<year<<"/"<<month<<"/"<<day;
    cout<<"  "<<hour<<":"<<min;
    cout<<endl<<endl;
    
    return 0;
}