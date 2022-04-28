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
    int x,y,cont=0;
    do
    {
        cout<<"ingrese el valor de x: ";cin>>x;cout<<endl;
        cout<<"ingrese el valor de y: ";cin>>y;cout<<endl;
    } while (x>y);
    cout<<"Los numeros primos entre: "<<x<<" y "<<y<<" son :"<<endl;
    for(int i=x;i<=y;i++){
        if(primo(i)) {
            cout<<i<<", ";
            cont++;
        }
    }
    if(cont==0){
        int cont_x=0;
        int y_=y;
        int prim_x=0;

        for(int i =x;i>=2;i--){
            if(primo(i)){
                prim_x=i;
                break;
            }
        }
        if(prim_x!=0) cout<<"el primer numero menor mas proximo al intervalo dado es: "<<prim_x<<endl;
        else{
            cout<<"no se encontraron numeros primos menores a x :("<<endl;
        }


        while(true)
        {
            if(primo(y_)){
                cout<<"el primer numero mayor mas proximo al intervalo dado es "<<y_;
                break;
            }
            y_++;
        }
        

    }
    cout<<endl<<endl;
    
    return 0;
}
