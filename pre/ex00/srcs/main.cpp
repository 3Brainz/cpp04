#include <Sorcerer.hpp>
#include <Victim.hpp>
#include <Peon.hpp>
#include <Pidgeon.hpp>
#include <Allarmist.hpp>

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	// std::cout << robert << jim;
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	std::cout << "_____________________________" << std::endl;
	Pidgeon phil("Phil");
	Allarmist karen("Karen");
	std::cout << phil << karen;
	robert.polymorph(phil);
	robert.polymorph(karen);

	return 0;
}