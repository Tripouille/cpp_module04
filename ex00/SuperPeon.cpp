#include "SuperPeon.hpp" 

SuperPeon::SuperPeon(std::string name)
		  : Peon(name), _shieldValue(2)
{
	std::cout << "SUPER PEEEEEEEEEEEEEEEEEEOOOOOOOOON!" << std::endl;
}

SuperPeon::~SuperPeon(void)
{
}

SuperPeon::SuperPeon(SuperPeon const &other)
		  : Peon(other)
{
	SuperPeon::copy(other);
}

SuperPeon&
SuperPeon::operator=(SuperPeon const &other)
{
	if (this != &other)
	{
		Peon::operator=(other);
		SuperPeon::copy(other);
	}
	return (*this);
}

void
SuperPeon::copy(SuperPeon const &other)
{
	(void)other;
}

bool
SuperPeon::counterSpell(void) const
{
	if (_shieldValue)
	{
		--_shieldValue;
		std::cout << _name << " absorb spell with his shield!" << std::endl;
		return (true);
	}
	return (false);	
}

void
SuperPeon::getPolymorphed(void) const
{
	if (!counterSpell())
		std::cout << _name << " has been turned into a red mouse!" << std::endl;
}

void
SuperPeon::getFrozen(void) const
{
	if (!counterSpell())
		std::cout << _name << " got frozen!" << std::endl;
}
