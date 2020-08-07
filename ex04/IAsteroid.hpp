#ifndef IASTEROID_HPP
# define IASTEROID_HPP
# include <string>

class StripMiner;
class DeepCoreMiner;
class IAsteroid
{
	public:
		virtual ~IAsteroid() {}
		virtual std::string beMined(StripMiner const *) const = 0;
		virtual std::string beMined(DeepCoreMiner const *) const = 0;
		virtual std::string getName() const = 0;
};

#endif