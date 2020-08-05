#include <iostream>
#include <string>
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int		main(void)
{
	Character moi("moi");
	Enemy* enemy = new RadScorpion();
	std::cout << moi << *enemy;
	moi.attack(enemy);
	moi.equip(new PlasmaRifle());
	moi.attack(enemy);
	std::cout << moi << *enemy;
	moi.equip(new PowerFist());
	moi.attack(enemy);
	std::cout << moi << *enemy;
	moi.attack(enemy);
	std::cout << moi << *enemy;
	std::cout << "test character copie" << std::endl;
	std::cout << "moi weapon = " << moi.getWeapon() << std::endl;
	Character bob(moi);
	std::cout << "bob weapon = " << bob.getWeapon() << std::endl;
	moi.equip(NULL);
	std::cout << "moi weapon = " << moi.getWeapon() << std::endl;
	enemy = new SuperMutant;
	for (int i = 0; i < 3; i++)
	{
		if (bob.getApNumber() < 10)
			bob.recoverAP();
		bob.attack(enemy);
		std::cout << bob << *enemy;
	}
	std::cout << "END" << std::endl;
	delete enemy;
	return 0;
}