#ifndef DEEPCOREMINER_HPP 
# define DEEPCOREMINER_HPP
# include "IMiningLaser.hpp"

class  DeepCoreMiner :  public IMiningLaser
{
	public:
		DeepCoreMiner(void);
		~DeepCoreMiner(void);
		DeepCoreMiner(DeepCoreMiner const & other);

		DeepCoreMiner &					operator=(DeepCoreMiner const & other);

		void							mine(IAsteroid *);
		DeepCoreMiner *					clone(void) const;

	private:
		void							copy(DeepCoreMiner const & other);
};

#endif