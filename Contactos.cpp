#include "Contactos.h"
#include <string>
using namespace std;

Contactos::Contactos() {

}

Contactos::Contactos(string nombre, int telefono): nombre(nombre), telefono(telefono) {

}

Contactos::~Contactos() {

}

string Contactos::getNombre() {
	return this -> nombre;
}

int Contactos::getTelefono() {
	return this -> telefono;
}

string Contactos::toString()const{
	stringstream ss;
	ss << nombre << " " << telefono;
	return ss.str();
}