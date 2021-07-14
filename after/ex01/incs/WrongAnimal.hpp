#pragma once
#include <iostream>

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(WrongAnimal const &toCopy);
	WrongAnimal &	operator = (const WrongAnimal & toCopy);
	virtual ~WrongAnimal();
	/*getters*/
	std::string	getType(void) const;
	/*setters*/
	void		setType(std::string const & type);
	/*methods*/
	virtual void		makeSound(void);
protected:
	std::string _type;
private:
};
