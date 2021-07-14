#pragma once
#include <iostream>
#include <ISpaceMarine.hpp>

class TacticalMarine : public ISpaceMarine
{
public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const &toCopy);
	~TacticalMarine();
	TacticalMarine &	operator = (const TacticalMarine & toCopy);
	/*funcs*/
	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
	void foo() const;
protected:

private:

};

