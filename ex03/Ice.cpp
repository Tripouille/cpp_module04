#include "Ice.hpp" 

Ice::Ice(void)
	: AMateria("ice")
{
}

Ice::~Ice(void)
{
}

Ice::Ice(Ice const & other)
	: AMateria(other)
{
	Ice::copy(other);
}

Ice &
Ice::operator=(Ice const & other)
{
	if (this != &other)
	{
		AMateria::operator=(other);
		Ice::copy(other);
	}
	return (*this);
}

void
Ice::copy(Ice const & other)
{
	(void)other;
}

Ice *
Ice::clone(void) const
{
	return (new Ice(*this));
}

void
Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
