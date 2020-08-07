#include "MiningBarge.hpp" 

MiningBarge::MiningBarge(void)
{
	std::memset(_slots, 0, sizeof(*_slots) * MAX_SLOT);
}

MiningBarge::~MiningBarge(void)
{
	for (int laser = 0; laser < MAX_SLOT; laser++)
		if (_slots[laser] != NULL)
			delete _slots[laser];	
}

MiningBarge::MiningBarge(MiningBarge const & other)
{
	std::memset(_slots, 0, sizeof(*_slots) * MAX_SLOT);
	MiningBarge::copy(other);
}

MiningBarge &
MiningBarge::operator=(MiningBarge const & other)
{
	if (this != &other)
		MiningBarge::copy(other);
	return (*this);
}

void
MiningBarge::copy(MiningBarge const & other)
{
	this->~MiningBarge();

	for (int laser = 0; laser < MAX_SLOT; laser++)
		if (other._slots[laser] != NULL)
			_slots[laser] = other._slots[laser]->clone();
		else
			_slots[laser] = NULL;
}

IMiningLaser * *
MiningBarge::getFreeSlot(void)
{
	for (int laser = 0; laser < MAX_SLOT; laser++)
		if (_slots[laser] == NULL)
			return (_slots + laser);
	return (NULL);
}

void
MiningBarge::equip(IMiningLaser *l)
{
	IMiningLaser * *	freeSlot = getFreeSlot();

	if (l == NULL)
		std::cout << "equip fail: can't equip NULL" << std::endl;
	else if (freeSlot == NULL)
		std::cout << "equip fail: no free slot" << std::endl;
	else
		*freeSlot = l;
}

void
MiningBarge::mine(IAsteroid * a) const
{
	for (int laser = 0; laser < MAX_SLOT; laser++)
		if (_slots[laser] != NULL)
			_slots[laser]->mine(a);
}
