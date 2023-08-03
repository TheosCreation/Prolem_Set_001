#include "sword.h"

sword::sword(std::string sName, int sDamage, int sSharpness, int sBladeLength)
{
	Name = sName;
	Damage = sDamage;
	Sharpness = sSharpness;
	BladeLength = sBladeLength;
}

sword::~sword()
{
}

void sword::print()
{
	std::cout << "name:" << Name << std::endl;
	std::cout << "damage:" << Damage << std::endl;
	std::cout << "sharpness:" << Sharpness << std::endl;
	std::cout << "blade length:" << BladeLength << std::endl;
}
