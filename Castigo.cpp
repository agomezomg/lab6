#include "Castigo.h"
#include <string>
using std::string;

Castigo::Castigo() {

}

Castigo::Castigo(string aQuien, string metodo) : aQuien(aQuien), metodo(metodo) {

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