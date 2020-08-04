#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "SuperPeon.hpp"

int		main(void)
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	SuperPeon bob("bob");
	SuperPeon bob2(bob);
	robert.polymorph(bob);
	robert.polymorph(bob);
	robert.freeze(bob);
	return 0;
}