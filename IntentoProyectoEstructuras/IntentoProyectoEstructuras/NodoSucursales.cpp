#include "NodoSucursales.h"

NodoSucursales::NodoSucursales(Sucursales *su) {
	this->Dato=su;
	this->Sig=NULL;
}
void NodoSucursales::setDato(Sucursales *s){
	this->Dato=s;
}
Sucursales *NodoSucursales::getDato(){
	return Dato;
}
void NodoSucursales::setSig(NodoSucursales *n){
	this->Sig=n;
}
NodoSucursales *NodoSucursales::getSig(){
	return Sig;
}

