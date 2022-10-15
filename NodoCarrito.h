#ifndef NODOCARRITO_H
#define NODOCARRITO_H
#include "Carrito.h"
class NodoCarrito {
public:
	NodoCarrito(Carrito *info, NodoCarrito *sig);
	~NodoCarrito();
	void setInfo(Carrito*);
	Carrito* getInfo();
	void setSig(NodoCarrito*);
	NodoCarrito* getSig();
	Carrito *info;
	NodoCarrito *sig;
	
private:
	
};

#endif

