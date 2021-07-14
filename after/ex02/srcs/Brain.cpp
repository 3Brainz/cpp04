#include <Brain.hpp>

Brain::Brain()
{
	std::cout << "Brain bonjour" << std::endl;
}

Brain::Brain(Brain const &toCopy)
{
	(void)toCopy;
}

Brain &	Brain::operator = (const Brain & toCopy)
{
	if (this != &toCopy)
	{
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "brain fucked" << std::endl;
}

std::string Brain::getIdea(void) const
{
	return(_ideas[rand() % 100]);
}

/*getters*/
/*setters*/
/*methods*/
