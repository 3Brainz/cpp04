#include <Victim.hpp>

Victim::Victim() : _name("Vittimoze")
{
	std::cout << "Some random victim called "<< _name << " just appeared!" << std::endl;
}

Victim::Victim(const std::string & name) : _name(name)
{
	std::cout << "Some random victim called "<< _name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << _name <<" just died for no apparent reason!" << std::endl;
}

Victim::Victim(Victim const &toCopy)
{
	this->_name = toCopy._name;
	std::cout << toCopy._name << " has just been clonated" << std::endl;
}

Victim &	Victim::operator = (const Victim & toCopy)
{
	if (this != &toCopy)
	{
		this->_name = toCopy._name;
	}
	std::cout << _name << " has just been clonated" << std::endl;
	return (*this);
}

std::ostream & operator << (std::ostream & stream, const Victim & victim)
{
	stream << "I'm " << victim.getName() << " and I like otters!" << std::endl;
	return (stream);
}

/*getters*/

std::string Victim::getName(void) const
{
	return(this->_name);
}

/*funcs*/

void	Victim::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}
