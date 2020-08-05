#ifndef SUPERMUTANT_HPP 
# define SUPERMUTANT_HPP
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant(void);
		~SuperMutant(void);
		SuperMutant(SuperMutant const& other);

		SuperMutant&		operator=(SuperMutant const& other);
		void				takeDamage(int dmg);

	private:
		void				copy(SuperMutant const& other);
};

#endif