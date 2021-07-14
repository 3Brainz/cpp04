#pragma once
#include <iostream>

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
	virtual void		makeSound(void) = 0;
protected:
	std::string _type;
private:
};
