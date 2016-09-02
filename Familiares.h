#pragma once
#include "Contactos.h"
#include <string>
using std::string;

class Familiares : Contactos
{
private:
	string familiaridad, parentesco;

public:
	Familiares();
	Familiares(string, string);
	virtual ~Familiares();
	string getFamiliaridad();
	strin getParentesco();
	virtual string toString()const;
};
