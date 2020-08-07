#include "MiningBarge.hpp"
#include "AsteroKreog.hpp"
#include "KoalaSteroid.hpp"
#include "StripMiner.hpp"
#include "DeepCoreMiner.hpp"

int		main(void)
{
	AsteroKreog asteroid;
	KoalaSteroid comet;
	MiningBarge * mb = new MiningBarge;
	mb->equip(new StripMiner);
	mb->equip(new DeepCoreMiner);
	std::cout << "mb mining on " << asteroid.getName() << std::endl;
	mb->mine(&asteroid);
	std::cout << "mb mining on " << comet.getName() << std::endl;
	mb->mine(&comet);
	MiningBarge * mb2 = new MiningBarge(*mb);
	*mb2 = *mb;
	mb2->equip(new DeepCoreMiner);
	IMiningLaser * ml = new DeepCoreMiner;
	mb2->equip(ml);
	mb2->equip(ml);
	mb2->equip(NULL);
	std::cout << "mb2 mining on " << asteroid.getName() << std::endl;
	mb2->mine(&asteroid);
	std::cout << "mb2 mining on " << comet.getName() << std::endl;
	mb2->mine(&comet);
	delete mb;
	delete mb2;
	return (0);
}