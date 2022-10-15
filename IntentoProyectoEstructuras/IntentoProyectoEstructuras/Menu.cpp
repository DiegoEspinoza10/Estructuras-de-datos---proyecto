#include "Menu.h"

Menu::Menu() {}

void Menu::MenuPrincipal(){
	int opcion;
	int Pasillo;
	int opcioncliente;
	string IDSucursal;
	int pagar;
	
	Sucursales *s = new Sucursales("1", "Alajuela");//sucursal
	ListaSucursales *LS = new ListaSucursales();
	LS->AgregarSucursal(s);
	
	Sucursales *Heredia = new Sucursales("2", "Heredia"); //sucursal
	ListaSucursales *LSHeredia = new ListaSucursales();
	LSHeredia->AgregarSucursal(Heredia);
	
	Secciones *seccion = new Secciones(1,"Madera"); //seccion
	Secciones *seccionuno = new Secciones (2, "Comidas");
	ListaSecciones *ListaSeccion = new ListaSecciones();
	ListaSecciones *ListaSeccionm = new ListaSecciones();
	ListaSeccionm->Agregar(seccion);
	ListaSeccion->Agregar(seccionuno);
	
	
	Secciones *seccion1 = new Secciones(3,"Plastico"); //seccion
	ListaSecciones *ListaSeccion2 = new ListaSecciones();
	ListaSeccion2->Agregar(seccion1);

	PilaCarrito *pila1=new PilaCarrito();		//pila carrito: simula la accion de pasar un producto de un estante a un Carrito
	ColaCliente *cola=new ColaCliente();  		//cola cliente, simula el cliente con el carrito en un cola esperando ser atendidos
	string nombre_cliente,nombre, id;		//datos del Cliente
	ListaCircular *fila = new ListaCircular();  //para agregar la cola a una lista circulas
	Cliente* c = new Cliente("Producto","1234","Jonathan");
	
	
	
	
	Articulo* a = new Articulo("Platano","01");	//articulos: son productos que tienen un codigo y un nombre
	Articulo* a2 = new Articulo("Pan","02");
	Articulo* a3 = new Articulo("Leche","03");
	PilaArticulo *articulo=new PilaArticulo();	//pila carrito: simula un estante con productos 
	articulo->Agregar(a);						//se agrega un producto a un estante
	articulo->Agregar(a2);
	articulo->Agregar(a3);
	
	Articulo* a4 = new Articulo("Roble","123");
	Articulo* a5 = new Articulo("Cocobolo","312");
	PilaArticulo *maderas =new PilaArticulo();	//pila madera: es una pila que tiene un comjunto de productos en este caso maderas
	maderas->Agregar(a4);
	maderas->Agregar(a5);
	
	do {
		system("cls");
		cout<<"Bienvenido al Martillazo Feliz... \n";
		cout<<"1-Ingresar como administrador \n";
		cout<<"2-Ingresar como cliente \n";
		cout<<"3-Salir..\n";
		cout<<"Digite una opcion: ";
		cin>>opcion;
		
		if(opcion == 1){
			
			
			int opcionadmin;
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
			cout<<"10- Mostra clientes en espera\n";
			cout<<"Digite una opcion: ";
			cin>>opcionadmin;
			
			
			//muestra todos los clientes que estan en una cola a travez de la lista circular 
			if (opcionadmin ==10){
				//--------------------------
				if(cola->isEmpty()==true){
					cout<<"No Clientes"<<endl;	
					system("pause");
				}else{
					cout<<"Se muestran los clientes "<<endl;
					//cola->mostrar();
					fila->AnadirCola(*cola);
					system("pause");
				}
				
				//--------------------------
				
			};
			break;
			
			//menu de los desarrolladores 
			
		} else if (opcion == 2){
			
			cout<<"Usted ha ingresado como cliente... \n";
			LS->Mostrar();			//sucursal de san josé
			LSHeredia->Mostrar();		//sucursal de Heredia
			cout<<"Digite una sucursal: \n";
			cin>>IDSucursal;
			
			if(IDSucursal == "1"){
				cout<<"Bienvenido a la sucursal de Alajuela\n";
				/*seccion->toString();
				cout<<"Articulos de la tienda ---\n";
				articulo->mostrar();*/
				LS->AnadirLista(*ListaSeccionm);
				LS->AnadirLista(*ListaSeccion);
				cout<<"Digite el pasillo a accesar: ";
				cin>>Pasillo;
				break;
				
			}else if(IDSucursal == "2"){
				
				cout<<"Bienvenido a la sucursal de Heredia\n";
				LSHeredia->AnadirLista(*ListaSeccionm);
				LSHeredia->AnadirLista(*ListaSeccion);
				cout<<"Digite el pasillo a accesar: ";
				cin>>Pasillo;
				
				if (Pasillo == 1){
					//muestra la seccion con articulo tipo maderas
					ListaSeccionm->AnadirPila(*maderas);
					cout<<endl<<endl;
					
					//... agrega un articulo de pila articulo a la pila Carrito
					string id;
					cout<<"\n\n HACER LA COMPRA DE UN PRODUCTO\n";
					cout<<"Ingrese el codigo del producto: \t";
					cin>>id;
					
					if(maderas->isEmpty()==true){
						cout<<"El registro esta vacio"<<endl;
						system("pause");
											break;
					}else if(maderas->buscar(id)=="-1"){
						cout<<"No existe el producto"<<endl;
						system("pause");
											break;
					}else{
						cola->insertar(c);
						cout<<"\t\t<<<<<<<<Se agrego el producto al carrito>>>>>>>>>>"<<endl;
						fila->AnadirCola(*cola);
						system("pause");
						}
						//... FIn 
					//Simula pasar la pila con el cliente a una cola para enviarla a una fila de espera
					cout<<"\t\n++++++++++++++++RECIBO+++++++++++++++++++";
					cout<<"Desea pasar directamente a la fila de espera?"
						<<"\n1- Si \n2- No\n";
					cin>>pagar;
					cout<<"\t\n++++++++++++++++FACTURA+++++++++++++++++++";
					
					if(pagar ==1 ){
						if(cola->isEmpty()==true)
						{
						cout<<"No hay Clientes"<<endl;	
						system("pause");
						//break;
						}
						else
						{
						cola->mostrar();
						cola->borrar();
						cout<<"Cliente atendido"<<endl;
						system("pause");
						//..Fin de la fila de espera
						}
						//si digita 2 en pagar se sale a menu principal
					}else{cout<<"No hay Clientes"<<endl;system("pause");break;}//ver break posible caida del sistema 
					
					
				} else if(Pasillo == 2){
					ListaSeccion->AnadirPila(*articulo);
				
				} 
			
			}// agregar la tercera sucursa
			
		
		}else{
			cout<<"Gracias por visitar nuestra pagina...\n";
			break;
		}
	} while( opcion != 3);
}
Menu::~Menu() {

}
	
