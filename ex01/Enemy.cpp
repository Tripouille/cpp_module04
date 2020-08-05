#include "Enemy.hpp" 

Enemy::Enemy(int hp, std::string const& type)
	  : _hitPoints(hp), _type(type)
{
}

Enemy::~Enemy(void)
{
}

Enemy::Enemy(Enemy const& other)
{
	Enemy::copy(other);
}

Enemy&
Enemy::operator=(Enemy const& other)
{
	if (this != &other)
		Enemy::copy(other);
	return (*this);
}

void
Enemy::copy(Enemy const& other)
{
	_hitPoints = other._hitPoints;
	_type = other._type;
}

std::string const&
Enemy::getType() const
{
	return (_type);
}

int
Enemy::getHP() const
{
	return (_hitPoints);
}

void
Enemy::takeDamage(int dmg)
{
	if (dmg > 0)
		_hitPoints = _hitPoints <= dmg ? 0 : _hitPoints - dmg;
}

std::ostream&		operator<<(std::ostream& os, Enemy const& e)
{
	os << "Enemy: " << e.getType() << " HP: " <<  e.getHP() << std::endl;
	return (os);
}