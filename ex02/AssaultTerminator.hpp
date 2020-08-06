#ifndef ASSAULTTERMINATOR_HPP 
# define ASSAULTTERMINATOR_HPP
# include <iostream>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator(void);
		virtual ~AssaultTerminator(void);
		AssaultTerminator(AssaultTerminator const & other);

		AssaultTerminator &					operator=(AssaultTerminator const & other);

		AssaultTerminator *					clone(void) const;
		void								battleCry(void) const;
		void								rangedAttack(void) const;
		void								meleeAttack(void) const;

	private:
		void								copy(AssaultTerminator const & other);
};

#endif