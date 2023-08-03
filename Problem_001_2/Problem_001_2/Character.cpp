#include "Character.h"

Character::Character(std::string cName, Weapon cWeapon, std::string wName, int wDamage)
{
	SetName(cName);
	SetWeapon(cWeapon);
	cWeapon.SetName(wName);
	cWeapon.SetDamage(wDamage);
}

Character::~Character()
{
}

void Character::SetName(std::string name)
{
	Name = name;
}

std::string Character::GetName()
{
	return Name;
}

void Character::SetWeapon(Weapon cWeapon)
{
	weapon = cWeapon;
}

Weapon Character::GetWeapon()
{
	return weapon;
}
