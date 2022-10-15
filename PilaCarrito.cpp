#include "PilaCarrito.h"

PilaCarrito::PilaCarrito() {
	tope=NULL;
}

PilaCarrito::~PilaCarrito() {
	NodoCarrito *aux;
	while(tope!=NULL){
		aux=tope;
		tope= tope->getSig();
		delete (aux);
	}
}
void PilaCarrito::Agregar(Carrito *c){
	NodoCarrito *nuevo= new NodoCarrito(c,tope);
	nuevo->info=c;
	if(tope==NULL){
		tope=nuevo;
		nuevo->sig=NULL;
		
	}else{
		nuevo->sig=tope;
		tope=nuevo;
	}
	
}
void PilaCarrito::eliminar(){
	NodoCarrito *aux;
	aux=tope;
	tope=aux->sig;
	delete(aux);
}
string PilaCarrito::mostrar(){
	NodoCarrito *aux=tope;
	aux=tope;
	while(aux!=NULL){
		cout<<aux->getInfo()->toStringCarrito()<<" "<<endl;
		aux=aux->getSig();
	}
}
bool PilaCarrito::isEmpty(){
	NodoCarrito *aux;
	aux=tope;
	if(tope==NULL){
		return true;
	}else{
		return false;
	}
}
string PilaCarrito::buscar(string c){
	NodoCarrito *aux;
	aux=tope;
	if(isEmpty()){
		return "0"; //esta vacia
	}
	else{
		bool n=true;
		while(aux != NULL && n==true){
			if(aux->getInfo()->getID()==c){
				n=false;
				return aux->getInfo()->toStringCarrito();//encontro el dato
			}
			aux = aux->getSig();
		}
		if(aux==NULL )
			  return "-1"; //no encontro el dato
	}
	return 0;
}
PilaArticulo PilaCarrito::AnadirArticulo(PilaArticulo pa){
	pa.mostrar();
}
