#include "Kalashnikov.h"
#include <iostream>

Kalashnikov::Kalashnikov() 
	: m_damage(100)
{
}

int Kalashnikov::atack() const
{
	std::cout << "Piu Piu !"<< std::endl;
	return m_damage;
}