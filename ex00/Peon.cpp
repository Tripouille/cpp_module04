#include "Peon.hpp" 

Peon::Peon(std::string name)
		: Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(Peon const &other) : Victim(other)
{
	Peon::copy(other);
}

Peon&
Peon::operator=(Peon const &other)
{
	if (this != &other)
	{
		Victim::operator=(other);
		Peon::copy(other);
	}
	return (*this);
}

void
Peon::copy(Peon const &other)
{
	(void)other;
}

void
Peon::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a pink pony!" << std::endl;
}
