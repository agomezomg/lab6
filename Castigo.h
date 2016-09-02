#pragma once
#include "Contactos.h"
#include "Castigo.h"
#include <string>
using std::string;

class Castigo : Contactos
{
private:
	string aQuien, metodo;

public:
	Castigo();
	Castigo(string, string, int, string, string);
	virtual ~Castigo();
	string getaQuien();
	string getMetodo();
	virtual string toString()const;
};