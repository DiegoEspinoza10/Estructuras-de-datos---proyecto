#include "Sucursales.h"

Sucursales::Sucursales(string ID, string Ubicacion) : ID(ID), Ubicacion(Ubicacion) {
	
}
//stes
void Sucursales::setID(string ID){
	this->ID=ID;
}
void Sucursales::setUbicacion(string Ubicacion){
	this->Ubicacion=Ubicacion;
}
//gets
string Sucursales::getID(){
	return ID;
}
string Sucursales::getUbicacion(){
	return Ubicacion;
}
//metodos
string Sucursales::toString(){
	stringstream ss;
	ss<<"ID: "<<getID()<<"\n";
	ss<<"Ubicacion: "<<getUbicacion()<<"\n";
	return ss.str();
}

//archivos

Sucursales* Sucursales::Cargar(ifstream& estFile) {
	string ubicacion;
	string id;
	
	if (!(estFile >> ubicacion)) {
		return NULL;
	}
	if (!(estFile >> id)) {
		return NULL;
	}
	
	cout << "   --se cargo un registro--   \n";
	return new Sucursales(id,ubicacion);
}

void Sucursales::autoGuardar(ofstream& estFile) {
	cout << "    <<Guardando>>" << endl;
	cout << toString() << endl;
	estFile << getID() << endl
		<< getUbicacion() << endl;
	
}
