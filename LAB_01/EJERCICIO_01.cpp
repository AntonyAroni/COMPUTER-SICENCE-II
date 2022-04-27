#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<string>
#include<time.h>
#include<conio.h>
#include<stdlib.h>
#include <windows.h>
#include <cmath>
using namespace std;
void ejercicios1_10();
void ejercicios11_20();
void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();
void ejercicio5();
void ejercicio6();
void ejercicio7();
void ejercicio8();
void ejercicio9();
void ejercicio10();
void ejercicio11();
void ejercicio12();
void ejercicio13();
void ejercicio14();
void ejercicio15();
void ejercicio16();
void ejercicio17();
void ejercicio18();
void ejercicio19();
void ejercicio20();
bool primo(int);

int main(){
    int ap,bp;

    do{
        cout<<endl<<endl;
        cout<<"MENU DE INCIO, SELECCIONE ALGUNA OPCION: "<<endl<<endl;
        cout<<"1. Ejercicios del 1 al 10"<<endl;
        cout<<"2. Ejercicios del 11 al 20"<<endl;
        cout<<"5. Salir."<<endl;
        cin>>ap;

        switch (ap)
        {
            case 1: 
                cout<<endl<<endl;
                ejercicios1_10();
                break; 
            
            case 2:
                cout<<endl<<endl;
                ejercicios11_20();
                break;

            case 3:
                cout<<endl;
                cout<<endl<<endl;
                cout<<"Esta seguro de salir?"<<endl;
                cout<<"Digite 1 para salir o cualquier numero para volver"<<endl;
                cin>>bp;
                if (bp==1){
                    return 0;
                }
                else{
                    return main();
                }
                
                break;
                
        }
          
    

    }while(ap!=3);
  
}

void ejercicios1_10(){
      int as,bs;

    do{
        cout<<"EJERCICIOS DEL 1 AL 10, SELECCIONE UNA OPCION:"<<endl<<endl;
        cout<<"1. Ejercicio 1."<<endl;
        cout<<"2. Ejercicio 2."<<endl;
        cout<<"3. Ejercicio 3."<<endl;
        cout<<"4. Ejercicio 4"<<endl;
        cout<<"5. Ejercicio 5"<<endl;
        cout<<"6. Ejercicio 6"<<endl;
        cout<<"7. Ejercicio 7"<<endl;
        cout<<"8. Ejercicio 8"<<endl;
        cout<<"9. Ejercicio 9"<<endl;
        cout<<"10. Ejercicio 10"<<endl;
        cout<<"11. Salir"<<endl;

        cin>>as;
        switch (as)
        {

            case 1:
                 ejercicio1();
                 break;
            case 2:
                 ejercicio2();
                 break;
            case 3:
                 ejercicio3();
                 break;
            case 4:
                 ejercicio4();
                 break;
            case 5:
                 ejercicio5();
                 break;
            case 6:
                 ejercicio6();
                 break;
            case 7:
                 ejercicio7();
                 break;
            case 8:
                 ejercicio8();
                 break;
            case 9:
                 ejercicio9();
                 break;
            case 10:
                 ejercicio10();
                 break;
            case 11:
            cout<<endl;
                cout<<"Esta seguro de salir?"<<endl;
                cout<<"Digite 1 para salir o cualquier numero para volver"<<endl;
                cin>>bs;
                if (bs==1){
                 main();
                }
                else{
                    return ejercicios1_10();
                }
                
                break;
                

    
        }
      
    }while(as != 11);
}


