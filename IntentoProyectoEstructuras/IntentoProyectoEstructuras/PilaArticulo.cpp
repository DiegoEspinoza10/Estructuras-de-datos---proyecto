#include "PilaArticulo.h"

PilaArticulo::PilaArticulo () {
tope=NULL;
}
/*
PilaArticulo ::~PilaArticulo () {
	NodoArticulo *aux;
	while(tope!=NULL){
		aux=tope;
		tope= tope->getSig();
		delete (aux);
	}
}*/
void PilaArticulo ::Agregar(Articulo *p){
	NodoArticulo *nuevo= new NodoArticulo(p,tope);
	nuevo->info=p;
	if(tope==NULL){
		tope=nuevo;
		nuevo->sig=NULL;
		
	}else{
		nuevo->sig=tope;
		tope=nuevo;
	}

}
void PilaArticulo::eliminar(){
	NodoArticulo *aux;
	aux=tope;
	tope=aux->sig;
	delete(aux);
}
string PilaArticulo::mostrar(){
	NodoArticulo *aux=tope;
	aux=tope;
	while(aux!=NULL){
	cout<<aux->getInfo()->toStringArticulo()<<" "<<endl;
	aux=aux->getSig();
	}
}
bool PilaArticulo::isEmpty(){
	NodoArticulo *aux;
	aux=tope;
	if(tope==NULL){
		return true;
	}else{
		return false;
	}
}
string PilaArticulo::buscar(string c){
	NodoArticulo *aux;
	aux=tope;
	if(isEmpty()){
		return "0"; //esta vacia
	}
	else{
		bool n=true;
		while(aux != NULL && n==true){
			if(aux->getInfo()->getID()==c){
				n=false;
				return aux->getInfo()->toStringArticulo();//encontro el dato
			}
			aux = aux->getSig();
		}
		if(aux==NULL )
			  return "-1"; //no encontro el dato
	}
	return 0;
}

