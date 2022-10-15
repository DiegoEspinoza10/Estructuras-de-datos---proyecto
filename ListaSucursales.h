#ifndef LISTASUCURSALES_H
#define LISTASUCURSALES_H
#include <sstream>
#include <iostream>
#include "NodoSucursales.h"
#include "ListaSecciones.h"

using namespace std;

class ListaSucursales {
public:
	ListaSucursales();
	void AgregarSucursal(Sucursales *);
	void Mostrar();
	void EliminarSucursal(string);
	ListaSecciones AnadirLista(ListaSecciones);
private:
	NodoSucursales *ini;
};

#endif

