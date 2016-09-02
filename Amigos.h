#pragma once
#include "Contactos.h"
#include <string>
using std::string;

class Amigos : Contactos
{
private:
	int numYears;
	string username;

public:
	Amigos();
	Amigos(int, string);
	virtual ~Amigos();
	int getNumYears();
	string getUsername();
	virtual string toString()const;
};