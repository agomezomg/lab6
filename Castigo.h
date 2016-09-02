#pragma once
#include "Contactos.h"
#include <sstream>
#include <string>
using namespace std;

class Castigo : public Contactos
{
private:
	string aQuien, metodo;

public:
	Castigo();
	Castigo(string, string, int, string, string);
	virtual ~Castigo();
	virtual string toString()const;
};