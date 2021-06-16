#pragma once
#include <iostream>
#include <Enemy.hpp>
#include <AWeapon.hpp>

class Character
{
public:
	Character();
	Character(std::string const & name);
	Character(Character const & toCopy);
	~Character();
	Character &	operator = (const Character & toCopy);
	/*getters*/
	std::string  	getName() const;
	int				getAP() const;
	AWeapon			*getWeapon() const;
	/*funcs*/
	void recoverAP();
    void equip(AWeapon *weapon);
	void attack(Enemy *enemy);
protected:
private:
	std::string			_name;
	int					_AP;
	AWeapon				*_weapon;
};

std::ostream & operator << (std::ostream & stream, const Character &Character);
