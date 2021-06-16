#pragma once
#include <iostream>
#include <Enemy.hpp>

class RadScorpion : public Enemy
{
public:
	RadScorpion();
	//RadScorpion();
	RadScorpion(RadScorpion const &toCopy);
	~RadScorpion();
	RadScorpion &	operator = (const RadScorpion & toCopy);
	void	takeDamage(int dmg);
protected:

private:

};

std::ostream & operator << (std::ostream & stream, const RadScorpion &RadScorpion);
