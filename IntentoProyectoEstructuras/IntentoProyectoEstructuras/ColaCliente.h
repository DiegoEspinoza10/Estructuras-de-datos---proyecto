#ifndef COLACLIENTE_H
#define COLACLIENTE_H
#include "NodoClientes.h"
class ColaCliente {
public:
	ColaCliente();
	void insertar(Cliente *c);
	void borrar();
	string mostrar();
	bool isEmpty();
	
private:
	NodoClientes *adelante;
	NodoClientes *atras;
};

#endif

