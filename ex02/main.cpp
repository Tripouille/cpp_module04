#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main (void)
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(bob);
	vlc->push(NULL);
	std::cout << "Actual size of squad = " <<  vlc->getCount() << std::endl;
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << "Ajout d'un marine dans vlc" << std::endl;
	vlc->push(new TacticalMarine);
	std::cout << "Constructeur par Copie sur vlc" << std::endl;
	Squad* vlc2 = new Squad(*((Squad*)vlc));
	std::cout << "Actual size of vcl2 = " <<  vlc2->getCount() << std::endl;
	std::cout << "vlc2 = vlc" << std::endl;
	*vlc2 = *((Squad*)vlc);
	std::cout << "END --- DELETE" << std::endl;
	delete vlc;
	delete vlc2;
	return (0);
}