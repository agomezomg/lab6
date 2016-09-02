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
	string getParentesco();
	virtual string toString()const;
};
