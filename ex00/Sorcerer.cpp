#include "Sorcerer.hpp" 

Sorcerer::Sorcerer(std::string name, std::string title)
			: _name(name), _title(title)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << _name << ", " << _title
			  << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &other)
{
	Sorcerer::copy(other);
}

Sorcerer&
Sorcerer::operator=(Sorcerer const &other)
{
	if (this != &other)
		Sorcerer::copy(other);
	return (*this);
}

void
Sorcerer::copy(Sorcerer const &other)
{
	_name = other._name;
	_title = other._title;
}

std::string
Sorcerer::getName(void) const
{
	return (_name);
}

std::string
Sorcerer::getTitle(void) const
{
	return (_title);
}

void
Sorcerer::polymorph(Victim const &v) const
{
	v.getPolymorphed();
}

void
Sorcerer::freeze(SuperPeon const &v) const
{
	v.getFrozen();
}

std::ostream&
operator<<(std::ostream &os, Sorcerer const &s)
{
	os << "I am " << s.getName() << ", " << s.getTitle()
	   << ", and I like ponies!" << std::endl;
	return (os);
}