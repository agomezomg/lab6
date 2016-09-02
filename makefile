Contactos: main.o Amigos.o Familiares.o Castigo.o Companeros.o Contactos.o
	g++ main.o Amigos.o Familiares.o Castigo.o Companeros.o Contactos.o -o Contactos

main.o:	main.cpp Contactos.h Familiares.h Castigo.h Companeros.h Amigos.h 
	g++ -c main.cpp

Amigos.o:	Amigos.cpp Contactos.h Amigos.h
	g++ -c Amigos.cpp

Familiares.o:	Familiares.cpp Contactos.h Familiares.h
	g++ -c Familiares.cpp

Castigo.o:	Castigo.cpp Contactos.h Castigo.h
	g++ -c Castigo.cpp

Companeros.o:	Companeros.cpp Contactos.h Companeros.h
	g++ -c Companeros.cpp

Contactos.o:	Contactos.cpp Contactos.h
	g++ -c Contactos.cpp
