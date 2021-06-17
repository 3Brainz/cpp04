#pragma once
#include <iostream>

class ICharacter
{
public:
	ICharacter();
	//ICharacter();
	ICharacter(ICharacter const &toCopy);
	~ICharacter();
	ICharacter &	operator = (const ICharacter & toCopy);
	/*getters*/
	std::string & getName() const;
protected:

private:

};

std::ostream & operator << (std::ostream & stream, const ICharacter &ICharacter);
