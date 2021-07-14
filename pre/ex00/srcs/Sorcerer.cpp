#include <Sorcerer.hpp>

Sorcerer::Sorcerer() : _name("Gino"), _title("Il Postino")
{
	// std::cout << "Basic constructor called: " << _name << " " << _title << std::endl; 
	std::cout << _name << ", " << _title << " is born!" << std::endl; 
}

Sorcerer::Sorcerer(const std::string & name, const std::string & title) : _name(name), _title(title)
{
	// std::cout << "Value constructor called: " << _name << " " << _title << std::endl;
	std::cout << _name << ", " << _title << " is born!" << std::endl;  
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << " " << _title <<" is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &toCopy)
{
	this->_name = toCopy._name;
	this->_title = toCopy._title;
	std::cout << toCopy._name << ", " << toCopy._title << " has just been clonated" << std::endl;
}

Sorcerer &	Sorcerer::operator = (const Sorcerer & toCopy)
{
	if (this != &toCopy)
	{
		this->_name = toCopy._name;
		this->_title = toCopy._title;
	}
	std::cout << _name << ", " << _title << " has just been clonated" << std::endl;
	return (*this);
}

std::ostream & operator << (std::ostream & stream, const Sorcerer &sorcerer)
{
	stream << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!" << std::endl;
	return (stream);
}

/*getters*/

std::string Sorcerer::getName(void) const
{
	return(this->_name);
}

std::string Sorcerer::getTitle(void) const
{
	return (this->_title);
}

/*funcs*/

void	Sorcerer::polymorph(Victim const & victim) const
{
	victim.getPolymorphed();
}