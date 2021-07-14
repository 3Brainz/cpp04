#pragma once
#include <iostream>

class Brain
{
public:
	Brain();
	Brain(Brain const &toCopy);
	Brain &	operator = (const Brain & toCopy);
	virtual ~Brain();
	/*getters*/
	std::string getIdea(void) const;
	/*setters*/
	/*methods*/
protected:
private:
	std::string	_ideas[100];
};
