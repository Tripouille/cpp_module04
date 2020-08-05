#include "PowerFist.hpp" 

PowerFist::PowerFist(void)
		  : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::~PowerFist(void)
{
}

PowerFist::PowerFist(PowerFist const& other)
		  : AWeapon(other)
{
	PowerFist::copy(other);
}

PowerFist&
PowerFist::operator=(PowerFist const& other)
{
	if (this != &other)
	{
		AWeapon::operator=(other);
		PowerFist::copy(other);
	}
	return (*this);
}

void
PowerFist::copy(PowerFist const& other)
{
	(void)other;
}

void
PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM ! *" << std::endl;
}

PowerFist*
PowerFist::clone(void) const
{
	std::cout << "Cloning PowerFist!" << std::endl;
	return (new PowerFist(*this));
}
