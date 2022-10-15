#ifndef SECCIONES_H
#define SECCIONES_H
#include <sstream>

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
private:
	int Numero;
	string Nombre;
};

#endif

