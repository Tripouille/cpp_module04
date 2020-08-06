#include "Cure.hpp" 

Cure::Cure(void)
	 : AMateria("cure")
{
}

Cure::~Cure(void)
{
}

Cure::Cure(Cure const & other)
	 : AMateria(other)
{
	Cure::copy(other);
}

Cure &
Cure::operator=(Cure const & other)
{
	if (this != &other)
	{
		AMateria::operator=(other);
		Cure::copy(other);
	}
	return (*this);
}

void
Cure::copy(Cure const & other)
{
	(void)other;
}

Cure *
Cure::clone(void) const
{
	return (new Cure(*this));
}

void
Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
