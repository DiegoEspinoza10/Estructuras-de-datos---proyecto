#ifndef NODOCIRCULAR_H
#define NODOCIRCULAR_H
#include<iostream>

using namespace std;

class NodoCircular {
public:
	NodoCircular(int);
    void setDato(int);
	void setSiguiente(NodoCircular*);
	void setAnterior(NodoCircular*);
	int getDato();
	NodoCircular* getSiguiente();
	NodoCircular* getAnterior();
	
	
	~NodoCircular();
private:
	int dato;
	NodoCircular* siguiente;
	NodoCircular* anterior;
	
	
};

#endif

