#pragma once
#include  <iostream>

class Victim
{
public:
	Victim();
	Victim(const std::string & name);
	Victim(Victim const &toCopy);
	virtual ~Victim();
	Victim &	operator = (const Victim & toCopy);
	/*getters*/
	std::string getName(void) const;
	/*funcs*/
	virtual void getPolymorphed(void) const;
private:
	std::string	_name;
};

std::ostream & operator << (std::ostream & stream, const Victim & victim);
