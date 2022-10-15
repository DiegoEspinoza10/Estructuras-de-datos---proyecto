#ifndef SUCURSALES_H
#define SUCURSALES_H
#include <sstream>

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
private:
	string ID;
	string Ubicacion;
};

#endif

