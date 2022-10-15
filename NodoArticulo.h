#ifndef NODOARTICULO_H
#define NODOARTICULO_H
#include "Articulo.h"
class NodoArticulo {
public:
	NodoArticulo(Articulo *p, NodoArticulo *sig);
	~NodoArticulo();
	void setInfo(Articulo*);
	Articulo* getInfo();
	void setSig(NodoArticulo*);
	NodoArticulo* getSig();
	Articulo *info;
	NodoArticulo *sig;
private:

};

#endif

