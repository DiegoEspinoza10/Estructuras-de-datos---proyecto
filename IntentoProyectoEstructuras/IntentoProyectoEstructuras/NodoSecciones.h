#ifndef NODOSECCIONES_H
#define NODOSECCIONES_H
#include <iostream>
#include "Secciones.h"

using namespace std;

class NodoSecciones {
public:
	NodoSecciones(Secciones *, NodoSecciones *, NodoSecciones *);
	Secciones *Dato;
	NodoSecciones *siguiente;
	NodoSecciones *anterior;
private:
	
	friend class ListaSelecciones;
};

#endif

