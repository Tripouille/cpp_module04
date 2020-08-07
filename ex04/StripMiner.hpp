#ifndef STRIPMINER_HPP 
# define STRIPMINER_HPP
# include "IMiningLaser.hpp"

class StripMiner : public IMiningLaser
{
	public:
		StripMiner(void);
		virtual ~StripMiner(void);
		StripMiner(StripMiner const & other);

		StripMiner &					operator=(StripMiner const & other);

		void							mine(IAsteroid *);
		StripMiner *					clone(void) const;

	private:
		void							copy(StripMiner const & other);
};

#endif