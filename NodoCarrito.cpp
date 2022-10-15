#include "NodoCarrito.h"

NodoCarrito::NodoCarrito(Carrito *e, NodoCarrito* s) {
	info = e;
	sig = s;
}
NodoCarrito:: ~NodoCarrito() {
	
}
void NodoCarrito::setInfo(Carrito* e) {
	info = e; 
}
Carrito*  NodoCarrito::getInfo() { 
	return info; 
}
void NodoCarrito::setSig(NodoCarrito* s) {
	sig = s; 
}
NodoCarrito* NodoCarrito::getSig() {
	return sig; 
}
