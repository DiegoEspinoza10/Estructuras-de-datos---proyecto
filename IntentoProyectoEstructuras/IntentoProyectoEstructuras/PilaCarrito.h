#ifndef PILACARRITO_H
#define PILACARRITO_H
#include "NodoCarrito.h"
class PilaCarrito {
public:
	PilaCarrito();
	~PilaCarrito();
	void Agregar(Carrito *c);
	void eliminar();
	string mostrar();
	void eliminar_pila();
	string buscar(string c);
	bool isEmpty();
private:
	NodoCarrito *tope;
};

#endif
