#ifndef ARTICULO_H
#define ARTICULO_H
#include <iostream>
#include <sstream>
#include<fstream>

using namespace std;
class Articulo {
public:
	Articulo();
	Articulo(string nombre, string id);
	//virtual ~Articulo();
	void setNombre(string);
	void setID(string);
	string getNombre();
	string getID();
	string toStringArticulo();
	static Articulo* Cargar(ifstream&);
	void autoGuardar(ofstream&);
private:
	string nombre;
	string id;
};

#endif

