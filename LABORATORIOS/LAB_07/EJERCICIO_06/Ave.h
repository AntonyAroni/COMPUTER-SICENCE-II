#ifndef AVE_H
#define AVE_H
#include <iostream>
class Ave {
public:
	Ave() = default;
	Ave(std::string, int);
	~Ave();
	void mostrar_A();
protected:
	std::string nombre;
	int edad;
};

#endif

