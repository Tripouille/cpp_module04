#ifndef KOALASTEROID_HPP 
# define KOALASTEROID_HPP
# include "IAsteroid.hpp"


class KoalaSteroid : public IAsteroid
{
	public:
		KoalaSteroid(void);
		virtual ~KoalaSteroid(void);
		KoalaSteroid(KoalaSteroid const & other);

		KoalaSteroid &					operator=(KoalaSteroid const & other);

		std::string						beMined(StripMiner const *) const;
		std::string						beMined(DeepCoreMiner const *) const;
		std::string						getName(void) const;

	private:
		void							copy(KoalaSteroid const & other);

		static std::string const		_name;


};

#endif