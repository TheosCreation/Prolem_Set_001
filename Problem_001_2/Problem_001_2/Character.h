#pragma once
#include "Weapon.h"

class Character
{
public:
	Character(std::string, Weapon, std::string, int);
	~Character();
	std::string Name;
	Weapon weapon;
	void SetName(std::string name);
	std::string GetName();
	void SetWeapon(Weapon);
	Weapon GetWeapon();
};

