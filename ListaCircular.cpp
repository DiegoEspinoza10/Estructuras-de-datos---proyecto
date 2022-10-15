#include "ListaCircular.h"

ListaCircular::ListaCircular() {
	
	this->primero = NULL;
	this->ultimo = NULL;
	
}

bool ListaCircular::vacia(){
	
	if(this->primero == NULL && this->ultimo==NULL){
		
		return true;
		
	}else{
		return false;
	}
}


void ListaCircular::insertarInicio(int dato){
	
	NodoCircular* nuevoNodo = new NodoCircular(dato);
	if(vacia()==true){
		this->primero = nuevoNodo;
		this->ultimo = nuevoNodo;
		this->ultimo->setSiguiente(this->primero);
		this->primero->setAnterior(this->ultimo);
		
	}else{
		
		nuevoNodo->setSiguiente(this->primero);
		this->primero->setAnterior(nuevoNodo);
		this->primero = nuevoNodo;
		this->ultimo->setSiguiente(this->primero);
		this->primero->setAnterior(this->ultimo);
		
		
	}
}

void ListaCircular::insertarFinal(int dato){
	
	NodoCircular* nuevoNodo = new NodoCircular(dato);
	if(vacia()==true){
		
		this->primero = nuevoNodo;
		this->ultimo = nuevoNodo;
		this->ultimo->setSiguiente(this->primero);
		this->primero->setAnterior(this->ultimo);
	}else{
		
		this->ultimo->setSiguiente(nuevoNodo);
		nuevoNodo->setAnterior(this->ultimo);
		this->ultimo = nuevoNodo;
		this->ultimo->setSiguiente(this->primero);
		this->primero->setAnterior(this->ultimo);
		
		
	}
}


void ListaCircular::eliminarInicio(){
	
	if(vacia() == true){
		cout<<"Lista vacia"<<endl;
	}else{
		
		if(this->primero == this->ultimo){
			this->primero = NULL;
			this->ultimo = NULL;
		}else{
			NodoCircular* aux = this->primero;
			this->primero = this->primero->getSiguiente();
			aux->setSiguiente(NULL);
			this->ultimo->setSiguiente(this->primero);
			delete aux;
			
		}
		
	}
}


void ListaCircular::eliminarFinal(){
	
	if(vacia() == true){
		cout<<"Lista vacia"<<endl;
	}else{
		
		if(this->primero == this->ultimo){
			this->primero = NULL;
			this->ultimo = NULL;
		}else{
			 
			NodoCircular* aux = this->primero;
			while(aux->getSiguiente()!=this->ultimo){
				aux = aux->getSiguiente();
			}
			NodoCircular *auxiliarUltimo= this->ultimo;
			aux->setSiguiente(NULL);
			this->ultimo = aux;
			this->ultimo->setSiguiente(this->primero);
			delete auxiliarUltimo;
		}
		
	}
	
}

NodoCircular* ListaCircular::getInicio(){
	
	NodoCircular* aux = this->primero;
	if(vacia()==true){
		return NULL;
	}else{
		return aux;
	}
	
}
ListaCircular::~ListaCircular() {
	
}

//----------------
ColaCliente ListaCircular::AnadirCola(ColaCliente co){
	co.mostrar();
}

