#ifndef ICE_HPP 
# define ICE_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		virtual ~Ice(void);
		Ice(Ice const & other);

		Ice &						operator=(Ice const & other);
		Ice *						clone(void) const;
		void						use(ICharacter& target);

	private:
		void						copy(Ice const & other);
};

#endif