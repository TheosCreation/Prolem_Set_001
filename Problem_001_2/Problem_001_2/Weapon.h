#pragma once
#include <string>
#include <iostream>

class Weapon
{
public:
	Weapon() = default;
	Weapon(std::string, int);
	~Weapon();
	std::string Name = " ";
	int Damage = 0;
	std::string GetName();
	void SetName(std::string name);
	int GetDamage();
	void SetDamage(int damage);
	void DisplayWeapon();
};

