#include "Character.hpp" 

Character::Character(std::string const & name)
		  : _name(name)
{
	std::memset(_inventory, 0, sizeof(*_inventory) * INVENTORY_SLOT);
}

Character::~Character(void)
{
	for (int slot = 0; slot < INVENTORY_SLOT; slot++)
		if (_inventory[slot] != NULL)
			delete _inventory[slot];
}

Character::Character(Character const & other)
{
	std::memset(_inventory, 0, sizeof(*_inventory) * INVENTORY_SLOT);
	Character::copy(other);
}

Character &
Character::operator=(Character const & other)
{
	if (this != &other)
		Character::copy(other);
	return (*this);
}

void
Character::copy(Character const & other)
{
	this->~Character();
	_name = other._name;
	for (int slot = 0; slot < INVENTORY_SLOT; slot++)
		if (other._inventory[slot] != NULL)
			_inventory[slot] = other._inventory[slot]->clone();
		else
			_inventory[slot] = NULL;
}

std::string const &
Character::getName(void) const
{
	return (_name);
}

bool
Character::isInInventory(AMateria const * m) const 
{
	for (int slot = 0; slot < INVENTORY_SLOT; slot++)
		if (_inventory[slot] == m)
			return (true);
	return (false);
}

bool
Character::inventoryIsFull(void) const
{
	for (int slot = 0; slot < INVENTORY_SLOT; slot++)
		if (_inventory[slot] == NULL)
			return (false);
	return (true);
}

AMateria * *
Character::getFirstFreeInventorySlot(void)
{
	int		slot;

	for (slot = 0; slot < INVENTORY_SLOT; slot++)
		if ( _inventory[slot] == NULL)
			return (_inventory + slot);
	return (NULL);
}

void
Character::showInventory(void) const
{
	std::cout << _name << " Actual inventory : [";
	for (int slot = 0; slot < INVENTORY_SLOT; slot++)
	{
		std::cout << _inventory[slot];
		if (_inventory[slot] != NULL)
		std::cout << ": XP = " << _inventory[slot]->getXP();
		if (slot + 1 < INVENTORY_SLOT)
			std::cout << ", ";
	}
	std::cout << "]" << std::endl;
}

void
Character::equip(AMateria * m)
{
	if (m == NULL)
		std::cout << "Equip failed: can't equip NULL" << std::endl;
	else if (isInInventory(m))
		std::cout << "Equip failed: materia " << m << " already in inventory" << std::endl;
	else if (inventoryIsFull())
		std::cout << "Equip failed: inventory full" << std::endl;
	else
	{
		std::cout << "equip " << m << std::endl;
		*this->getFirstFreeInventorySlot() = m;
	}
}

void
Character::unequip(int idx)
{
	if (idx < 0 || idx >= INVENTORY_SLOT)
		std::cout << "Unequip failed: idx out of range" << std::endl;
	else if (_inventory[idx] == NULL)
		std::cout << "Unequip failed: inventory slot already empty" << std::endl;
	else
	{
		std::cout << "Unequip " << _inventory[idx] << std::endl;
		_inventory[idx] = NULL;
	}
}

void
Character::use(int idx, ICharacter & target)
{
	if (idx < 0 || idx >= INVENTORY_SLOT)
		std::cout << "use failed: idx out of range" << std::endl;
	else if (_inventory[idx] == NULL)
		std::cout << "use failed: inventory slot is empty" << std::endl;
	else
	{
		std::cout << "use " << _inventory[idx] << std::endl;
		_inventory[idx]->use(target);
	}
}
