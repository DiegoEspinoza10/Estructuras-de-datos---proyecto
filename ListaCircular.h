#ifndef LISTACIRCULAR_H
#define LISTACIRCULAR_H
#include"NodoCircular.h"
#include "ColaCliente.h"
class ListaCircular {
public:
	ListaCircular();
	
	bool vacia();
	void insertarInicio(int);
	void insertarFinal(int);
	void eliminarInicio();
	void eliminarFinal();
	NodoCircular* getInicio();
	ColaCliente AnadirCola(ColaCliente);
	void insertarCOLA(ColaCliente);
	~ListaCircular();
private:
	NodoCircular* primero;
	NodoCircular* ultimo;
	//---
	NodoClientes* c;
};

#endif

