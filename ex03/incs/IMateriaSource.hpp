#pragma once
#include <iostream>

class IMateriaSource
{
public:
	IMateriaSource();
	//IMateriaSource();
	IMateriaSource(IMateriaSource const &toCopy);
	~IMateriaSource();
	IMateriaSource &	operator = (const IMateriaSource & toCopy);

protected:

private:

};

std::ostream & operator << (std::ostream & stream, const IMateriaSource &IMateriaSource);
