#ifndef NODOSUCURSALES_H
#define NODOSUCURSALES_H
#include "Sucursales.h"

class NodoSucursales {
public:
	NodoSucursales(Sucursales *);
	//sets
	void setDato(Sucursales *s);
	void setSig(NodoSucursales *n);
	//gets
	Sucursales *getDato();
	NodoSucursales *getSig();
private:
	Sucursales *Dato;
	NodoSucursales *Sig;
};

#endif

