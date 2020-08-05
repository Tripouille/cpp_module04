#include "PlasmaRifle.hpp" 

PlasmaRifle::PlasmaRifle(void)
			: AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::~PlasmaRifle(void)
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const& other)
			: AWeapon(other)
{
	PlasmaRifle::copy(other);
}

PlasmaRifle&
PlasmaRifle::operator=(PlasmaRifle const& other)
{
	if (this != &other)
	{
		AWeapon::operator=(other);
		PlasmaRifle::copy(other);
	}
	return (*this);
}

void
PlasmaRifle::copy(PlasmaRifle const& other)
{
	(void)other;
}

void
PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle*
PlasmaRifle::clone(void) const
{
	std::cout << "Cloning Plasmarifle!" << std::endl;
	return (new PlasmaRifle(*this));
}
