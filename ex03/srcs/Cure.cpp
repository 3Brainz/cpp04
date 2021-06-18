#include <Cure.hpp>

Cure::Cure() : AMateria("cure")
{
}

//Cure::Cure()
//{
//	std::cout << Cure created << std::endl;
//}

Cure::~Cure()
{
}

Cure::Cure(Cure const &toCopy) : AMateria(toCopy)
{
}

Cure &	Cure::operator = (const Cure & toCopy)
{
	AMateria::operator=(toCopy);
	return (*this);
}

AMateria*		Cure::clone() const
{
	Cure		*ret;
	ret = new Cure(*this);
	return (ret);
}

void			Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " <<target.getName() << "'s wounds *" << std::endl;
}