#pragma once
#include <Victim.hpp>

class Allarmist : public Victim
{
public:
	Allarmist();
	Allarmist(std::string name);
	Allarmist(Allarmist const &toCopy);
	Allarmist &	operator = (const Allarmist & toCopy);
	~Allarmist();
	/*fuuncs*/
	void getPolymorphed(void) const;
private:
	/* data */
};
