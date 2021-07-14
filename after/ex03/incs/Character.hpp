#pragma once
#include <iostream>
#include <ICharacter.hpp>

class Character : public ICharacter
{
public:
	Character();
	Character(std::string name);
	Character(Character const &toCopy);
	~Character();
	Character &	operator = (const Character & toCopy);
	/*getters*/
	std::string const & getName() const;
	/*funcs*/
	void	invZero(void);
	void	invCleaner(void);
	void 	equip(AMateria* m);
	void	unequip(int idx);
	void 	use(int idx, ICharacter& target);
protected:

private:
	AMateria	*_inventory[4];
	int			_invCount;
	std::string	_name;
};

std::ostream & operator << (std::ostream & stream, const Character &Character);