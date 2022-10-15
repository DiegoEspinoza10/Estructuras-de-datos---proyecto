#include "Articulo.h"

Articulo::Articulo(){
	this->nombre= "";
	this->id="";
}
Articulo::Articulo(string nombre, string id): nombre(nombre),id(id){
	
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
	
	x<<"Descripcion: "<<nombre<<"\tCodigo "<<id<<"\n";
	
	return x.str();
}


//archivos

Articulo* Articulo::Cargar(ifstream& estFile) {
	string nombre;
	string id;
	
	if (!(estFile >> nombre)) {
		return NULL;
	}
	if (!(estFile >> id)) {
		return NULL;
	}
	
	cout << "   --se cargo un registro--   \n";
	return new Articulo(nombre,id);
}

void Articulo::autoGuardar(ofstream& estFile) {
	cout << "    <<Guardando>>" << endl;
	cout << toStringArticulo() << endl;
	estFile << getID() << endl
		<< getNombre() << endl;
	
}
