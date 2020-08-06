#ifndef MATERIASOURCE_HPP 
# define MATERIASOURCE_HPP

class MateriaSource
{
	public:
		MateriaSource(void);
		virtual ~MateriaSource(void);
		MateriaSource(MateriaSource const & other);

		MateriaSource &					operator=(MateriaSource const & other);

	private:
		void							copy(MateriaSource const & other);
};

#endif