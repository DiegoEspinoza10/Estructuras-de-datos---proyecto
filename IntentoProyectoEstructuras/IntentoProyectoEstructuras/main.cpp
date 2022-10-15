#include<iostream>
#include "PilaArticulo.h"
#include "PilaCarrito.h"
#include "ColaCliente.h"
#include "Articulo.h"
#include "Carrito.h"
#include "Cliente.h"


#include "Menu.h"
using namespace std;

int main () {
	
	Menu *MainMenu = new Menu();
	MainMenu->MenuPrincipal();
	return 0;
	delete MainMenu;
	
	/*
	string nombre_cliente,nombre, id;
	int op;
	ColaCliente *cola=new ColaCliente();
	PilaArticulo *pila=new PilaArticulo();
	PilaCarrito *pila1=new PilaCarrito();
	
	do{
		system("cls");
		cout<<"------------------Pilas--------------------"<<endl;
		cout<<"1-Insertar"<<endl;
		cout<<"2-Desapilar"<<endl;
		cout<<"3-Mostrar Pila"<<endl;
		cout<<"4-Insertar al carrito"<<endl;
		cout<<"5-Eliminar del carrito"<<endl;
		cout<<"6-Mostrar el carrito"<<endl;
		cout<<"7-Insertar cliente"<<endl;
		cout<<"8-Eliminar cliente"<<endl;
		cout<<"9-Mostrar clientes"<<endl;
		cout<<"10-Salir"<<endl;
		cout<<"->Digite una opcion"<<endl;
		cin>>op;
		switch(op){
			
		case 1:{
			cout<<"Ingrese nombre del producto"<<endl;
			cin>>nombre;
			cout<<"Ingrese el codigo del producto"<<endl;
			cin>>id;
			Articulo* a = new Articulo(nombre, id);
			pila->Agregar(a);
			cout<<"Producto agregado a la pila"<<endl;
			system("pause");
			break;}
		case 2:{
				if(pila->isEmpty()==true){
					cout<<"No hay productos"<<endl;	
					system("pause");
					break;
				}else{
					pila->eliminar();
					cout<<"Producto eliminado de la pila"<<endl;
					system("pause");
					break;
				}
				
				break;
			}
		case 3:{
					if(pila->isEmpty()==true){
						cout<<"No hay productos"<<endl;	
						system("pause");
						break;
					}else{
						cout<<"Se muestra la pila "<<endl;
						pila->mostrar();
						system("pause");
						break;
					}
					break;
					
				}
		case 4:{
						
						pila->mostrar();
						cout<<"Ingrese el codigo del producto"<<endl;
						cin>>id;
						
						if(pila->isEmpty()==true){
							cout<<"El registro esta vacio"<<endl;
							system("pause");
							break;
							
						}else if(pila->buscar(id)=="-1"){
							cout<<"No existe el producto"<<endl;
							system("pause");
							break;
						}else{
							Carrito *c = new Carrito(nombre,id);
							pila1->Agregar(c);
							cout<<"Se agrego el producto al carrito"<<endl;
							system("pause");
							break;
						}
						break;
						
					}
		case 5:{
							if(pila1->isEmpty()==true){
								cout<<"No hay nada en el carrito"<<endl;	
								system("pause");
								break;
							}else{
								pila1->eliminar();
								cout<<"Producto eliminado del Carrito"<<endl;
								system("pause");
								break;
							}
							break;
						}
		case 6:{
								if(pila1->isEmpty()==true){
									cout<<"No hay productos"<<endl;	
									system("pause");
									break;
								}else{
									cout<<"Se muestra el carrito "<<endl;
									pila1->mostrar();
									system("pause");
									break;
								}
								break;
								
							}
		case 7:{
									
									cout<<"Ingrese su nombre"<<endl;
									cin>>nombre_cliente;
									Cliente *c = new Cliente(nombre,id,nombre_cliente);
									cola->insertar(c);
									cola->mostrar();
									cout<<"Carrito agregado"<<endl;
									system("pause");
									break;	
								}
		case 8:{
				
				if(cola->isEmpty()==true)
				{
					cout<<"No hay Clientes"<<endl;	
					system("pause");
					break;
				}
				else
				{
					cola->mostrar();
					cola->borrar();
					cout<<"Cliente atendido"<<endl;
					system("pause");
					break;
				}
			break;
				
		case 9:{
											if(cola->isEmpty()==true){
											cout<<"No Clientes"<<endl;	
											system("pause");
		}else{
											cout<<"Se muestran los clientes "<<endl;
											cola->mostrar();
											system("pause");
		}
											break;	
										}
		case 10:{
												
												cout<<"Saliendo "<<endl;
												system("pause");
												break;	
											}
									}
		}
	} while(op!=10);
	
	*/
	return 0;
};
