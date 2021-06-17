#include <ICharacter.hpp>

ICharacter::ICharacter()
{
	std::cout << "ICharacter created" << std::endl;
}

//ICharacter::ICharacter()
//{
//	std::cout << ICharacter created << std::endl;
//}

ICharacter::~ICharacter()
{
}

ICharacter::ICharacter(ICharacter const &toCopy)
{
}

ICharacter &	ICharacter::operator = (const ICharacter & toCopy)
{
	if (this != &toCopy)
	{
	}
	return (*this);
}

std::ostream & operator << (std::ostream & stream, const ICharacter &ICharacter)
{
	return (stream);
}
