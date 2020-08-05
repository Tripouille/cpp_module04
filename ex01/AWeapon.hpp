#ifndef AWEAPON_HPP 
# define AWEAPON_HPP
# include <iostream>
# include <string.h>

class AWeapon
{
	public:
		AWeapon(std::string const& name, int apCost, int damage);
		virtual ~AWeapon(void);
		AWeapon(AWeapon const& other);

		AWeapon&				operator=(AWeapon const& other);

		std::string const&		getName(void) const;
		int						getAPCost(void) const;
		int						getDamage(void) const;
		virtual void			attack(void) const = 0;
		virtual AWeapon*		clone(void) const = 0;

	protected:
		std::string			_name;
		int					_apCost;
		int					_damage;

	private:
		AWeapon(void);
		void					copy(AWeapon const& other);
};

#endif