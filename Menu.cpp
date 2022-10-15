#include "Menu.h"

Menu::Menu() {}

int opcion;
int Pasillo;
PilaArticulo *archivoP = new PilaArticulo();
ListaSecciones *ListaSeccion = new ListaSecciones();
ListaSecciones *ListaSeccionm = new ListaSecciones();
ColaCliente *cola=new ColaCliente();  
Cliente* c = new Cliente("Producto","1234","Jonathan"); //cliente que se simula estar en la cola
Cliente* c2 = new Cliente("Producto","1235","Maria");
Cliente* c3 = new Cliente("Producto","1236","Pedro");
ListaCircular *fila = new ListaCircular();  //para agregar la cola a una lista circulas
ListaSecciones *ListaSeccion2 = new ListaSecciones();
PilaArticulo *maderas =new PilaArticulo();	//pila madera: es una pila que tiene un comjunto de productos en este caso maderas
PilaArticulo *comidas =new PilaArticulo();	//pila madera: es una pila que tiene un comjunto de productos en este caso maderas
PilaArticulo *plasticos =new PilaArticulo();
PilaArticulo *pilaGeneral =new PilaArticulo();
ofstream salidaSucursales;
ifstream entradaSucursales;
ofstream salidaSecciones;
ifstream entradaSecciones;
ofstream salidaArticulos;
ifstream entradaArticulos;

ListaSucursales *LS = new ListaSucursales();

