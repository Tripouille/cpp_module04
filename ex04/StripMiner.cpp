#include "StripMiner.hpp" 

StripMiner::StripMiner(void)
{
}

StripMiner::~StripMiner(void)
{
}

StripMiner::StripMiner(StripMiner const & other)
{
	StripMiner::copy(other);
}

StripMiner &
StripMiner::operator=(StripMiner const & other)
{
	if (this != &other)
		StripMiner::copy(other);
	return (*this);
}

void
StripMiner::copy(StripMiner const & other)
{
	(void)other;
}

void
StripMiner::mine(IAsteroid * a)
{
	std::cout << "* strip mining... got " << a->beMined(this) << "! *" << std::endl;
}

StripMiner *
StripMiner::clone(void) const
{
	return (new StripMiner);
}
