#ifndef PLASMARIFLE_HPP 
# define PLASMARIFLE_HPP
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle(void);
		~PlasmaRifle(void);
		PlasmaRifle(PlasmaRifle const& other);

		PlasmaRifle&			operator=(PlasmaRifle const& other);

		void					attack(void) const;
		PlasmaRifle*			clone(void) const;

	private:
		void					copy(PlasmaRifle const& other);
};

#endif