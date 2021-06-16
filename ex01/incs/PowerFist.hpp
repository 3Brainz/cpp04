#pragma once
#include <iostream>

class PowerFist
{
public:
	PowerFist();
	//PowerFist();
	PowerFist(PowerFist const &toCopy);
	~PowerFist();
	PowerFist &	operator = (const PowerFist & toCopy);

protected:

private:

};

std::ostream & operator << (std::ostream & stream, const PowerFist &PowerFist);
