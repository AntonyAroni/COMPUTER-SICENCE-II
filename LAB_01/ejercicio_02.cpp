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
    string gmail,nom,nom_,ape1,ape2,ape2_,final;
    gmail = "@unsa.edu.pe";
    cout<<"primer nombre: ";cin>>nom;cout<<endl;
    cout<<"primer apellido: ";cin>>ape1;cout<<endl;
    cout<<"segundo apellido: ";cin>>ape2;cout<<endl;
    nom_=nom[0];
    ape2_=ape2[0];

    final.append(nom_);
    final.append(ape1);
    final.append(ape2_);
    final.append(gmail);
 
    cout<<"Su correo es: "<<final;
    
    cout<<endl<<endl;
    return 0;
}