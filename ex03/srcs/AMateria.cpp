#include <AMateria.hpp>

AMateria::AMateria(): 
			_type("Unknown"), _xp(0)
{
}

AMateria::AMateria(std::string const & type) :
			_type(type), _xp(0)
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(AMateria const &toCopy) :
			_type(toCopy._type), _xp(toCopy._xp)
{
}

AMateria &	AMateria::operator = (const AMateria & toCopy)
{
	if (this != &toCopy)
	{
		_type = toCopy._type;
		_xp = toCopy._xp;
	}
	return (*this);
}

std::string	const	&	AMateria::getType() const
{
	return (_type);
}

unsigned	int			AMateria::getXP() const
{
	return (_xp);
}

/*funcs*/

void			AMateria::use(ICharacter& target)
{
	(void)target;
	_xp += 10;
}
