#pragma once

#include "weapon.h"

class sword : public weapon
{
public:
	sword(std::string, int, int, int);
	~sword();
	int Sharpness = 0;
	int BladeLength = 0;
	void print();
};

