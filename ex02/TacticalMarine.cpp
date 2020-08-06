#include "TacticalMarine.hpp" 

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for action !" << std::endl;
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh ..." << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const & other)
{
	TacticalMarine::copy(other);
}

TacticalMarine &
TacticalMarine::operator=(TacticalMarine const & other)
{
	if (this != &other)
		TacticalMarine::copy(other);
	return (*this);
}

void
TacticalMarine::copy(TacticalMarine const & other)
{
	(void)other;
}

TacticalMarine *
TacticalMarine::clone(void) const
{
	std::cout << "Cloning TacticalMarine" << std::endl;
	return (new TacticalMarine(*this));
}

void
TacticalMarine::battleCry(void) const
{
	std::cout << "For the Holy PLOT !" << std::endl;
}

void
TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void
TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}
