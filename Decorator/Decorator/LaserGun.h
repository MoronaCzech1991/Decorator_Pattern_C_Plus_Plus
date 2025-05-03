#pragma once
#include "DecoratorWeapon.h"

class LaserGun : public DecoratorWeapon 
{
public:
	explicit LaserGun(IWeapon* weapon);
	virtual ~LaserGun() = default;

	int atack() const override;

private:
	int m_extraDamage;
};
