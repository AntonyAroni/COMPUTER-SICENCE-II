//
// Created by olmer on 7/29/2022.
//

/*
 * EJERCICIO 01: Dado el siguiente modelo de la siguiente imagen, realizar la implementación
 * del modelo. De ser posible, incluir una interfaz para Linux que también sea utilizado por
 * los productos Button y CheckBox. (Las funciones Draw() solo imprimen el tipo de Producto
 * y el sistema en que se encuentra).
 */

#include <iostream>

//INICIO WINDOWS
class AbstractWindows {
public:
    virtual ~AbstractWindows() {};
    virtual std::string Funcion1_Win() const = 0;
};

class WinButton : public AbstractWindows {
public:
    std::string Funcion1_Win() const override {
        return "Button Windows.";
    }
};

class WinCheckBox : public AbstractWindows {
    std::string Funcion1_Win() const override {
        return "CheckBox Windows.";
    }
};
//FIN WINDOWS

//INICIO MAC
class AbstractMac {
public:
    virtual ~AbstractMac() {};
    virtual std::string Funcion1_Mac() const = 0;
    virtual std::string Funcion2_Mac(const AbstractWindows& colaborador) const = 0;
};

class MacButton : public AbstractMac {
public:
    std::string Funcion1_Mac() const override {
        return "Button Mac.";
    }
    std::string Funcion2_Mac(const AbstractWindows& colaborador) const
    override {
        const std::string result = colaborador.Funcion1_Win();
        return "Button Mac con ayuda de " + result;
    }
};
class MacCheckBox : public AbstractMac {
public:
    std::string Funcion1_Mac() const override {
        return "CheckBox Mac";
    }
    std::string Funcion2_Mac(const AbstractWindows& colaborador) const
    override {
        const std::string result = colaborador.Funcion1_Win();
        return "CheckBox Mac con ayuda de " + result;
    }
};

//FIN MAC


//INICIO LINUX
class AbstractLinux {
public:
    virtual ~AbstractLinux() {};
    virtual std::string Funcion1_Linux() const = 0;
};

class LinuxButton : public AbstractLinux {
public:
    std::string Funcion1_Linux() const override {
        return "Button Linux.";
    }
};

class LinuxCheckBox : public AbstractLinux {
    std::string Funcion1_Linux() const override {
        return "CheckBox Linux.";
    }
};
//FIN LINUX



//ABSTRACT FACTORY
class AbstractFactory {
public:
    virtual AbstractWindows* CrearWindows() const = 0;
    virtual AbstractMac* CrearMac() const = 0;
    virtual AbstractLinux* CrearLinux() const = 0;
};


//BUTTONS
class Buttons : public AbstractFactory {
public:
    AbstractWindows* CrearWindows() const override {
        return new WinButton();
    }
    AbstractMac* CrearMac() const override {
        return new MacButton();
    }
    AbstractLinux* CrearLinux() const override {
        return new LinuxButton();
    }
};

//CHECKBOXES
class CheckBoxes : public AbstractFactory {
public:
    AbstractWindows* CrearWindows() const override {
        return new WinCheckBox();
    }
    AbstractMac* CrearMac() const override {
        return new MacCheckBox();
    }
    AbstractLinux* CrearLinux() const override {
        return new LinuxCheckBox();
    }
};

//APLICATION FUNCTION
void Aplication(const AbstractFactory& f, const int os){
    if (os == 1){
        const AbstractWindows* producto_a = f.CrearWindows();
        std::cout << "\nDibujando "<<producto_a->Funcion1_Win() << "\n";
        delete producto_a;
    }else if (os==2){
        const AbstractMac* producto_b = f.CrearMac();
        std::cout << "\nDibujando "<< producto_b->Funcion1_Mac() << "\n";
        delete producto_b;
    }else if (os==3){
        const AbstractLinux* producto_c = f.CrearLinux();
        std::cout << "\nDibujando "<< producto_c->Funcion1_Linux() << "\n";
        delete producto_c;
    }

}

//MAIN
int main() {
    std::cout << "Cliente: Windows ";
    Buttons* f1 = new Buttons();
    Aplication(*f1, 1); // 1 - Windows
    delete f1;

    std::cout << std::endl;

    std::cout << "Cliente: Mac ";
    Buttons* f2 = new Buttons();
    Aplication(*f2, 2); // 2 - Mac
    delete f2;

    std::cout << std::endl;

    std::cout << "Cliente: Linux ";
    Buttons* f3 = new Buttons();
    Aplication(*f3, 3); // 2 - Mac
    delete f3;
    return 0;


}
