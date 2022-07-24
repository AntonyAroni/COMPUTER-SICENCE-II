//
// Created by olmer on 7/23/2022.
//

#include "Coche.h"

void Coche::ListaComp() const {
    std::cout << "Componentes : ";
    for (size_t i = 0; i < componentes.size(); i++) {
        if (componentes[i] == componentes.back()) {
            std::cout << componentes[i].first;
            std::cout <<" color: "<< componentes[i].second;
        }
        else {
            std::cout << componentes[i].first;
            std::cout <<" color "<< componentes[i].second << ", "<<std::endl;
        }
    }
    std::cout << "\n\n";
}
