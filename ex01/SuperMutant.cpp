#include "SuperMutant.hpp" 

SuperMutant::SuperMutant(void)
	  : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const& other)
			: Enemy(other)
{
	SuperMutant::copy(other);
}

SuperMutant&
SuperMutant::operator=(SuperMutant const& other)
{
	if (this != &other)
	{
		Enemy::operator=(other);
		SuperMutant::copy(other);
	}
	return (*this);
}

void
SuperMutant::copy(SuperMutant const& other)
{
	(void)other;
}

void
SuperMutant::takeDamage(int dmg)
{
	Enemy::takeDamage(dmg - 3);
}
