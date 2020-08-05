#include "Character.hpp" 

Character::Character(std::string const& name)
		  : _name(name), _actionPoints(AP_MAX), _weapon(NULL)
{
}

Character::~Character(void)
{
	if (_weapon != NULL)
		delete _weapon;
}

Character::Character(Character const& other)
{
	Character::copy(other);
}

Character&
Character::operator=(Character const& other)
{
	if (this != &other)
		Character::copy(other);
	return (*this);
}

void
Character::copy(Character const& other)
{
	_name = other._name;
	_actionPoints = other._actionPoints;
	if (other._weapon != NULL)
		_weapon = other._weapon->clone();
	else
		_weapon = NULL;
}

void
Character::recoverAP(void)
{
	_actionPoints = _actionPoints + AP_RECOVER >= AP_MAX ? 
					AP_MAX : _actionPoints + AP_RECOVER;
}

void
Character::equip(AWeapon* weapon)
{
	if (_weapon != NULL)
	{
		std::cout << "Bye bye " << _weapon->getName() << "!" << std::endl;
		delete _weapon;
	}
	_weapon = weapon;
	if (_weapon != NULL)
		std::cout << "Welcome " << _weapon->getName() << "!" << std::endl;
}

void
Character::attack(Enemy* enemy)
{
	if (_weapon != NULL && _actionPoints >= _weapon->getAPCost())
	{
		std::cout << _name << " attaque " << enemy->getType()
				  << " with a " << _weapon->getName() << std::endl;
		_actionPoints -= _weapon->getAPCost();
		_weapon->attack();
		enemy->takeDamage(_weapon->getDamage());
		if (enemy->getHP() == 0)
			delete enemy;
	}
}

std::string const&
Character::getName(void) const
{
	return (_name);
}

int
Character::getApNumber(void) const
{
	return (_actionPoints);
}

AWeapon*
Character::getWeapon(void) const
{
	return (_weapon);
}

std::ostream&		operator<<(std::ostream& os, Character const& c)
{
	os << c.getName() << " has " << c.getApNumber() << " AP and ";
	if (c.getWeapon() != NULL)
		os << "carries a " << c.getWeapon()->getName() << std::endl;
	else
		os << "is unarmed" << std::endl;
	return (os);
}
