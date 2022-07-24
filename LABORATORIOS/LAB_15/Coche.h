//
// Created by olmer on 7/23/2022.
//

#ifndef LABS_COCHE_H
#define LABS_COCHE_H
#include<iostream>
#include "vector"

class Coche {
public:
    std::vector<std::pair<std::string,std::string>> componentes;
    void ListaComp()const;
};

#endif //LABS_COCHE_H
