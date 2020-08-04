#ifndef VICTIM_HPP 
# define VICTIM_HPP
# include <iostream>
# include <string.h>

class Victim
{
	public:
		Victim(std::string name);
		virtual ~Victim(void);
		Victim(Victim const &other);

		Victim			&operator=(Victim const &other);

		std::string		getName(void) const;
		virtual void	getPolymorphed(void) const;

	protected:
		std::string		_name;

	private:
		Victim(void);
		void			copy(Victim const &other);
};

std::ostream		&operator<<(std::ostream &os, Victim const &v);

#endif