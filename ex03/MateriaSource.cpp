#include "MateriaSource.hpp" 

MateriaSource::MateriaSource(void)
{
}

MateriaSource::~MateriaSource(void)
{
}

MateriaSource::MateriaSource(MateriaSource const & other)
{
	MateriaSource::copy(other);
}

MateriaSource &
MateriaSource::operator=(MateriaSource const & other)
{
	if (this != &other)
		MateriaSource::copy(other);
	return (*this);
}

void
MateriaSource::copy(MateriaSource const & other)
{
}
