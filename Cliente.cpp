#include "Cliente.h"

Cliente::Cliente(){
	this->nombre_cliente= "";
	Articulo();
}
Cliente::Cliente(string nombre, string id,string nombre_cliente) {
	this->nombre_cliente=nombre_cliente;
	this->setNombre(nombre);
	this->setID(id);
}
Cliente::~Cliente(){
	
}
void Cliente::setNombre_Cliente(string nombre_cliente){
	this->nombre_cliente=nombre_cliente;
}
string Cliente::getNombre_Cliente(){
	return nombre_cliente;
}
string Cliente::toString(){
	stringstream x;
	x<<"Cliente: "<<nombre_cliente<<"\n";
	x<<toStringArticulo();
	return x.str();
}
