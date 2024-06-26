#ifndef CURE_HPP 
# define CURE_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		~Cure(void);
		Cure(Cure const & other);

		Cure &						operator=(Cure const & other);
		Cure *						clone(void) const;
		void						use(ICharacter& target);

	private:
		void						copy(Cure const & other);
};

#endif