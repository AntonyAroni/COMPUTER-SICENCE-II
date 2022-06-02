//ANTONY ARONI JARATA
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
#include <chrono>
#include <thread>
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

struct Nod{
    int num;
    Nod *sig;
};

void insertar(Nod *&, int);
void mostrar(Nod *);
void eliminar(Nod *&, int);


Nod *list = NULL;

int main(){
    int numero, cont=0, num;

    while (cont<10000){
        num=0+rand()%(20-0);
        insertar(list,num);
        cont++;
    }
    mostrar(list);

    return 0;
}


void insertar(Nod *&list, int _num){
    Nod * new_nod=new Nod();
    new_nod->num=_num;
    Nod *tmp1 = list;
    Nod *tmp2;

    while ((tmp1 != NULL)&&(tmp1->num <_num)){
        tmp2 = tmp1;
        tmp1 = tmp1->sig;
    }

    if(list ==tmp1){
        list = new_nod;
    }
    else{
        tmp2->sig = new_nod;
    }
    new_nod->sig = tmp1;   
}

void mostrar(Nod *list){
    Nod*temp=new Nod();
    temp=list;

    while(temp != NULL){
       cout<< temp->num<<", ";
       temp = temp->sig;
    }
}


void eliminar(Nod *&list, int buscar){
    if(list != NULL){
        Nod *temp;
        Nod *ant=NULL;

        temp=list;

        while ((temp != NULL) && (temp->num !=buscar)){
            ant=temp;
            temp= temp->sig;
        }

        if(temp==NULL)cout<<"Dato no encontrado";

        if(ant==NULL){
            list=list->sig;
            delete temp;
        }
        else{
            ant->sig=temp->sig;
            delete temp;
        }
        
    }
}