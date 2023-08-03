#pragma once
#include <string>
#include <iostream>

class weapon
{
public:
	weapon() = default;
	weapon(std::string, int);
	~weapon();
	std::string Name;
	int Damage = 0;
	virtual void print();
};

