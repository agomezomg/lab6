#include "Contactos.h"
#include <sstream>
#include <string>
using namespace std;

Contactos::Contactos() {

}

Contactos::Contactos(string tipo, string nombre, int telefono): tipo(tipo), nombre(nombre), telefono(telefono) {

}

Contactos::~Contactos() {

}

string Contactos::toString()const{
	stringstream ss;
	ss << tipo << " " << nombre << " " << telefono;
	return ss.str();
}