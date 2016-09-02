#pragma once
#include "Contactos.h"
#include <sstream>
#include <string>
using namespace std;

class Familiares : public Contactos
{
private:
	string familiaridad, parentesco;

public:
	Familiares();
	Familiares(string, string, int, string, string);
	virtual ~Familiares();
	virtual string toString()const;
};
