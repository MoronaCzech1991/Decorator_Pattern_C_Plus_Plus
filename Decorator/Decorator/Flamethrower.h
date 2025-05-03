#pragma once
#include "DecoratorWeapon.h"

class Flamethrower : public DecoratorWeapon
{
public:
	explicit Flamethrower(IWeapon* weapon);
	virtual ~Flamethrower() = default;

	int atack() const override;

private:
	int m_extraDammage;
};
