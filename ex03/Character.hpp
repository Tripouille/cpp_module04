#ifndef CHARACTER_HPP 
# define CHARACTER_HPP
# include <cstring>
# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(std::string const & name);
		~Character(void);
		Character(Character const & other);

		Character &					operator=(Character const & other);

		std::string const &			getName(void) const;
		void						equip(AMateria * m);
		void						unequip(int idx);
		void						use(int idx, ICharacter & target);
		bool						isInInventory(AMateria const * m) const;
		bool						inventoryIsFull(void) const;
		void						showInventory(void) const;

		enum {INVENTORY_SLOT=4};

	private:
		Character(void);
		void						copy(Character const & other);
		AMateria * *				getFirstFreeInventorySlot(void);

		std::string					_name;
		AMateria *					_inventory[INVENTORY_SLOT];
};

#endif