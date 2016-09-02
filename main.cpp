#include "Contactos.h"
#include "Amigos.h"
#include "Familiares.h"
#include "Companeros.h"
#include "Castigo.h"
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main(int argc, char const *argv[])
{
	int opcion1 = 0;
	int opcion2;
	vector<Contactos*> friendList;

	while(opcion1!=3){
		cout<<"-------------Menú-----------------"<<endl;
		cout<<"1. Agregar contacto"<<endl;
		cout<<"2. Listar contactos"<<endl;
		cout<<"3. Salir"<<endl;
		cin>>opcion1;
		if(opcion1 == 1){

			opcion2 = 0;
			while(opcion2!=5){
				string name, username, consanguinidad, parentesco, clase, trabajarJuntos, puntuacion, tipoCastigo, tipoContacto;
				int telefono, years;
				cout<<"----------------Agregar contacto-----------------"<<endl;
				cout<<"Tipo de contacto:"<<endl;
				cout<<"1. Amigo"<<endl;
				cout<<"2. Familiar"<<endl;
				cout<<"3. Compañero"<<endl;
				cout<<"4. Castigo"<<endl;
				cout<<"5. Salir"<<endl;
				cin>>opcion2;
				if(opcion2 == 1){
					cout<<"------------------Agregar Amigo--------------"<<endl;
					cout<<"Ingrese el nombre: ";
					cin>>name;
					cout<<endl;
					cout<<"Ingrese el número telefonico: ";
					cin>>telefono;
					cout<<endl;
					cout<<"Ingrese la cantidad de años: ";
					cin>>years;
					cout<<endl;
					cout<<"Ingrese el username: ";
					cin>>username;
					cout<<endl;
					friendList.push_back(new Amigos("Amigo", name, telefono, years, username);
					cout<<"Se creo un nuevo amigo \n";
					
				}
				else if(opcion2 == 2){
					cout<<"------------------Agregar Familiar--------------"<<endl;
					cout<<"Ingrese el nombre: ";
					cin>>name;
					cout<<endl;
					cout<<"Ingrese el número telefonico: ";
					cin>>telefono;
					cout<<endl;
					cout<<"Ingrese el grado de consanguinidad: ";
					cin>>consanguinidad;
					cout<<endl;
					cout<<"Ingrese el grado de parentesco: ";
					cin>>parentesco;
					cout<<endl;
					friendList.push_back(new Familiares("Familiar", name, telefono, consanguinidad, parentesco);
					cout<<"Se creo un nuevo familiar \n";

				}
				else if(opcion2 == 3){
					cout<<"------------------Agregar Compañero--------------"<<endl;
					cout<<"Ingrese el nombre: ";
					cin>>name;
					cout<<endl;
					cout<<"Ingrese el número telefonico: ";
					cin>>telefono;
					cout<<endl;
					cout<<"Ingrese la clase que llevaron juntos: ";
					cin>>clase;
					cout<<endl;
					cout<<"¿Trabajaría en grupo con esta persona? [s/n]: ";
					cin>>trabajarJuntos;
					cout<<endl;
					friendList.push_back(new Companeros("Compañero", name, telefono, clase, trabajarJuntos);
					cout<<"Se creo un nuevo compañero \n";
					
				}
				else if(opcion2 == 4 ){
					cout<<"------------------Agregar Castigo--------------"<<endl;
					cout<<"Ingrese el nombre: ";
					cin>>name;
					cout<<endl;
					cout<<"Ingrese el número telefonico: ";
					cin>>telefono;
					cout<<endl;
					cout<<"Ingrese la puntuación: ";
					cin>>puntuacion;
					cout<<endl;
					cout<<"Ingrese el tipo de castigo: ";
					cin>>tipoCastigo;
					cout<<endl;
					friendList.push_back(new Castigo("Castigo", name, telefono, consanguinidad, parentesco);
					cout<<"Se creo un nuevo castigo \n";
					
				}
			}
		}

	}
	return 0;
}