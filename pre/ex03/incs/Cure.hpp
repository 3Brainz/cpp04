#pragma once
#include <iostream>
#include <AMateria.hpp>

class Cure : public AMateria
{
public:
	Cure();
	//Cure();
	Cure(Cure const &toCopy);
	~Cure();
	Cure &	operator = (const Cure & toCopy);
	/*funcs*/
	AMateria*		clone() const;
	void			use(ICharacter& target);
protected:

private:

};
