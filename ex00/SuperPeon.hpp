#ifndef SUPERPEON_HPP 
# define SUPERPEON_HPP
# include <iostream>
# include <string.h>
# include "Peon.hpp"

class SuperPeon : public Peon
{
	public:
		SuperPeon(std::string name);
		virtual ~SuperPeon(void);
		SuperPeon(SuperPeon const &other);

		SuperPeon			&operator=(SuperPeon const &other);

		void				getPolymorphed(void) const;
		void				getFrozen(void) const;

	private:
		SuperPeon(void);
		void				copy(SuperPeon const &other);
		bool				counterSpell(void) const;
		
		mutable u_int	_shieldValue;
};

#endif