#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int		main(void)
{
	Character moi("moi");
	Character enemy("enemy");
	Cure * pc = new Cure;
	moi.equip(pc);
	moi.equip(pc);
	moi.equip(NULL);
	moi.equip(new Ice);
	moi.equip(new Cure);
	moi.showInventory();
	moi.unequip(15);
	moi.unequip(3);
	moi.unequip(0);
	moi.showInventory();
	moi.use(0, enemy);
	moi.use(1, enemy);
	moi.use(2, enemy);
	moi.equip(new Cure);
	moi.equip(new Cure);
	moi.equip(pc);
	moi.showInventory();
	delete pc;
	return (0);
}