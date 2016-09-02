#pragma once
#include "Contactos.h"
#include <string>
using std::string;

class Companeros : Contactos
{
private:
	string clase;
	string trabajarJuntos;
public:
	Companeros();
	Companeros(string, string);
	virtual ~Companeros();
	string getClase();
	string getTrabajarJuntos();
	virtual string toString()const;
};