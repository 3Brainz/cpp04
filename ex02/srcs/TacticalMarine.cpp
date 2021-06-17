#include <TacticalMarine.hpp>

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &toCopy)
{
	toCopy.foo();
}

TacticalMarine &	TacticalMarine::operator = (const TacticalMarine & toCopy)
{
	if (this != &toCopy)
	{
	}
	return (*this);
}

/*funcs*/

ISpaceMarine*	TacticalMarine::clone() const
{
	ISpaceMarine	*ret;

	ret = new TacticalMarine(*this);
	return (ret);
}
void			TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}
void			TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}
void			TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;	
}

void			TacticalMarine::foo() const
{

}