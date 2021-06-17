#pragma once
#include <iostream>
#include <ISpaceMarine.hpp>

class AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator();
	//AssaultTerminator();
	AssaultTerminator(AssaultTerminator const &toCopy);
	~AssaultTerminator();
	AssaultTerminator &	operator = (const AssaultTerminator & toCopy);
	/*funcs*/
	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
	void foo() const;
protected:

private:

};
