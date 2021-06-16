#pragma once
#include <iostream>

class PlasmaRifle
{
public:
	PlasmaRifle();
	//PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &toCopy);
	~PlasmaRifle();
	PlasmaRifle &	operator = (const PlasmaRifle & toCopy);

protected:

private:

};

std::ostream & operator << (std::ostream & stream, const PlasmaRifle &PlasmaRifle);
