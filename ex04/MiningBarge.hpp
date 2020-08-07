#ifndef MININGBARGE_HPP 
# define MININGBARGE_HPP
# include <cstring>
# include "IAsteroid.hpp"
# include "IMiningLaser.hpp"

class MiningBarge
{
	public:
		MiningBarge(void);
		virtual ~MiningBarge(void);
		MiningBarge(MiningBarge const & other);

		MiningBarge &					operator=(MiningBarge const & other);

		void							equip(IMiningLaser *);
		void							mine(IAsteroid *) const;

		enum {MAX_SLOT=4};

	private:
		void					copy(MiningBarge const & other);
		IMiningLaser * *		getFreeSlot(void);

		IMiningLaser *			_slots[MAX_SLOT];
};

#endif
