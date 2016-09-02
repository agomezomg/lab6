#pragma once
#include <string>
using namespace std;

class Contactos
{
private:
	string tipo;
	string nombre;
	int telefono;
public:
	Contactos();
	Contactos(string, int);
	virtual ~Contactos();
	string getNombre();
	int getTelefono();
	virtual string toString()const;
};