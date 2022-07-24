//
// Created by olmer on 7/23/2022.
//

#ifndef LABS_BUILDERESPECIFICO_H
#define LABS_BUILDERESPECIFICO_H
#include "Coche.h"
#include "IBuilder.h"
class BuilderEspecifico : public IBuilder {
private:
    Coche* product;
public:
    BuilderEspecifico();
    ~BuilderEspecifico() override;
    void Reset();
    void ProducirPuerta(std::string)const override;
    void ProducirLlanta(std::string)const override;
    void ProducirTimon(std::string)const override;
    void ProducirAsiento(std::string)const override;
    void ProducirMotor(std::string)const override;
    void ProducirEspejos(std::string)const override;
    void ProducirVidrios(std::string)const override;
    Coche* GetProducto() {
        Coche* resultado = this->product;
        this->Reset();
        return resultado;
    }
};
#endif //LABS_BUILDERESPECIFICO_H
