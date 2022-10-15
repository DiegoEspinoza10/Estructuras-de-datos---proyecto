#include "NodoCircular.h"

NodoCircular::NodoCircular(int dato) {
	
	this->dato=dato;
	this->siguiente = NULL;
	this->anterior = NULL;
	
}

void NodoCircular::setDato(int dato){
	this->dato=dato;
}
void NodoCircular::setSiguiente(NodoCircular* siguiente){
	this->siguiente = siguiente;
}
void NodoCircular::setAnterior(NodoCircular* anterior){
	this->anterior=anterior;
}

int NodoCircular::getDato(){
	return dato;
}

NodoCircular* NodoCircular::getSiguiente(){
	return siguiente;
}
NodoCircular* NodoCircular::getAnterior(){
	return anterior;
}


NodoCircular::~NodoCircular() {
	
}

