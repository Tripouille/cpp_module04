#include "Victim.hpp" 

Victim::Victim(std::string name)
		: _name(name)
{
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

Victim::Victim(Victim const &other)
{
	Victim::copy(other);
}

Victim&
Victim::operator=(Victim const &other)
{
	if (this != &other)
		Victim::copy(other);
	return (*this);
}

void
Victim::copy(Victim const &other)
{
	_name = other._name;
}

std::string
Victim::getName(void) const
{
	return (_name);
}

void
Victim::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}


std::ostream&
operator<<(std::ostream &os, Victim const &v)
{
	os << "I'm " << v.getName() << " and I like otters!" << std::endl;
	return (os);
}