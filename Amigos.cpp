#include "Amigos.h"
#include <string>
using std::string;

Amigos::Amigos() {

}

Amigos::Amigos(int numYears, string username) : numYears(numYears), username(username) {

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