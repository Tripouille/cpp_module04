#include "AssaultTerminator.hpp" 

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I’ll be back ..." << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & other)
{
	AssaultTerminator::copy(other);
}

AssaultTerminator &
AssaultTerminator::operator=(AssaultTerminator const & other)
{
	if (this != &other)
		AssaultTerminator::copy(other);
	return (*this);
}

void
AssaultTerminator::copy(AssaultTerminator const & other)
{
	(void)other;
}

AssaultTerminator *
AssaultTerminator::clone(void) const
{
	std::cout << "Cloning AssaultTerminator" << std::endl;
	return (new AssaultTerminator(*this));
}

void
AssaultTerminator::battleCry(void) const
{
	std::cout << "This code is unclean. Purify it !" << std::endl;
}

void
AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *" << std::endl;
}

void
AssaultTerminator::meleeAttack(void) const
{
	std::cout << "* attaque with chainfists *" << std::endl;
}
