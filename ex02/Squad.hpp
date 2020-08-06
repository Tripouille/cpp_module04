#ifndef SQUAD_HPP 
# define SQUAD_HPP
# include <iostream>
# include <string.h>
# include "ISquad.hpp"

class Squad : public ISquad
{
	typedef struct	s_marineList
	{
		ISpaceMarine *			marine;
		struct s_marineList	*	next;
	}				t_marineList;

	public:
		Squad(void);
		~Squad(void);
		Squad(Squad const & other);

		Squad &					operator=(Squad const & other);

		int						getCount(void) const;
		ISpaceMarine *			getUnit(int) const;
		int						push(ISpaceMarine *);

	private:
		void					copy(Squad const & other);
		t_marineList * &		getLastMarineListPtr(void);
		bool					isInMarineList(ISpaceMarine * marine) const;

		int						_size;
		t_marineList *			_marineList;
};

#endif