#include <Cat.hpp>

Cat::Cat() : Animal("Cat")
{
	std::cout << "A Cat spawned" << std::endl;
}

Cat::Cat(Cat const &toCopy)
{
	_type = toCopy.getType();
}

Cat &	Cat::operator = (const Cat & toCopy)
{
	if (this != &toCopy)
	{
		Animal::operator = (toCopy);
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << getType() << " no more maio" << std::endl;
}

/*getters*/
/*methods*/

void		Cat::makeSound(void)
{
	std::cout << "maio maio maio" << std::endl;
}