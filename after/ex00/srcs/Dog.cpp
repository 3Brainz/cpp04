#include <Dog.hpp>

Dog::Dog() : Animal("Dog")
{
	std::cout << "a Dog Spawned" << std::endl;
}

Dog::Dog(Dog const &toCopy)
{
	_type = toCopy.getType();
}

Dog &	Dog::operator = (const Dog & toCopy)
{
	if (this != &toCopy)
	{
		Animal::operator = (toCopy);
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << getType() << " no more bark" << std::endl;
}

/*getters*/
/*methods*/

void		Dog::makeSound(void)
{
	std::cout << "bark bark bark" << std::endl;
}