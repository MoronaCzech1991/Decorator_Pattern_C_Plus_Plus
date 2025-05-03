#pragma once

#include "IWeapon.h"

class Kalashnikov : public IWeapon
{
public:
	Kalashnikov();
	virtual ~Kalashnikov() = default;

	int atack() const override;

private:
	int m_damage;
};
