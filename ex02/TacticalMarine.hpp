#ifndef TACTICALMARINE_HPP 
# define TACTICALMARINE_HPP
# include <iostream>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine(void);
		~TacticalMarine(void);
		TacticalMarine(TacticalMarine const & other);

		TacticalMarine &			operator=(TacticalMarine const & other);

		TacticalMarine *			clone(void) const;
		void						battleCry(void) const;
		void						rangedAttack(void) const;
		void						meleeAttack(void) const;

	private:
		void						copy(TacticalMarine const & other);
};

#endif