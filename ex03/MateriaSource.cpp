#include "MateriaSource.hpp" 

MateriaSource::MateriaSource(void)
{
	std::memset(_source, 0, sizeof (*_source) * SOURCE_SIZE);
}

MateriaSource::~MateriaSource(void)
{
	for (int slot = 0; slot < SOURCE_SIZE; slot++)
		if (_source[slot] != NULL)
			delete _source[slot];
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
	this->~MateriaSource();
	for (int slot = 0; slot < SOURCE_SIZE; slot++)
		if (other._source[slot] != NULL)
			_source[slot] = other._source[slot]->clone();
		else
			_source[slot] = NULL;
}

bool
MateriaSource::sourceIsFull(void) const
{
	for (int slot = 0; slot < SOURCE_SIZE; slot++)
		if (_source[slot] == NULL)
			return (false);
	return (true);
}

AMateria * *
MateriaSource::getFreeSourceSlot(void)
{
	for (int slot = 0; slot < SOURCE_SIZE; slot++)
		if (_source[slot] == NULL)
			return (_source + slot);
	return (NULL);
}

void
MateriaSource::learnMateria(AMateria * m)
{
	if (m == NULL)
		std::cout << "learnMateria fail: can't learn NULL" << std::endl;
	else if (this->sourceIsFull())
		std::cout << "learnMateria fail: source is full" << std::endl;
	else
	{
		AMateria * * slot = this->getFreeSourceSlot();
		*slot = m->clone();
		**slot = *m;
	}
}

AMateria *
MateriaSource::createMateria(std::string const & type)
{
	for (int slot = 0; slot < SOURCE_SIZE && _source[slot] != NULL; slot++)
		if (_source[slot]->getType() == type)
		{
			AMateria *	newMateria = _source[slot]->clone();
			*newMateria = *_source[slot];
			return (newMateria);
		}
	return (NULL);	
}
