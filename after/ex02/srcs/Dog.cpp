#include <Dog.hpp>

Dog::Dog() : Animal("Dog")
{
	std::cout << "A Dog spawned" << std::endl;
	_brain = new Brain;
}

Dog::Dog(Dog const &toCopy)
{
	delete (_brain);
	_brain = new Brain(*toCopy._brain);
	_type = toCopy.getType();
}

Dog &	Dog::operator = (const Dog & toCopy)
{
	if (this != &toCopy)
	{
		delete (_brain);
		_brain = new Brain(*toCopy._brain);
		Animal::operator = (toCopy);
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << getType() << " no more bark" << std::endl;
	delete (_brain);
}

/*getters*/
/*methods*/

void		Dog::makeSound(void)
{
	std::cout << "bark bark bark" << std::endl;
}