#include "Secciones.h"

Secciones::Secciones(int Numero, string Nombre) :Numero(Numero), Nombre(Nombre){
	
}
//stes
void Secciones::setNumero(int Numero){
	this->Numero=Numero;
}
void Secciones::setNombre(string Nombre){
	this->Nombre=Nombre;
}
//gets
int Secciones::getNumero(){
	return Numero;
}
string Secciones::getNombre(){
	return Nombre;
}
//metodos
string Secciones::toString(){
	stringstream ss;
	ss<<"Numero: "<<Numero<<"\n";
	ss<<"Nombre: "<<Nombre<<"\n";
	return ss.str();
}
