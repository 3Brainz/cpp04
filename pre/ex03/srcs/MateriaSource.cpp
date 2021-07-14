#include <MateriaSource.hpp>

MateriaSource::MateriaSource()
{
	storedZero();
}

MateriaSource::~MateriaSource()
{
	storedCleaner();
	storedZero();
}

MateriaSource::MateriaSource(MateriaSource const &toCopy)
{
	storedCleaner();
	storedZero();
	for (int i = 0; i < 4; i++)
	{
		if (_stored[i])
			_stored[i] = toCopy._stored[i]->clone(); 
	}
}

MateriaSource &	MateriaSource::operator = (const MateriaSource & toCopy)
{
	if (this != &toCopy)
	{
		storedCleaner();
		storedZero();
		for (int i = 0; i < 4; i++)
		{
			if (_stored[i])
				_stored[i] = toCopy._stored[i]->clone(); 
		}
	}
	return (*this);
}

std::ostream & operator << (std::ostream & stream, const MateriaSource &MateriaSource)
{
	(void) MateriaSource;
	stream << "This is an easter egg" << std::endl;
	return (stream);
}
/*funcs*/

void	MateriaSource::storedZero()
{
	for (int i = 0; i < 4; i++)
		_stored[i] = 0;
}
void	MateriaSource::storedCleaner()
{
	for (int i = 0; i < 4 ; i++)
		delete (_stored[i]);
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if ((_stored[i]) && type == _stored[i]->getType())
		{
			return (_stored[i]->clone());
		}
	}
	return (0);
}

void		MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_stored[i])
		{
			// std::cout << materia->getType() << std::endl;
			_stored[i] = materia->clone();
			// delete (materia);
			// _stored[i] = materia;
			return;
		}
	}
}
