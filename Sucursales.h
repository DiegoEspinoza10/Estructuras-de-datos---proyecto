#ifndef SUCURSALES_H
#define SUCURSALES_H
#include <sstream>
#include<fstream>
#include<iostream>

using namespace std;
class Sucursales {
public:
	Sucursales(string, string);
	//sets
	void setID(string ID);
	void setUbicacion(string Ubicacion);
	//gets
	string getID();
	string getUbicacion();
	//metodos
	string toString();
	
	static Sucursales* Cargar(ifstream&);
	void autoGuardar(ofstream&);
private:
	string ID;
	string Ubicacion;
};

#endif

