#include "Familiares.h"
#include <string>
using std::string;

Familiares::Familiares() {

}

Familiares::Familiares(string familiaridad, string parentesco) : familiaridad(familiaridad), parentesco(parentesco) {

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