#pragma once
#include <Victim.hpp>

class Peon : public Victim
{
public:
	Peon();
	Peon(std::string name);
	Peon(Peon const &toCopy);
	Peon &	operator = (const Peon & toCopy);
	~Peon();
	/*fuuncs*/
	void getPolymorphed(void) const;
private:
	/* data */
};
