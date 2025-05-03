#pragma once
#include "IWeapon.h"

class DecoratorWeapon : public IWeapon
{
public:
	explicit DecoratorWeapon(IWeapon* weapon);
	virtual ~DecoratorWeapon() = default;

	virtual int atack() const override;

protected:
	IWeapon* m_weapon;
};