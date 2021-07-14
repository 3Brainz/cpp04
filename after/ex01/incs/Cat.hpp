#pragma once
#include <Animal.hpp>
#include <iostream>

class Cat : public Animal
{
public:
	Cat();
	Cat(Cat const &toCopy);
	Cat &	operator = (const Cat & toCopy);
	~Cat();
	/*getters*/
	/*setters*/
	/*methods*/
	void		makeSound(void);
protected:
	std::string _type;
private:
};
