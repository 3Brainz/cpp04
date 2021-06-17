#include <Squad.hpp>

Squad::Squad() : _count(0)
{
}

Squad::~Squad()
{
	deleteSquad();
}

Squad::Squad(Squad const &toCopy) : _count(toCopy._count)
{
	deleteSquad();
	_squad = new ISpaceMarine*[toCopy._count];
	if (!toCopy._squad)
		return ;
	for(int i = 0; i < toCopy._count; i++)
	{
		_squad[i] = toCopy._squad[i]->clone();
	}
}

Squad &	Squad::operator = (const Squad & toCopy)
{
	if (this != &toCopy)
	{
		deleteSquad();
		_squad = new ISpaceMarine*[toCopy._count];
		if (!toCopy._squad)
			return (*this);
		for(int i = 0; i < toCopy._count; i++)
		{
			_squad[i] = toCopy._squad[i]->clone();
		}
	}
	return (*this);
}

/*getters*/

int			Squad::getCount() const
{
	return (_count);
}

ISpaceMarine* Squad::getUnit(int nu) const
{
	if (nu > _count)
		return (NULL);
	else
		return (_squad[nu]);
}

/*squad*/

int			Squad::push(ISpaceMarine *marine)
{
	ISpaceMarine	**temp;
	
	if (!marine)
		return (_count);
	for (int i = 0; i < _count; i++)
	{
		if (marine == _squad[i])
			return (_count);
	}
	temp = new	ISpaceMarine*[_count + 1];
	for (int i = 0; i < _count; i++)
	{
		temp[i] = _squad[i];
	}
	temp[_count] = marine;
	_count += 1;
	delete _squad;
	_squad = temp;
	return (_count);
}

void		Squad::deleteSquad()
{
	for (int i = 0; i < _count ; i++)
		delete _squad[i];
	delete (_squad);
}
