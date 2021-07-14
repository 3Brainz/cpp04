#include <Animal.hpp>
#include <Dog.hpp>
#include <Cat.hpp>
#include <WrongCat.hpp>


int main()
{
	// Animal	ciao("ciao");
	Dog			cane;
	Cat			gatto;
	WrongCat	gattio;
	cane.makeSound();
	gatto.makeSound();
	gattio.makeSound();
	std::cout << cane.getType() << std::endl;
	std::cout << gatto.getType() << std::endl;
	std::cout << gattio.getType() << std::endl;

	return 0;
}