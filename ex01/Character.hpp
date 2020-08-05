#ifndef CHARACTER_HPP 
# define CHARACTER_HPP
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	public:
		Character(std::string const& name);
		~Character(void);
		Character(Character const& other);

		Character&				operator=(Character const& other);

		void					recoverAP(void);
		void					equip(AWeapon* weapon);
		void					attack(Enemy* enemy);
		std::string const&		getName(void) const;
		int						getApNumber(void) const;
		AWeapon*				getWeapon(void) const;
	
		enum {AP_RECOVER=10, AP_MAX=40};

	private:
		Character(void);
		void					copy(Character const& other);

		std::string				_name;
		int						_actionPoints;
		AWeapon*				_weapon;
		
};

std::ostream&		operator<<(std::ostream& os, Character const& c);

#endif