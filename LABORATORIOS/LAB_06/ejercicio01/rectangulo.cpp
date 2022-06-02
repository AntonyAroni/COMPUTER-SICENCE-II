#include<iostream>
#include<stdlib.h>
#include <stdfix.h>
#include<stdio.h>
#include<string>
#include "rectangulo.h"

using namespace std;

Rectangulo::Rectangulo(float _ancho, float _largo){
    ancho= _ancho;
    largo=_largo;
}
void Rectangulo::area(){
    float _area;
    _area=ancho*largo;
    cout<<endl<<"El area es de: "<<_area;
}

void Rectangulo::peri(){
    float _peri;
    _peri=2*ancho +2*largo;
    cout<<endl<<"El perimetro es de: "<<_peri;
}
