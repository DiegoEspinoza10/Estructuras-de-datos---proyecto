#ifndef CLIENTE_H
#define CLIENTE_H
#include "Articulo.h"
class Cliente:public Articulo {
public:
	Cliente();
	~Cliente();
	Cliente(string nombre,string id,string nombre_cliente);
	void setNombre_Cliente(string);
	string getNombre_Cliente();
	string toString();
	
private:
	string nombre_cliente;

};
#endif

