#include "ListaSecciones.h"

ListaSecciones::ListaSecciones() :plista(NULL) {
	
}
/*
ListaSecciones::~ListaSecciones() {
	pnodo aux;
	
	while(plista) {
		aux = plista;
		plista = plista->siguiente;
		delete aux;
	}
}*/
void ListaSecciones::Siguiente() {
	if(plista) plista = plista->siguiente;
}

void ListaSecciones::Anterior() {
	if(plista) plista = plista->anterior;
}

void ListaSecciones::Primero() {
	while(plista && plista->anterior) plista = plista->anterior;
}

void ListaSecciones::Ultimo() {
	while(plista && plista->siguiente) plista = plista->siguiente;
}
void ListaSecciones::Agregar(Secciones *Dato) {
	pnodo nuevo;
	Primero();
	// Si la lista está vacía
	if(ListaVacia() || plista->Dato > Dato) {
	
		nuevo = new NodoSecciones(Dato, plista, NULL);
		if(!plista) plista = nuevo;
		else plista->anterior = nuevo;
	}
	else {
		while(plista->siguiente && plista->siguiente->Dato <= Dato) Siguiente();
		// Creamos un nuevo nodo después del nodo actual
		nuevo = new NodoSecciones(Dato, plista->siguiente, plista);
		plista->siguiente = nuevo;
		if(nuevo->siguiente) nuevo->siguiente->anterior = nuevo;
	}
}
void ListaSecciones::Mostrar() {
	pnodo nodo;
		Primero();
		nodo = plista;
		while(nodo) {
			cout << nodo->Dato->toString()<<endl;
			nodo = nodo->siguiente;
		}	cout << endl;
}

PilaArticulo ListaSecciones::AnadirPila(PilaArticulo pa){
	pa.mostrar();
}
