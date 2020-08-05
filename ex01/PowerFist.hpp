#ifndef POWERFIST_HPP 
# define POWERFIST_HPP
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist(void);
		~PowerFist(void);
		PowerFist(PowerFist const& other);

		PowerFist&			operator=(PowerFist const& other);

		void				attack(void) const;
		PowerFist*			clone(void) const;

	private:
		void				copy(PowerFist const& other);
};

#endif