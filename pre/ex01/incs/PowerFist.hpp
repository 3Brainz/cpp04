#pragma once
#include <iostream>
#include <AWeapon.hpp>

class PowerFist : public AWeapon
{
public:
	PowerFist();
	PowerFist(PowerFist const &toCopy);
	~PowerFist();
	PowerFist &	operator = (const PowerFist & toCopy);
	/*getters*/
	/*funcs*/
	void	attack() const;
protected:

private:

};

std::ostream & operator << (std::ostream & stream, const PowerFist &PowerFist);
