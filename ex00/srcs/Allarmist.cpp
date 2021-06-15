#include <Allarmist.hpp>

Allarmist::Allarmist() : Victim()
{
	std::cout << "Aaaaaaaaaaaaaaaa" << std::endl;
}

Allarmist::Allarmist(std::string name) : Victim(name)
{
	std::cout << "Aaaaaaaaaaaaaaaa" << std::endl;
}

Allarmist::Allarmist(Allarmist const &toCopy) : Victim(toCopy)
{
	std::cout << "Aaaaaaaaaaaaaaaa" << std::endl;
}

Allarmist &	Allarmist::operator = (const Allarmist & toCopy)
{
	Victim::operator = (toCopy);
	return *this;
}

Allarmist::~Allarmist()
{
	std::cout << "BBBBBBBBBBBBBBBB" << std::endl;
}

/*funcs*/

void	Allarmist::getPolymorphed(void) const
{
	std::cout << getName() << " has been turned into a Karen!" << std::endl;
}