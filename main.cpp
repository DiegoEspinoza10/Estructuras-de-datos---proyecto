#include<iostream>
#include "PilaArticulo.h"
#include "PilaCarrito.h"
#include "ColaCliente.h"
#include "Articulo.h"
#include "Carrito.h"
#include "Cliente.h"
#include "Menu.h"
//jonathan pineda aleman
using namespace std;

int main () {
	
	Menu *MainMenu = new Menu();
	MainMenu->MenuPrincipal();
	return 0;
	delete MainMenu;
	
	return 0;
};
