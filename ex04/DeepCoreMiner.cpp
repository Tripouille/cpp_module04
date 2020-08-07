#include "DeepCoreMiner.hpp" 

DeepCoreMiner::DeepCoreMiner(void)
{
}

DeepCoreMiner::~DeepCoreMiner(void)
{
}

 DeepCoreMiner::DeepCoreMiner(DeepCoreMiner const & other)
{
	 DeepCoreMiner::copy(other);
}

DeepCoreMiner &
DeepCoreMiner::operator=(DeepCoreMiner const & other)
{
	if (this != &other)
		 DeepCoreMiner::copy(other);
	return (*this);
}

void
DeepCoreMiner::copy(DeepCoreMiner const & other)
{
	(void)other;
}

void
DeepCoreMiner::mine(IAsteroid * a)
{
	std::cout << "* mining deep... got " << a->beMined(this) << "! *" << std::endl;
}

DeepCoreMiner *
DeepCoreMiner::clone(void) const
{
	return (new DeepCoreMiner);
}
