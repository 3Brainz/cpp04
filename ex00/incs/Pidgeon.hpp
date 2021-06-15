#pragma once
#include <Victim.hpp>

class Pidgeon : public Victim
{
public:
	Pidgeon();
	Pidgeon(std::string name);
	Pidgeon(Pidgeon const &toCopy);
	Pidgeon &	operator = (const Pidgeon & toCopy);
	~Pidgeon();
	/*fuuncs*/
	void getPolymorphed(void) const;
private:
	/* data */
};
