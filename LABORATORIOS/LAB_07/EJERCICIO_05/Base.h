#ifndef BASE_H
#define BASE_H

class Base {
public:
	Base()= default;
	~Base();
	void setOperador(int);
	int getOperador();
	
protected:
	int operador;
};

#endif