void Menu::MenuPrincipal(){
	
	Sucursales *s = new Sucursales("1", "Alajuela");//sucursal
	/*ListaSucursales *LS = new ListaSucursales();*/
	LS->AgregarSucursal(s);
	
	Sucursales *Heredia = new Sucursales("2", "Heredia"); //sucursa2
	ListaSucursales *LSHeredia = new ListaSucursales();
	LS->AgregarSucursal(Heredia);
	
	Sucursales *Cartago = new Sucursales("3", "Cartago"); //sucursal3
	ListaSucursales *LSCartago = new ListaSucursales();
	LS->AgregarSucursal(Cartago);
	
	Secciones *seccion = new Secciones(1,"Madera"); //seccion
	Secciones *seccionuno = new Secciones (2, "Comidas");
	Secciones *seccion1 = new Secciones(3,"Plastico"); //seccion
	ListaSecciones *ListaSeccion = new ListaSecciones();
	ListaSecciones *ListaSeccionm = new ListaSecciones();
	ListaSecciones *ListaSeccion2 = new ListaSecciones();
	ListaSeccion->Agregar(seccion);
	ListaSeccion->Agregar(seccionuno);
	ListaSeccion->Agregar(seccion1);
	
	Articulo* a = new Articulo("Platano","01");	//articulos: son productos que tienen un codigo y un nombre
	Articulo* a2 = new Articulo("Pan","02");
	Articulo* a3 = new Articulo("Leche","03");
	Articulo* a4 = new Articulo("Roble","123");
	Articulo* a5 = new Articulo("Cocobolo","312");
	Articulo* a6 = new Articulo("adhesivo","432");
	Articulo* a7 = new Articulo("poliestireno","777");
	
	comidas->Agregar(a3);
	comidas->Agregar(a4);
	comidas->Agregar(a5);
	plasticos->Agregar(a6);
	plasticos->Agregar(a7);
	
	PilaCarrito *pila1=new PilaCarrito();		//pila carrito: simula la accion de pasar un producto de un estante a un Carrito
	ColaCliente *cola=new ColaCliente();  		//cola cliente, simula el cliente con el carrito en un cola esperando ser atendidos
	string nombre_cliente,nombre, id;		//datos del Cliente
	ListaCircular *fila = new ListaCircular();  //para agregar la cola a una lista circulas
	Cliente* c = new Cliente("Producto","1234","Jonathan"); //cliente que se simula estar en la cola
//	Cliente* c2 = new Cliente("Producto","1235","Maria");
//	Cliente* c3 = new Cliente("Producto","1236","Pedro");
	
	
	//productos de la seccion plasticos
//	Articulo* a6 = new Articulo("adhesivo","432");
//	Articulo* a7 = new Articulo("poliestireno","777");
	PilaArticulo *plasticos =new PilaArticulo();
	
	
//	Articulo* a = new Articulo("Platano","01");	//articulos: son productos que tienen un codigo y un nombre
//	Articulo* a2 = new Articulo("Pan","02");
//	Articulo* a3 = new Articulo("Leche","03");
	PilaArticulo *articulo=new PilaArticulo();	//pila carrito: simula un estante con productos 
	articulo->Agregar(a);						//se agrega un producto a un estante
	articulo->Agregar(a2);
	articulo->Agregar(a3);
	
//	Articulo* a4 = new Articulo("Roble","123");
//	Articulo* a5 = new Articulo("Cocobolo","312");
//pila madera: es una pila que tiene un comjunto de productos en este caso maderas
	PilaArticulo *comidas =new PilaArticulo();	//pila madera: es una pila que tiene un comjunto de productos en este caso maderas
	
	maderas->Agregar(a4);
	maderas->Agregar(a5);
	
	comidas->Agregar(a);
	comidas->Agregar(a2);
	comidas->Agregar(a3);
	plasticos->Agregar(a6);
	plasticos->Agregar(a7);
	
	
	do {
		system("cls");
		cout<<"Bienvenido al Martillazo Feliz... \n";
		cout<<"1-Ingresar como administrador \n";
		cout<<"2-Ingresar como cliente \n";
		cout<<"3-Salir..\n";
		cout<<"Digite una opcion: ";
		cin>>opcion;
		system("cls");
		if(opcion == 1){
			system("cls");
			int opcionadmin;
			do{
		
			cout<<"Usted ha ingresado como administrador... \n";
			cout<<"1-Ingresar sucursal \n";
			cout<<"2-Mostrar sucursales \n";
			cout<<"3-Eliminar sucursales \n";
			cout<<"4-Ingresar una nueva seccion \n";
			cout<<"5-Mostrar secciones \n";
			cout<<"6-Eliminar secciones \n";
			cout<<"7-Agregar un producto \n";
			cout<<"8-Mostarr un producto \n";
			cout<<"9-Eliminar un producto \n";
			cout<<"10-Mostrar clientes en espera \n";
			cout<<"11-Cargar datos guardados \n";
			cout<<"12-Regresar al menu principal \n";
			cout<<"Digite una opcion: ";
			cin>>opcionadmin;
			
			
			if(opcionadmin == 1){
				system("cls");
				ingresarSucursal();
				system("pause");
				system("cls");
			}
			
			if(opcionadmin==2){
				system("cls");
				LS->Mostrar();
				system("pause");
				system("cls");
			}
			
			if(opcionadmin==3){
				system("cls");
				eliminarSucursal();
				system("pause");
				system("cls");
			}
			
			if(opcionadmin == 4){
				system("cls");
				ingresarSeccion();
				system("pause");
				system("cls");
			}
			
			if(opcionadmin == 5){
				system("cls");
				ListaSeccion->Mostrar();
				system("pause");
				system("cls");
			}
			
			if(opcionadmin==6){
				system("cls");
				/*eliminarSeccion();*/
				system("pause");
				system("cls");
			}
			
			if(opcionadmin == 7){
				system("cls");
				ingresarProducto();
				system("pause");
				system("cls");
			}
			
			if(opcionadmin == 8){
				
				system("cls");
				maderas->mostrar();
				system("pause");
				system("cls");
//				break;
				
			}
			if(opcionadmin == 9){
				cout<<endl;
				cout<<"\t <<< Antes de borrarse.. >>"<<endl;
				maderas->mostrar();
				maderas->eliminar();
				cout<<endl;
				cout<<"\t <<< Despues de borrarse.. >>"<<endl;
				maderas->mostrar();
				system("pause");
				system("cls");
				
			}
			
			if (opcionadmin ==10){
				//--------------------------
				if(cola->isEmpty()==true){
					system("cls");
					cout<<"No Clientes"<<endl;
					
					system("pause");
					system("cls");
				}else{
					cout<<"Se muestran los clientes "<<endl;
					cola->mostrar();
					fila->AnadirCola(*cola);
					
					system("pause");
					system("cls");
				}
				
				//--------------------------
				
			};
			
			if(opcionadmin==11){
				system("cls");
				cargarDatos();
				system("pause");
				system("cls");
			}
			
			}while(opcionadmin != 12);
			
		} else if (opcion == 2){
			system("cls");
			int opcioncliente;
			string IDSucursal;
			cout<<"Usted ha ingresado como cliente... \n";
			LS->Mostrar();										//sucursal de san josé
			LSHeredia->Mostrar();								//sucursal de Heredia
			LSCartago->Mostrar();								//sucursal de Cartago
			cout<<"Digite una sucursal: \n";
			cin>>IDSucursal;
			
			if(IDSucursal == "1"){
				system("cls");
				cout<<"Bienvenido a la sucursal de Alajuela\n";
				LSHeredia->AnadirLista(*ListaSeccionm);
				LSHeredia->AnadirLista(*ListaSeccion);
				LSHeredia->AnadirLista(*ListaSeccion2);
				
				cout<<"Digite el pasillo a accesar: ";
				cin>>Pasillo;
				metodo();

				
			}else if(IDSucursal == "2"){
				system("cls");
				cout<<"Bienvenido a la sucursal de Heredia\n";
				LSHeredia->AnadirLista(*ListaSeccionm);
				LSHeredia->AnadirLista(*ListaSeccion);
				LSHeredia->AnadirLista(*ListaSeccion2);
				
				cout<<"Digite el pasillo a accesar: ";
				cin>>Pasillo;
				metodo();
				
				
			}else if(IDSucursal == "3"){
				
				system("cls");
				cout<<"Bienvenido a la sucursal de Cartago\n";
				LSHeredia->AnadirLista(*ListaSeccionm);
				LSHeredia->AnadirLista(*ListaSeccion);
				LSHeredia->AnadirLista(*ListaSeccion2);
				
				cout<<"Digite el pasillo a accesar: ";
				cin>>Pasillo;
				metodo();
			
		}else{
			cout<<"Gracias por visitar nuestra pagina...\n";
			break;
		}
		}		
	} while( opcion != 3);
}







