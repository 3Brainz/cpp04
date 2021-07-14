#pragma once
#include <WrongAnimal.hpp>
#include <iostream>

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(WrongCat const &toCopy);
	WrongCat &	operator = (const WrongCat & toCopy);
	~WrongCat();
	/*getters*/
	/*setters*/
	/*methods*/
protected:
	std::string _type;
private:
};
