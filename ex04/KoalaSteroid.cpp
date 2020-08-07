#include "KoalaSteroid.hpp" 

std::string const KoalaSteroid::_name = "Comet";

KoalaSteroid::KoalaSteroid(void)
{
}

KoalaSteroid::~KoalaSteroid(void)
{
}

KoalaSteroid::KoalaSteroid(KoalaSteroid const & other)
{
	KoalaSteroid::copy(other);
}

KoalaSteroid &
KoalaSteroid::operator=(KoalaSteroid const & other)
{
	if (this != &other)
		KoalaSteroid::copy(other);
	return (*this);
}

void
KoalaSteroid::copy(KoalaSteroid const & other)
{
	(void)other;
}

std::string
KoalaSteroid::beMined(StripMiner const * m) const
{
	(void)m;
	return ("Tartarite");
}

std::string
KoalaSteroid::beMined(DeepCoreMiner const * m) const
{
	(void)m;
	return ("Meium");
}

std::string
KoalaSteroid::getName(void) const
{
	return (_name);
}
