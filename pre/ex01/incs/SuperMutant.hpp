#pragma once
#include <iostream>
#include <Enemy.hpp>

class SuperMutant : public Enemy
{
public:
	SuperMutant();
	SuperMutant(SuperMutant const &toCopy);
	~SuperMutant();
	SuperMutant &	operator = (const SuperMutant & toCopy);

	void	takeDamage(int dmg);
protected:

private:

};

std::ostream & operator << (std::ostream & stream, const SuperMutant &SuperMutant);
