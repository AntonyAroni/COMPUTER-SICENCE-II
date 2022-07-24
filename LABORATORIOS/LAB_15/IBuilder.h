//
// Created by olmer on 7/23/2022.
//

#ifndef LABS_IBUILDER_H
#define LABS_IBUILDER_H
#include <string>
class IBuilder {
public:
    virtual ~IBuilder() = default;
    virtual void ProducirPuerta(std::string)const =0;
    virtual void ProducirLlanta(std::string)const =0;
    virtual void ProducirTimon(std::string)const =0;
    virtual void ProducirAsiento(std::string)const =0;
    virtual void ProducirMotor(std::string)const =0;
    virtual void ProducirEspejos(std::string)const =0;
    virtual void ProducirVidrios(std::string)const =0;
};
#endif //LABS_IBUILDER_H
