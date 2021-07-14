#include <Animal.hpp>
#include <Dog.hpp>
#include <Cat.hpp>
#include <WrongCat.hpp>


int main()
{
	// Animal	ciao("ciao");
	Dog			*cane = new Dog;
	Cat			*gatto = new Cat;
	Dog			*cane1 = new Dog(*cane);
	Cat			*gatto1 = new Cat(*gatto);
	Animal		genericAnimal;
	char		c = 0;


	delete cane;
	delete gatto;
	delete cane1;
	delete gatto1;
	std::cout << "insert n" << std::endl;
	while (c != 'n')
	{
		std::cin >> c;
	}
	Animal		*factory[100];
	for (size_t i = 0; i < 50; i++)
	{
		factory[i] = new Dog;
	}
	for (size_t i = 50; i < 100; i++)
	{
		factory[i] = new Cat;
	}
	for (size_t i = 0; i < 100; i++)
	{
		delete factory[i];
	}
	return 0;
}