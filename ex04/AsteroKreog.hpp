#ifndef ASTEROKREOG_HPP 
# define ASTEROKREOG_HPP
# include "IAsteroid.hpp"

class AsteroKreog : public IAsteroid
{
	public:
		AsteroKreog(void);
		~AsteroKreog(void);
		AsteroKreog(AsteroKreog const & other);

		AsteroKreog &					operator=(AsteroKreog const & other);

		std::string						beMined(StripMiner const *) const;
		std::string						beMined(DeepCoreMiner const *) const;
		std::string						getName(void) const;

	private:
		void							copy(AsteroKreog const & other);

		static std::string const		_name;
};

#endif