#pragma once
#include <iostream>
#include <IMateriaSource.hpp>

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	//MateriaSource();
	MateriaSource(MateriaSource const &toCopy);
	~MateriaSource();
	MateriaSource &	operator = (const MateriaSource & toCopy);
	/*funcs*/
	void learnMateria(AMateria* materia);
	AMateria* createMateria(std::string const & type);
	void	storedZero();
	void	storedCleaner();
protected:

private:
	AMateria	*_stored[4];
};

