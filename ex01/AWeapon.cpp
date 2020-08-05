#include "AWeapon.hpp" 

AWeapon::AWeapon(std::string const& name, int apCost, int damage)
		: _name(name), _apCost(apCost), _damage(damage)
{
}

AWeapon::~AWeapon(void)
{
}

AWeapon::AWeapon(AWeapon const& other)
{
	AWeapon::copy(other);
}

AWeapon&
AWeapon::operator=(AWeapon const& other)
{
	if (this != &other)
		AWeapon::copy(other);
	return (*this);
}

void
AWeapon::copy(AWeapon const& other)
{
	_name = other._name;
	_apCost = other._apCost;
	_damage = other._damage;
}

std::string const&
AWeapon::getName(void) const
{
	return (_name);
}

int
AWeapon::getAPCost(void) const
{
	return (_apCost);
}

int
AWeapon::getDamage(void) const
{
	return (_damage);
}
