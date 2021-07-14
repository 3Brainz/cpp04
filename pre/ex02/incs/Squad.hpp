#pragma once
#include <iostream>
#include <ISquad.hpp>

class Squad : public ISquad
{
public:
	Squad();
	//Squad();
	Squad(Squad const &toCopy);
	~Squad();
	Squad &	operator = (const Squad & toCopy);
	/*getters*/
	int				getCount() const;
	ISpaceMarine*	getUnit(int nu) const;
	/*funcs*/
	int		push(ISpaceMarine *marine);
	void	deleteSquad();
protected:

private:
	int				_count;
	ISpaceMarine	**_squad;
};
