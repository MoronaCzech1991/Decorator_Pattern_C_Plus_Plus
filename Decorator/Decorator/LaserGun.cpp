#include "LaserGun.h"
#include <iostream>

LaserGun::LaserGun(IWeapon* weapon)
	: DecoratorWeapon(weapon),
	m_extraDamage(300)
{
}

int LaserGun::atack() const 
{
	std::cout << "No sound, he he he laser make no sounds remember !" << std::endl;
	return m_weapon->atack() + m_extraDamage;
}