//metodos

void Menu::metodo(){
	
	if (Pasillo == 1){
		system("cls");
		ListaSeccion->AnadirPila(*maderas);
		cout<<endl<<endl;
		
		//...............................................
		string id;
		cout<<"\n\n Si desea hacer la compra de algun producto,\n";
		cout<<"ingrese el codigo del producto:->\t";
		cin>>id;
		
		if(maderas->isEmpty()==true){
			cout<<"El registro esta vacio"<<endl;
			system("pause");
			system("cls");
			/*break;*/
		}else if(maderas->buscar(id)=="-1"){
			cout<<"No existe el producto"<<endl;
			system("pause");
//			return MenuPrincipal();
//			system("pause");
			system("cls");
			/*break;*/
		}else{
			cout<<endl;
			cola->insertar(c);										//se inserta un cliente a la cola
			cout<<"\n\t<<<<- se muestra la fila actual con los/las cliente(s)>>>>\t\n";
			cout<<"\n\t";fila->AnadirCola(*cola);
			cout<<"\n\t<<<< Usted va despues del cliente >>>>\t\n";
			cout<<"\t<<<- Se agrego el producto a un carrito ->>>"<<endl;//se muestra el contenido de la cola en ListaCircular
			cout<<"\n\t";cout<<maderas->buscar(id);									//muestra el articulo que agregó
			system("pause");
			system("cls");
			
		}
		//Simula pasar la pila con el cliente a una cola para enviarla a una fila de espera
		int pagar;
		cout<<"\t\n++++++++++++++++ MENSAJE +++++++++++++++++++\n"
			<<"Desea pasar directamente a la fila de espera y pagar?"
			<<"\n1- Si \n2- No\n";
		cin>>pagar;
		cout<<"\t\n++++++++++++++++ FACTURA +++++++++++++++++++\n";
		
		if(pagar == 1){
			if(cola->isEmpty()==true)
			{
				cout<<"No hay Clientes"<<endl;	
				system("pause");
				//break;
			}
			else
			{
				cout<<"Cliente atendido satisfactoriamente!"<<endl;
				cola->mostrar();
				horaDeSalida();
				cout<<endl;
				cola->borrar();
				system("pause");
				//..Fin de la fila de espera
			}
			//si digita 2 en pagar se sale a menu principal
		}else{cout<<"Regresando al menu principal..."<<endl;system("pause");/*break;*/}
		
		
		
	} else if(Pasillo == 2){
		system("cls");
		ListaSeccion->AnadirPila(*comidas);
		cout<<endl<<endl;
		string id;
		cout<<"\n\n Si desea hacer la compra de algun producto,\n";
		cout<<"ingrese el codigo del producto:->\t";
		cin>>id;
		
		if(comidas->isEmpty()==true){
			
			cout<<"El registro esta vacio"<<endl;
			system("pause");
			system("cls");
			
		}else if(comidas->buscar(id)=="-1"){
			cout<<"No existe el producto"<<endl;
			system("pause");
//			return MenuPrincipal();
//			system("pause");
			system("cls");
		}else{
			cola->insertar(c);
			cout<<"<<<<<<<<Se agrego el producto al carrito<<<"<<endl;
			fila->AnadirCola(*cola);
			system("pause");
			system("cls");
			
		}
		
		int pagar;
		cout<<"\t\n++++++++++++++++ MENSAJE +++++++++++++++++++\n"
			<<"Desea pasar directamente a la fila de espera y pagar?"
			<<"\n1- Si \n2- No\n";
		cin>>pagar;
		cout<<"\t\n++++++++++++++++ FACTURA +++++++++++++++++++\n";
		
		if(pagar == 1){
			if(cola->isEmpty()==true)
			{
				cout<<"No hay Clientes"<<endl;	
				system("pause");
			}
			else
			{
				cout<<"Cliente atendido satisfactoriamente!"<<endl;
				cola->mostrar();
				horaDeSalida();
				cout<<endl;
				cola->borrar();
				system("pause");
				//..Fin de la fila de espera
			}
			//si digita 2 en pagar se sale a menu principal
		}else{cout<<"Regresando al menu principal..."<<endl;system("pause");}
		
		
		
	}else if(Pasillo == 3){
		
		system("cls");
		ListaSeccion->AnadirPila(*plasticos);
		cout<<endl<<endl;
		
		string id;
		cout<<"\n\n Si desea hacer la compra de algun producto,\n";
		cout<<"ingrese el codigo del producto:->\t";
		cin>>id;
		
		if(plasticos->isEmpty()==true){
			cout<<"El registro esta vacio"<<endl;
			system("pause");
			system("cls");
		}else if(plasticos->buscar(id)=="-1"){
			cout<<"No existe el producto"<<endl;
//			system("pause");
//			return MenuPrincipal();
			system("pause");
			system("cls");
		}else{
			cola->insertar(c);
			cout<<"<<<<<<<<Se agrego el producto al carrito<<<"<<endl;
			fila->AnadirCola(*cola);
			system("pause");
			system("cls");
		}}
	
	int pagar;
	cout<<"\t\n++++++++++++++++ MENSAJE +++++++++++++++++++\n"
		<<"Desea pasar directamente a la fila de espera y pagar?"
		<<"\n1- Si \n2- No\n";
	cin>>pagar;
	cout<<"\t\n++++++++++++++++ FACTURA +++++++++++++++++++\n";
	
	if(pagar == 1){
		if(cola->isEmpty()==true)
		{
			cout<<"No hay Clientes"<<endl;	
			system("pause");
		}
		else
		{
			cout<<"Cliente atendido satisfactoriamente!"<<endl;
			cola->mostrar();
			horaDeSalida();
			cout<<endl;
			cola->borrar();
			system("pause");
			//..Fin de la fila de espera
		}
		//si digita 2 en pagar se sale a menu principal
	}else{cout<<"Regresando al menu principal..."<<endl;system("pause");}
	
	
}

