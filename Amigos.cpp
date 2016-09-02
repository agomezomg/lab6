#include "Contactos.h"
#include "Amigos.h"
#include <sstream>
#include <string>
using namespace std;

Amigos::Amigos() : Contactos() {

}

Amigos::Amigos(string tipo, string nombre, int telefono, int numYears, string username):Contactos(tipo, nombre, telefono),
	numYears(numYears), username(username) {

}

Amigos::~Amigos() {

}

string Amigos::toString()const {
	stringstream ss;
	ss << Contactos::toString() << " " << numYears << " " << username;
	return ss.str();
}