#ifndef MATERIASOURCE_HPP 
# define MATERIASOURCE_HPP
# include <cstring>
# include "IMateriaSource.hpp"

class MateriaSource : IMateriaSource
{
	public:
		MateriaSource(void);
		virtual ~MateriaSource(void);
		MateriaSource(MateriaSource const & other);

		MateriaSource &					operator=(MateriaSource const & other);

		void							learnMateria(AMateria *);
		AMateria *						createMateria(std::string const & type);
		bool							sourceIsFull(void) const;

		enum {SOURCE_SIZE=4};

	private:
		void							copy(MateriaSource const & other);
		AMateria * *					getFreeSourceSlot(void);

		AMateria *						_source[SOURCE_SIZE];
};

#endif