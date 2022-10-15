#ifndef NODOCLIENTES_H
#define NODOCLIENTES_H
#include "Cliente.h"
class NodoClientes {
public:

	NodoClientes(Cliente *info, NodoClientes *sig);
	~NodoClientes();
	void setInfo(Cliente*);
	Cliente* getInfo();
	void setSig(NodoClientes*);
	NodoClientes* getSig();
	Cliente *info;
	NodoClientes *sig;
	
private:
	
};

#endif

