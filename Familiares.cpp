#include "Contactos.h"
#include "Familiares.h"
#include <sstream>
#include <string>
using namespace std;

/*Familiares::Familiares() : Contactos() {

}*/

Familiares::Familiares(string tipo, string nombre, int telefono, string familiaridad, string parentesco):Contactos(tipo, nombre, telefono),
	familiaridad(familiaridad), parentesco(parentesco) {

}

Familiares::~Familiares() {

}

string Familiares::toString()const {
	stringstream ss;
	ss << Contactos::toString() << " " << familiaridad << " " << parentesco;
	return ss.str();
}