void ejercicios11_20(){
    int at,bt;

    do{
        cout<<"EJERCICIOS DEL 11 AL 20, SELECCIONE UNA OPCION:"<<endl<<endl;
        cout<<"1. Ejercicio 11."<<endl;
        cout<<"2. Ejercicio 12."<<endl;
        cout<<"3. Ejercicio 13."<<endl;
        cout<<"4. Ejercicio 14"<<endl;
        cout<<"5. Ejercicio 15"<<endl;
        cout<<"6. Ejercicio 16"<<endl;
        cout<<"7. Ejercicio 17"<<endl;
        cout<<"8. Ejercicio 18"<<endl;
        cout<<"9. Ejercicio 19"<<endl;
        cout<<"10. Ejercicio 20"<<endl;
        cout<<"11. Salir"<<endl;

        cin>>at;
        switch (at)
        {

            case 1:
                 ejercicio11();
                 break;
            case 2:
                 ejercicio12();
                 break;
            case 3:
                 ejercicio13();
                 break;
            case 4:
                 ejercicio14();
                 break;
            case 5:
                 ejercicio15();
                 break;
            case 6:
                 ejercicio16();
                 break;
            case 7:
                 ejercicio17();
                 break;
            case 8:
                 ejercicio18();
                 break;
            case 9:
                 ejercicio19();
                 break;
            case 10:
                 ejercicio20();
                 break;
            case 11:
                cout<<"Esta seguro de salir?"<<endl;
                cout<<"Digite 1 para retroceder al menu anterior o cualquier numero para volver"<<endl;
                cin>>bt;
                if (bt==1){
                   main();
                }
                else{
                    return ejercicios11_20();
                }
                
                break;
                

    
        }
      
    }while(at != 11);
}


void ejercicio1(){
    system("cls");
    cout<<" Sumar todos los enteros pares desde 2 hasta 100."<<endl;
    cout<<endl<<endl;
    int sum=0;
        for(int i=2;i<101;i++){
        sum+=i;
        i++;
        }
    cout<<"La suma es: "<<sum;
    cout<<endl<<endl;
}

void ejercicio2(){
    system("cls");
    cout<<endl<<endl;
    cout<<"Producto de dos numeros"<<endl;
    int a,b;
    cout<<"ingrese el primer numero";cin>>a;cout<<endl;
    cout<<"ingrese el segundo numero";cin>>a;cout<<endl;
    cout<<"El producto de ambos numeros es de: "<<a*b;
    cout<<endl<<endl;

}

void ejercicio3(){
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
}

void ejercicio4(){
    system("cls");
    cout<<endl<<endl;
    cout<<"Primeros 50 numeros primos"<<endl;
    cout<<"Los numeros primos son: "<<endl;
    int a=0,i=0;
    while (a<50)
    {
        if(primo(i)){
            cout<<i<<", ";
            a++;
        } 
        i++;
    }
    
    cout<<endl<<endl;
}
bool primo (int n){
    bool con;
    if(n!=1 && n!=0){
        for(int i=2; i <=n; i++){
            if(n%i==0){
                if(n==i){
                    con = true;
                }
                else{
                    con = false;
                    return con;
                }
            }
        }
    }else con = false;
    return con;

}

void ejercicio5(){
    system("cls");
    cout<<endl<<endl;
    cout<<"Multiplos de 5 comprendidos entre 1 y 100:"<<endl;
    for(int i=1;i<101;i++){
        if(i%5==0) cout<<i<<", ";
    }
    cout<<endl<<endl;
}

void ejercicio6(){
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
    
}

void ejercicio7(){
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
}

void ejercicio8(){
    system("cls");
    cout<<endl<<endl;
    cout<<endl<<endl;
}

void ejercicio9(){
    system("cls");
    cout<<endl<<endl;
    cout<<endl<<endl;
}

void ejercicio10(){
    system("cls");
    cout<<endl<<endl;
    cout<<endl<<endl;
}

void ejercicio11(){
    system("cls");
    cout<<endl<<endl;
    cout<<endl<<endl;
}

void ejercicio12(){
    system("cls");
    cout<<endl<<endl;
    cout<<endl<<endl;
}

void ejercicio13(){
    system("cls");
    cout<<endl<<endl;
    cout<<endl<<endl;
}

void ejercicio14(){
    system("cls");
    cout<<endl<<endl;
    cout<<endl<<endl;
}

void ejercicio15(){
    system("cls");
    cout<<endl<<endl;
    cout<<endl<<endl;
}

void ejercicio16(){
    system("cls");
    cout<<endl<<endl;
    cout<<endl<<endl;
}

void ejercicio17(){
    system("cls");
    cout<<endl<<endl;
    cout<<endl<<endl;
}

void ejercicio18(){
    system("cls");
    cout<<endl<<endl;
    cout<<endl<<endl;
}

void ejercicio19(){
    system("cls");
    cout<<endl<<endl;
    cout<<endl<<endl;
}

void ejercicio20(){
    system("cls");
    cout<<endl<<endl;
    cout<<endl<<endl;
}