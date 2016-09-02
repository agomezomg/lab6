#include "Companeros.h"
#include <string>
using std::string;

Companeros::Companeros() {

}

Companeros::Companeros(string tipo, string nombre, int telefono):Contactos(tipo, nombre, telefono),
	clase(clase), trabajarJuntos(trabajarJuntos) {

}

Companeros::~Companeros() {

}

string Companeros::getClase() {
	return this -> clase;
}

string Companeros::getTrabajarJuntos() {
	return this -> trabajarJuntos;
}

string Companeros::toString()const {
	stringstream ss;
	ss << Contactos::toString() << " " << clase << " " << trabajarJuntos;
	return ss.str();
}