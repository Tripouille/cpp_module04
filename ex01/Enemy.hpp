#ifndef ENEMY_HPP 
# define ENEMY_HPP
# include <iostream>
# include <string.h>

class Enemy
{
	public:
		Enemy(int hp, std::string const& type);
		virtual ~Enemy(void);
		Enemy(Enemy const& other);

		Enemy&					operator=(Enemy const& other);

		std::string const&		getType(void) const;
		int						getHP(void) const;
		virtual void			takeDamage(int dmg);

	private:
		Enemy(void);
		void					copy(Enemy const& other);

		int						_hitPoints;
		std::string				_type;
};

std::ostream&		operator<<(std::ostream& os, Enemy const& e);

#endif
