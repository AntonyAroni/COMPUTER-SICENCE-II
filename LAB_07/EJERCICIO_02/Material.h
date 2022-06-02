#ifndef MATERIAL_H
#define MATERIAL_H
#include<iostream>
class Material {
public:
	Material(std::string);
	~Material();
protected	:
	std::string material;
};

#endif

