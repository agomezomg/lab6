#pragma once
#include "Contactos.h"
#include <sstream>
#include <string>
using namespace std;

class Companeros : public Contactos
{
private:
	string clase;
	string trabajarJuntos;
public:
	Companeros();
	Companeros(string, string, int, string, string);
	virtual ~Companeros();
	virtual string toString()const;
};