#ifndef MENU_H
#define MENU_H
#include "Sucursales.h"
#include "Secciones.h"
#include "Articulo.h"
#include "Carrito.h"
#include "Cliente.h"
#include "ListaSucursales.h"
#include "ListaSecciones.h"
#include "ColaCliente.h"
#include "PilaArticulo.h"
#include "PilaCarrito.h"
#include "ListaCircular.h"
#include "windows.h"
#include<time.h>

class Menu {
public:
	Menu();
	void MenuPrincipal();
	void metodo();
	void ingresarSucursal();
	void eliminarSucursal();
	void ingresarSeccion();
	void eliminarSeccion();
	void ingresarProducto();
	void eliminarProducto(string c);
	void cargarDatos();
	int horaDeSalida();
	
	~Menu();
private:
	
};

#endif

