#ifndef RADSCORPION_HPP 
# define RADSCORPION_HPP
# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion(void);
		~RadScorpion(void);
		RadScorpion(RadScorpion const& other);

		RadScorpion&				operator=(RadScorpion const& other);

	private:
		void						copy(RadScorpion const& other);
};

#endif