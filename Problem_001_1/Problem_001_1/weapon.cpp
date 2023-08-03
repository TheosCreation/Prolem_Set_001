#include "weapon.h"

weapon::weapon(std::string wName, int wDamage)
{
	Name = wName;
	Damage = wDamage;
}

weapon::~weapon()
{
}

void weapon::print()
{
	std::cout << "name:" << Name << std::endl;
	std::cout << "damage:" << Damage << std::endl;
}
