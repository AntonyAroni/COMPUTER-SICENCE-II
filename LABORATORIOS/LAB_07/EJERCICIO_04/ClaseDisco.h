#ifndef CLASEDISCO_H
#define CLASEDISCO_H
#include <iostream>
#include "ClaseMulti.h"

class ClaseDisco : public ClaseMulti {
public:
	ClaseDisco(std::string, std::string, std::string, int);
	~ClaseDisco();
	void mostrar_disco();
private:
	std::string idioma;
	int cantidad;
};

#endif

