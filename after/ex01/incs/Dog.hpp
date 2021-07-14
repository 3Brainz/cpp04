#pragma once
#include <Animal.hpp>
#include <iostream>

class Dog : public Animal
{
public:
	Dog();
	Dog(Dog const &toCopy);
	Dog &	operator = (const Dog & toCopy);
	~Dog();
	/*getters*/
	/*setters*/
	/*methods*/
	void		makeSound(void);
protected:
	std::string _type;
private:
};
