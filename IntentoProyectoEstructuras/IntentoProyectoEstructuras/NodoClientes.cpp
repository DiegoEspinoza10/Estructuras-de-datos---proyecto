#include "NodoClientes.h"

NodoClientes::NodoClientes(Cliente *c, NodoClientes *sig):info(c),sig(sig){
	
}
NodoClientes::~NodoClientes(){
	
}
void NodoClientes::setInfo(Cliente *c){
	this->info=c;
}
Cliente* NodoClientes::getInfo(){
	return info;
}
void NodoClientes::setSig(NodoClientes *sig){
	this->sig=sig;
}
NodoClientes* NodoClientes::getSig(){
	return sig;
}

