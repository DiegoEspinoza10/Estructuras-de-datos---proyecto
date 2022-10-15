#include "ListaSucursales.h"

ListaSucursales::ListaSucursales() {
	this->ini=NULL;
}
void ListaSucursales::AgregarSucursal(Sucursales *Dato){
	NodoSucursales *Nuevo = new NodoSucursales(Dato);
	if(ini==NULL){
		ini = Nuevo;
	}else{
		Nuevo->setSig(ini);
		ini=Nuevo;
	}
}
void ListaSucursales::Mostrar(){
	NodoSucursales *aux = ini;
	while(aux!=NULL){
		cout<<aux->getDato()->toString()<<"\n";
		aux=aux->getSig();
	}
}
void ListaSucursales::EliminarSucursal(string ID){
	
	NodoSucursales *aux = ini;
	NodoSucursales *actual = ini;
	
	if(ini->getDato()->getID()==ID){
		ini=ini->getSig();
		delete aux;
	}else{ bool n = true; while(actual->getSig()!=NULL && n==true){
		if(actual->getSig()->getDato()->getID() == ID){
			aux=actual->getSig();
			actual->setSig(aux->getSig());
			n=false;
			cout<<"Sucursal eliminada corectamente!"<<endl;
			system("pause");
		}
		else{actual=actual->getSig();
		}
	}
	
	if(actual->getSig() == NULL){
		cerr<<"El ID de la sucursal digitada no existe!"<<endl; 
	}
	else{
		cerr<<"El ID de la sucursal digitada no existe!"<<endl; 
	}
	}
	
	delete aux;
}	
ListaSecciones ListaSucursales::AnadirLista(ListaSecciones ls){
	ls.Mostrar();
}
