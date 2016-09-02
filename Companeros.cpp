#include "Contactos.h"
#include "Companeros.h"
#include <sstream>
#include <string>
using namespace std;

Companeros::Companeros() : Contactos() {

}

Companeros::Companeros(string tipo, string nombre, int telefono, string clase, string trabajarJuntos):Contactos(tipo, nombre, telefono),
	clase(clase), trabajarJuntos(trabajarJuntos) {

}

Companeros::~Companeros() {

}

string Companeros::toString()const {
	stringstream ss;
	ss << Contactos::toString() << " " << clase << " " << trabajarJuntos;
	return ss.str();
}