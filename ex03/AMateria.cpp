#include "AMateria.hpp" 

AMateria::AMateria(std::string const & type)
		 : _xp(0), _type(type)
{
}

AMateria::~AMateria(void)
{
}

AMateria::AMateria(AMateria const & other)
{
	AMateria::copy(other);
}

AMateria &
AMateria::operator=(AMateria const & other)
{
	if (this != &other)
		AMateria::copy(other);
	return (*this);
}

void
AMateria::copy(AMateria const & other)
{
	_xp = other._xp;
}

std::string const &
AMateria::getType(void) const
{
	return (_type);
}

unsigned int
AMateria::getXP(void) const
{
	return (_xp);
}

void
AMateria::use(ICharacter & target)
{
	_xp += 10;
	(void)target;
}
