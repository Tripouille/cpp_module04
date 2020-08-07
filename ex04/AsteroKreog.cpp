#include "AsteroKreog.hpp" 

std::string const AsteroKreog::_name = "Asteroid";

AsteroKreog::AsteroKreog(void)
{
}

AsteroKreog::~AsteroKreog(void)
{
}

AsteroKreog::AsteroKreog(AsteroKreog const & other)
{
	AsteroKreog::copy(other);
}

AsteroKreog &
AsteroKreog::operator=(AsteroKreog const & other)
{
	if (this != &other)
		AsteroKreog::copy(other);
	return (*this);
}

void
AsteroKreog::copy(AsteroKreog const & other)
{
	(void)other;
}

std::string
AsteroKreog::beMined(StripMiner const * m) const
{
	(void)m;
	return ("Flavium");
}

std::string
AsteroKreog::beMined(DeepCoreMiner const * m) const
{
	(void)m;
	return ("Dragonite");
}

std::string
AsteroKreog::getName(void) const
{
	return (_name);
}
