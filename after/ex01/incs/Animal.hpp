#pragma once
#include <iostream>
#include <Brain.hpp>

class Animal
{
public:
	Animal();
	Animal(std::string type);
	Animal(Animal const &toCopy);
	Animal &	operator = (const Animal & toCopy);
	virtual ~Animal();
	/*getters*/
	std::string	getType(void) const;
	/*setters*/
	void		setType(std::string const & type);
	/*methods*/
	virtual void		makeSound(void);
protected:
	std::string _type;
	Brain		*_brain;
private:
};
