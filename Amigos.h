#pragma once
#include "Contactos.h"
#include <sstream>
#include <string>
using namespace std;

class Amigos : public Contactos
{
private:
	int numYears;
	string username;

public:
	Amigos();
	Amigos(string, string, int, int, string);
	virtual ~Amigos();
	virtual string toString()const;
};