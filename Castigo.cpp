#include "Contactos.h"
#include "Castigo.h"
#include <sstream>
#include <string>
using namespace std;

Castigo::Castigo() : Contactos() {

}

Castigo::Castigo(string tipo, string nombre, int telefono, string aQuien, string metodo) : Contactos(tipo, nombre, telefono),
	aQuien(aQuien), metodo(metodo){
}

Castigo::~Castigo() {

}

string Castigo::toString()const {
	stringstream ss;
	ss << Contactos::toString() << " " << aQuien << " " << metodo;
	return ss.str();
}