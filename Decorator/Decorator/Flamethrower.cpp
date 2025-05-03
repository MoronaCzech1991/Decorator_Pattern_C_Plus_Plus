#include "Flamethrower.h"
#include <iostream>

Flamethrower::Flamethrower(IWeapon* weapon)
	: DecoratorWeapon(weapon),
	m_extraDammage(2000)
{
}

int Flamethrower::atack() const
{
	std::cout << "Burn, Burn !" << std::endl;
	return m_weapon->atack() + m_extraDammage;
}