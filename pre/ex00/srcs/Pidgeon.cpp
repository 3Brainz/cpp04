#include <Pidgeon.hpp>

Pidgeon::Pidgeon() : Victim()
{
	std::cout << "Glu Glu." << std::endl;
}

Pidgeon::Pidgeon(std::string name) : Victim(name)
{
	std::cout << "Glu Glu." << std::endl;
}

Pidgeon::Pidgeon(Pidgeon const &toCopy) : Victim(toCopy)
{
	std::cout << "glu Glu." << std::endl;
}

Pidgeon &	Pidgeon::operator = (const Pidgeon & toCopy)
{
	Victim::operator = (toCopy);
	return *this;
}

Pidgeon::~Pidgeon()
{
	std::cout << "omg i can't poo on you anymore..." << std::endl;
}

/*funcs*/

void	Pidgeon::getPolymorphed(void) const
{
	std::cout << getName() << " has been turned into a big ass dragon!" << std::endl;
}