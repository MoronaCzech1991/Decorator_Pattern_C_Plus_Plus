#include "DecoratorWeapon.h"

DecoratorWeapon::DecoratorWeapon(IWeapon* weapon)
	: m_weapon(weapon)
{
}

int DecoratorWeapon::atack() const 
{
	return m_weapon->atack();
}