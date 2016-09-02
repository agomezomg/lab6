#include "Castigo.h"
#include <string>
using std::string;

Castigo::Castigo() {

}

Castigo::Castigo(string tipo, string nombre, int telefono):Contactos(tipo, nombre, telefono),
	aQuien(aQuien), metodo(metodo){

}

string Castigo::getAQuien() {
	return this -> aQuien;
}

string Castigo::getMetodo() {
	return this -> metodo;
}

virtual Castigo::toString()const {
	stringstream ss;
	ss << Contactos::toString() << " " << aQuien << " " << metodo;
	return ss.str();
}