//ingresa las sucursales

void Menu::ingresarSucursal(){
	
	system("cls");
	string id =""; string ubicacion="";
	
	cout<<"Digite la ubicacion de la sucursal: "<<endl;
	cin.ignore();
	getline(cin,ubicacion);
	cout<<"Digite el ID del de la sucursal: "<<endl;
	getline(cin,id);
	
	cout<<endl;
	Sucursales *sucursal = new Sucursales(id,ubicacion);
	LS->AgregarSucursal(sucursal);
	
	salidaSucursales.open("Sucursales.txt", ios::app);
	
	Sucursales* suc = new Sucursales(id,ubicacion);
	suc->autoGuardar(salidaSucursales);
	salidaSucursales.close();
	
}

//elimina las sucursales

void Menu::eliminarSucursal(){
	
	string id;
	cout << "Digite el id de la sucursal que desea eliminar " << endl;
	cin>>id;
	LS->EliminarSucursal(id);
	
	cout<<"Sucursal eliminada correctamente. "<<endl;
	
}

//ingresa las secciones

void Menu::ingresarSeccion(){
	
	
	int numero = 0; string nombre="";
	
	cout<<"Digite el nombre de la seccion: "<<endl;
	cin.ignore();
	getline(cin,nombre);
	cout<<"Digite el numero de seccion : "<<endl;
	cin>>numero;
	
	cout<<endl;
	Secciones *seccionIngreso = new Secciones(numero,nombre);
	ListaSeccion->Agregar(seccionIngreso);
	
	salidaSecciones.open("Secciones.txt", ios::app);
	
	Secciones* sec = new Secciones(numero,nombre);
	sec->autoGuardar(salidaSecciones);
	salidaSecciones.close();
}

