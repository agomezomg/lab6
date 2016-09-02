#pragma once
#include <sstream>
#include <string>
using namespace std;

class Contactos
{
protected:
	string tipo;
	string nombre;
	int telefono;
public:
	Contactos();
	Contactos(string, string, int);
	virtual ~Contactos();
	virtual string toString()const;
};