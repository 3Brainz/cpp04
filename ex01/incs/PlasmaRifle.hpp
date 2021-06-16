#pragma once
#include <iostream>
#include <AWeapon.hpp>

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &toCopy);
	~PlasmaRifle();
	PlasmaRifle &	operator = (const PlasmaRifle & toCopy);
	/*getters*/
	/*funcs*/
	void	attack() const;
protected:

private:

};

std::ostream & operator << (std::ostream & stream, const PlasmaRifle &PlasmaRifle);
