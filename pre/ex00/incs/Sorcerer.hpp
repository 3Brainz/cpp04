#pragma once
#include <iostream>
#include <Victim.hpp>

class Sorcerer
{
public:
	Sorcerer();
	Sorcerer(const std::string & name, const std::string & title);
	Sorcerer(Sorcerer const &toCopy);
	~Sorcerer();
	Sorcerer &	operator = (const Sorcerer & toCopy);
	/*getters*/
	std::string getName(void) const;
	std::string getTitle(void) const;
	/*funcs*/
	void	polymorph(Victim const & victim) const;
private:
	std::string	_name;
	std::string	_title;
};

std::ostream & operator << (std::ostream & stream, const Sorcerer &sorcerer);