//eliminar seccion

//void Menu::eliminarSeccion(){
//	
//	int id;
//	cout << "Digite el numero de la seccion que desea eliminar " << endl;
//	cin>>id;
//	ListaSeccion->Eliminar(id);
//	
//	cout<<"Sucursal eliminada correctamente. "<<endl;
//	

//}
//ingresa producto

void Menu::ingresarProducto(){
	
	system("cls");
	string numero = ""; string articulo="";
	
	cout<<"Digite el nombre del articulo: "<<endl;
	cin.ignore();
	getline(cin,articulo);
	cout<<"Digite el numero del articulo : "<<endl;
	getline(cin,numero);
	
	cout<<endl;
	Articulo *art = new Articulo(articulo,numero);
	maderas->Agregar(art);
	
	salidaArticulos.open("Articulos.txt", ios::app);
	Articulo* articulos = new Articulo(articulo,numero);
	articulos->autoGuardar(salidaArticulos);
	salidaArticulos.close();
	
}

void Menu::cargarDatos(){
	
	Sucursales* s = NULL;
	entradaSucursales.open("Sucursales.txt");
	while (entradaSucursales.good()) {
		s = Sucursales::Cargar(entradaSucursales);
		if (s != NULL) {
			LS->AgregarSucursal(s);
		}
	}
	
	
	Secciones* s2 = NULL;
	entradaSecciones.open("Secciones.txt");
	while (entradaSecciones.good()) {
		s2 = Secciones::Cargar(entradaSecciones);
		if (s2 != NULL) {
			ListaSeccion->Agregar(s2);
		}
	}
	
	
	Articulo* s3 = NULL;
	entradaArticulos.open("Articulos.txt");
	while (entradaArticulos.good()) {
		s3 = Articulo::Cargar(entradaArticulos);
		if (s3 != NULL) {
			archivoP->Agregar(s3);
		}
	}
}

int Menu::horaDeSalida(){
	
	char fecha[100];
	
	while(true){
		
		time_t tiempo = time(NULL);
		struct tm tiempoMinutos = *localtime(&tiempo);
		
		cout<<"hora de salida: ";
		cout<<(fecha,tiempoMinutos.tm_hour);
		cout<<":";
		cout<<(fecha,tiempoMinutos.tm_min);
		return EXIT_SUCCESS;
	
  }
}
Menu::~Menu() {}

