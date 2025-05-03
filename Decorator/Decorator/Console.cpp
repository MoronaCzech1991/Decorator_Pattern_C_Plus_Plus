// Decorator pattern example

#include "Flamethrower.h"
#include "Kalashnikov.h"
#include "LaserGun.h"
#include "IWeapon.h"

#include <iostream>

int main()
{
    Kalashnikov kalashnikov = Kalashnikov();
    std::cout << "Kombo Damage: " << kalashnikov.atack() << "\n" << std::endl;

    Flamethrower flamethrower = Flamethrower(&kalashnikov);
    std::cout << "Kombo Damage: " << flamethrower.atack() << "\n" << std::endl;

    LaserGun laserGun = LaserGun(&flamethrower);
    std::cout << "Kombo Damage: " << laserGun.atack() << "\n" << std::endl;
}
