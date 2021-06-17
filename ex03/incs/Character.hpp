#pragma once
#include <iostream>

class Character
{
public:
	Character();
	//Character();
	Character(Character const &toCopy);
	~Character();
	Character &	operator = (const Character & toCopy);

protected:

private:

};

std::ostream & operator << (std::ostream & stream, const Character &Character);
