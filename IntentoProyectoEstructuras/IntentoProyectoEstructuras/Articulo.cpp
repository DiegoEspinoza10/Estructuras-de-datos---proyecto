#include "Articulo.h"

Articulo::Articulo(){
	this->nombre= "";
	this->id="";
}
Articulo::Articulo(string nombre, string id): nombre(nombre),id(id){
	
}
Articulo::~Articulo(){
	
}
void Articulo::setNombre(string nombre){
	this->nombre=nombre;
}
void Articulo::setID(string id){
	this->id=id;
}
string Articulo::getNombre(){
	return nombre;
}
string Articulo::getID(){
	return id;
}
string Articulo::toStringArticulo(){
	stringstream x;
	
	x<<"Descripcion: "<<getNombre()<<"\tCodigo "<<getID()<<"\n";
	
	return x.str();
}
