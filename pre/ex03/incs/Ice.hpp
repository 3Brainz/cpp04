#pragma once
#include <iostream>
#include <AMateria.hpp>

class Ice : public AMateria
{
public:
	Ice();
	Ice(Ice const &toCopy);
	~Ice();
	Ice &	operator = (const Ice & toCopy);
	/*funcs*/
	AMateria*		clone() const;
	void			use(ICharacter& target);
protected:

private:

};
