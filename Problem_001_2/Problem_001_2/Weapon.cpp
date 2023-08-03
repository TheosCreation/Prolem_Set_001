#include "Weapon.h"


Weapon::Weapon(std::string name, int damage)
{
	SetName(name);
	SetDamage(damage);
}

Weapon::~Weapon()
{
}

std::string Weapon::GetName()
{
	return Name;
}

void Weapon::SetName(std::string name)
{
	Name = name;
}

int Weapon::GetDamage()
{
	return Damage;
}

void Weapon::SetDamage(int damage)
{
	Damage = damage;
}

void Weapon::DisplayWeapon()
{
	std::cout << Name << std::endl;
	std::cout << Damage << std::endl;
}