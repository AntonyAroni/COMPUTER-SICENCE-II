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

int fibonacci(int n){
	if(n<2){
		return n;
	}
	else{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}

int main(){

    system("cls");
    cout<<endl<<endl;
    int num;
	do{
		cout<<"Digite el numero de elementos a mostrar: ";
		cin>>num;
	}while(num <= 0);
	
	cout<<"Serie Fibonacci: ";
	for(int i=0;i<num;i++){
		cout<<fibonacci(i)<<", ";	
	}
    cout<<endl<<endl;
    
    return 0;
}