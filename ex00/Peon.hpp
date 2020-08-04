#ifndef PEON_HPP 
# define PEON_HPP
# include <iostream>
# include <string.h>
# include "Victim.hpp"

class Peon : public Victim
{
	public:
		Peon(std::string name);
		virtual ~Peon(void);
		Peon(Peon const &other);

		Peon			&operator=(Peon const &other);

		virtual void	getPolymorphed(void) const;

	private:
		Peon(void);
		void			copy(Peon const &other);
};

#endif