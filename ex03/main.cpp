#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int		main(void)
{
	Character moi("moi");
	Character enemy("enemy");
	Cure * pc = new Cure;
	moi.equip(pc);
	moi.use(0, enemy);
	moi.equip(pc);
	std::cout << "Test de la cpy" << std::endl;
	Character cpy(moi);
	cpy.showInventory();
	cpy = enemy;
	cpy.showInventory();
	std::cout << "Fin du test de la cpy" << std::endl;
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
	MateriaSource source;
	source.learnMateria(pc);
	source.learnMateria(pc);
	source.learnMateria(pc);
	source.learnMateria(pc);
	source.learnMateria(pc);
	moi.equip(source.createMateria(""));
	moi.equip(source.createMateria("cure"));
	moi.equip(source.createMateria("cure"));
	moi.use(3, enemy);
	moi.equip(pc);
	moi.showInventory();
	delete pc;
	return (0);
}