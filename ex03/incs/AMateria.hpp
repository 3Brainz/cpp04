#pragma once
#include <iostream>
class AMateria;
#include <ICharacter.hpp>

class AMateria
{
public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(AMateria const &toCopy);
	virtual	~AMateria();
	AMateria &	operator = (const AMateria & toCopy);
	/*getters*/
	std::string	const	&	getType() const;
	unsigned	int			getXP() const;
	/*funcs*/
	virtual	AMateria*		clone() const = 0;
	virtual	void			use(ICharacter& target);
protected:
	std::string		_type;
	unsigned	int _xp;
private:

};

