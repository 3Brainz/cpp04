#include <Cat.hpp>

Cat::Cat() : Animal("Cat")
{
	std::cout << "A cat Spawned" << std::endl;
	_brain = new Brain;
}

Cat::Cat(Cat const &toCopy)
{
	delete (_brain);
	_brain = new Brain(*toCopy._brain);
	_type = toCopy.getType();
}

Cat &	Cat::operator = (const Cat & toCopy)
{
	if (this != &toCopy)
	{
		delete (_brain);
		_brain = new Brain(*toCopy._brain);
		Animal::operator = (toCopy);
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << getType() << " no more maio" << std::endl;
	delete (_brain);
}

/*getters*/
/*methods*/

void		Cat::makeSound(void)
{
	std::cout << "maio maio maio" << std::endl;
}