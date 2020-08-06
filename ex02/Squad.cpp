#include "Squad.hpp" 

Squad::Squad(void)
	  : _size(0), _marineList(NULL)
{
}

Squad::~Squad(void)
{
	t_marineList *			next;
	while (_marineList)
	{
		next = _marineList->next;
		delete _marineList->marine;
		delete _marineList;
		_marineList = next;
	}
}

Squad::Squad(Squad const & other)
	  : _size(0), _marineList(NULL)
{
	Squad::copy(other);
}

Squad &
Squad::operator=(Squad const & other)
{
	if (this != &other)
		Squad::copy(other);
	return (*this);
}

void
Squad::copy(Squad const & other)
{
	t_marineList *		otherMarineList = other._marineList;
	this->~Squad();
	while (otherMarineList)
	{
		this->push(otherMarineList->marine->clone());
		otherMarineList = otherMarineList->next;
	}
}

int
Squad::getCount(void) const
{
	return (_size);
}

ISpaceMarine *
Squad::getUnit(int i) const
{
	if (i < 0 || i >= _size)
		return (NULL);
	t_marineList * m = _marineList;
	while (i--)
		m = m->next;
	return (m->marine);
}

Squad::t_marineList * &
Squad::getLastMarineListPtr(void)
{
	t_marineList *		last = _marineList;

	if (_marineList == NULL)
		return (_marineList);
	while (last->next)
		last = last->next;
	return (last->next);
}

bool
Squad::isInMarineList(ISpaceMarine * marine) const
{
	t_marineList *		m = _marineList;

	while (m && m->marine != marine)
		m = m->next;
	return (m != NULL);
}

int
Squad::push(ISpaceMarine * marine)
{
	if (marine != NULL && !isInMarineList(marine))
	{
		t_marineList * & lastPtr = getLastMarineListPtr();
		lastPtr = new t_marineList; 
		lastPtr->marine = marine;
		lastPtr->next = NULL;
		++_size;
	}
	return (_size);
}
