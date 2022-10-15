#include "Carrito.h"

Carrito::Carrito(){
	Articulo();
}
Carrito::Carrito(string nombre, string id) {
	this->setNombre(nombre);
	this->setID(id);
	

}
Carrito::~Carrito(){
	
}
string Carrito::toStringCarrito(){
	stringstream x;
	
	x<<"Descripcion: "<<getNombre()<<"\tCodigo "<<getID()<<"\n";
	
	return x.str();
}

