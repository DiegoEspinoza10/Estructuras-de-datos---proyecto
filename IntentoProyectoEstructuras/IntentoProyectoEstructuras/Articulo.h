#ifndef ARTICULO_H
#define ARTICULO_H
#include <iostream>
#include <sstream>
using namespace std;
class Articulo {
public:
	Articulo();
	Articulo(string nombre, string id);
	virtual ~Articulo();
	void setNombre(string);
	void setID(string);
	string getNombre();
	string getID();
	string toStringArticulo();
	
private:
	string nombre;
	string id;
};

#endif

