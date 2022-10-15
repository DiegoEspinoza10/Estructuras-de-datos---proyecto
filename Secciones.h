#ifndef SECCIONES_H
#define SECCIONES_H
#include<iostream>
#include <sstream>
#include<fstream>

using namespace std;
class Secciones {
public:
	Secciones(int, string);
	//sets
	void setNumero(int Numero);
	void setNombre(string Nombre);
	//gets
	int getNumero();
	string getNombre();
	//metodos
	string toString();
	static Secciones* Cargar(ifstream&);
	void autoGuardar(ofstream&);
private:
	int Numero;
	string Nombre;
};

#endif

