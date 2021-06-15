#include <Peon.hpp>

Peon::Peon() : Victim()
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &toCopy) : Victim(toCopy)
{
	std::cout << "Zog zog." << std::endl;
}

Peon &	Peon::operator = (const Peon & toCopy)
{
	Victim::operator = (toCopy);
	return *this;
}

Peon::~Peon()
{
	std::cout << "Bleauark..." << std::endl;
}

/*funcs*/

void	Peon::getPolymorphed(void) const
{
	std::cout << getName() << " has been turned into a pink pony!" << std::endl;
}