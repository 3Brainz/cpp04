#pragma once
#include <iostream>
#include <ICharacter.hpp>

class Character : public ICharacter
{
public:
	Character();
	//Character();
	Character(Character const &toCopy);
	~Character();
	Character &	operator = (const Character & toCopy);

protected:

private:
	AMateria	_inventory[4];

};

std::ostream & operator << (std::ostream & stream, const Character &Character);
