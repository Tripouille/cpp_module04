#include "RadScorpion.hpp" 

RadScorpion::RadScorpion(void)
			: Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const& other)
			: Enemy(other)
{
	RadScorpion::copy(other);
}

RadScorpion&
RadScorpion::operator=(RadScorpion const& other)
{
	if (this != &other)
	{
		Enemy::operator=(other);
		RadScorpion::copy(other);
	}
	return (*this);
}

void
RadScorpion::copy(RadScorpion const& other)
{
	(void)other;
}
