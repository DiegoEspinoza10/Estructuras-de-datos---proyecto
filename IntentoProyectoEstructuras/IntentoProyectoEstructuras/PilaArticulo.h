#ifndef PILAARTICULO_H
#define PILAARTICULO_H
#include "NodoArticulo.h"
class PilaArticulo {
public:
	PilaArticulo ();
	//~PilaArticulo ();
	void Agregar(Articulo *p);
	void eliminar();
	string mostrar();
	void eliminar_pila();
	string buscar(string c);
	bool isEmpty();
private:
	NodoArticulo *tope;
};

#endif

