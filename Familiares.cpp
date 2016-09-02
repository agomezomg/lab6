#include "Contactos.h"
#include "Familiares.h"
#include <string>
using std::string;

Familiares::Familiares() : Contactos(){

}

Familiares::Familiares(string tipo, string nombre, int telefono):Contactos(tipo, nombre, telefono),
	familiaridad(familiaridad), parentesco(parentesco) {

}

Familiares::~Familiares() {

}

string Familiares::getFamiliaridad() {
	return this -> familiaridad;
}

string Familiares::getParentesco() {
	return this -> parentesco;
}

string Familiares::toString()const {
	stringstream ss;
	ss << Contactos::toString() << " " << familiaridad << " " << username;
	return ss.str();
}