#ifndef CLASEMULTI_H
#define CLASEMULTI_H
#include<iostream>

class ClaseMulti {
public:
	ClaseMulti(std::string, std::string);
	void mostrar_multi();
	~ClaseMulti();
protected:
	std::string nombre;
	std::string tipo;
};

#endif

