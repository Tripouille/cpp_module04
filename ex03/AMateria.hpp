#ifndef AMATERIA_HPP 
# define AMATERIA_HPP
# include <string>
# include <iostream>

class ICharacter;
class AMateria
{
	public:
		AMateria(std::string const & type);
		virtual ~AMateria(void);
		AMateria(AMateria const & other);

		AMateria &					operator=(AMateria const & other);

		std::string const &			getType(void) const;
		unsigned int				getXP(void) const;
		virtual AMateria *			clone(void) const = 0;
		virtual void				use(ICharacter & target);

	private:
		AMateria(void);
		void						copy(AMateria const & other);

		unsigned int			_xp;
		std::string				_type;
};

#endif
