#ifndef LISTASECCIONES_H
#define LISTASECCIONES_H
#include "NodoSecciones.h"
#include "PilaArticulo.h"

typedef NodoSecciones *pnodo;

class ListaSecciones {
public:
	ListaSecciones();
	//~ListaSecciones();
	
	void Agregar(Secciones *);
	void Eliminar(int);
	void Mostrar();
	bool ListaVacia() { return plista == NULL; }
	void Siguiente();
	void Anterior();
	void Primero();
	void Ultimo();
	pnodo Actual();
	
	PilaArticulo AnadirPila(PilaArticulo);
private:
	pnodo plista;
};

#endif

