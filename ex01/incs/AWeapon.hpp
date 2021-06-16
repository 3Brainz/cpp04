#pragma once
#include <iostream>

class AWeapon
{
public:
	AWeapon();
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const &toCopy);
	virtual ~AWeapon();
	AWeapon &	operator = (const AWeapon & toCopy);
	/*getters*/
	std::string	const	getName() const;
	int 				getAPCost(void) const;
    int 				getDamage(void) const;
	/*functions*/
	virtual		void	attack() const = 0;
protected:

private:
	std::string _name;
	int			_atkDamage;
	int			_APCost;
};

std::ostream & operator << (std::ostream & stream, const AWeapon &weapon);
