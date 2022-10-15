#ifndef CARRITO_H
#define CARRITO_H
#include "Articulo.h"
class Carrito: public Articulo {
public:
	Carrito();
	Carrito(string nombre,string id);
	~Carrito();
	string toStringCarrito();
private:
};

#endif

