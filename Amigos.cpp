#include "Amigos.h"
#include <string>
using std::string;

Amigos::Amigos() {

}

Amigos::Amigos(string tipo, string nombre, int telefono):Contactos(tipo, nombre, telefono),
	numYears(numYears), username(username) {

}

Amigos::~Amigos() {

}

int Amigos::getNumYears() {
	return this -> numYears;
}

string Amigos::getUsername() {
	return this -> username;
}

string Amigos::toString()const {
	stringstream ss;
	ss << Contactos::toString() << " " << numYears << " " << username;
	return ss.str();
}