#pragma once
#include <iostream>

class Enemy
{
public:
	Enemy();
	//Enemy();
	Enemy(Enemy const &toCopy);
	~Enemy();
	Enemy &	operator = (const Enemy & toCopy);

protected:

private:

};

std::ostream & operator << (std::ostream & stream, const Enemy &Enemy);
