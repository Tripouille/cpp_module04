#ifndef SORCERER_HPP 
# define SORCERER_HPP
# include <iostream>
# include <string>
# include "Victim.hpp"
# include "SuperPeon.hpp"

class Sorcerer
{
	public:
		Sorcerer(std::string name, std::string title);

		virtual ~Sorcerer(void);
		Sorcerer(Sorcerer const &other);

		Sorcerer		&operator=(Sorcerer const &other);

		std::string		getName(void) const;
		std::string		getTitle(void) const;
		void			polymorph(Victim const &v) const;
		void			freeze(SuperPeon const &v) const;

	private:
		Sorcerer(void);
		void			copy(Sorcerer const &other);

		std::string			_name;
		std::string			_title;
};

std::ostream		&operator<<(std::ostream &os, Sorcerer const &s);

#endif