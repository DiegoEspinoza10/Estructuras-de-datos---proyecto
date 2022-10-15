#include "NodoArticulo.h"

NodoArticulo::NodoArticulo(Articulo *e, NodoArticulo* s) {
	info = e;
	sig = s;
}
NodoArticulo:: ~NodoArticulo() {
	
}
void NodoArticulo::setInfo(Articulo* e) {
	info = e; 
}
Articulo*  NodoArticulo::getInfo() { 
	return info; 
}
void NodoArticulo::setSig(NodoArticulo* s) {
	sig = s; 
}
NodoArticulo* NodoArticulo::getSig() {
	return sig; 
}
