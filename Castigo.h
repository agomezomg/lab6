#pragma once
#include "Contactos.h"
#include <string>
using std::string;

class Castigo : Contactos
{
private:
	string aQuien, metodo;

public:
	Castigo();
	virtual ~Castigo();
	string getaQuien();
	string getMetodo();
	virtual string toString()const;
};