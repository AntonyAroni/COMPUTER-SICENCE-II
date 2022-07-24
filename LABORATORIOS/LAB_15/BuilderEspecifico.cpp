//
// Created by olmer on 7/23/2022.
//

#include "BuilderEspecifico.h"
BuilderEspecifico::BuilderEspecifico() {
    this->Reset();
}
BuilderEspecifico::~BuilderEspecifico() {
    delete product;
}
void BuilderEspecifico::Reset() {
    this->product = new Coche();
}
void BuilderEspecifico::ProducirPuerta(std::string color)const{
    this->product->componentes.emplace_back("Puerta",color);
}
void BuilderEspecifico::ProducirLlanta(std::string color)const{
    this->product->componentes.emplace_back("Llanta",color);
}
void BuilderEspecifico::ProducirTimon(std::string color)const {
    this->product->componentes.emplace_back("Timon",color);
}
void BuilderEspecifico::ProducirAsiento(std::string color)const{
    this->product->componentes.emplace_back("Asiento",color);
}
void BuilderEspecifico::ProducirMotor(std::string color)const{
    this->product->componentes.emplace_back("Motor",color);
}
void BuilderEspecifico::ProducirEspejos(std::string color)const{
    this->product->componentes.emplace_back("Espejos",color);
}
void BuilderEspecifico::ProducirVidrios(std::string color)const{
    this->product->componentes.emplace_back("Vidrios",color);
}