#include "ColaCliente.h"

ColaCliente::ColaCliente() {
	adelante=NULL;
	atras=NULL;
}
void ColaCliente::insertar(Cliente *c){
	NodoClientes *aux = new NodoClientes(c,adelante);
	aux->info=c;//guardo el primer valor en aux
	aux->sig=NULL;//y aqui apunto al siguiente y lo pongo en nulo
	
	if(adelante==NULL){
		adelante=aux; //primer elemento en la primera psicion solo la primera vez que ingreso un valor se mete aqui 
	}else{
		atras->sig=aux; //apunto al siguiente elemento y lo pongo en null
	}
	atras=aux;//esto va afuera xqe tengo que asegurarme que guarde los valores que ya tengo
}
void ColaCliente::borrar(){
	
	NodoClientes *aux;
	aux = adelante;
	adelante = adelante->sig;
	delete(aux);
		
	
}
string ColaCliente::mostrar(){
	NodoClientes *aux;
	aux=adelante;
	while(aux!=NULL){
		cout<<aux->getInfo()->toString()<<" "<<endl;
		aux=aux->getSig();
	}
}
bool ColaCliente::isEmpty(){
	
	NodoClientes *aux;
	aux=adelante;
	if(adelante==NULL){
		return true;
	}else{
		return false;
	}
	
}
