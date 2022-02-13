#include "CLIENTE.cpp"
#include <iostream>
using namespace std;
main(){
	string nit, nombres, apellidos, direccion;
	int telefono;
	
	cout<<"ingresar Nit: ";
	cin>>nit;
	cout<<"ingresar Nombres: ";
	cin>>nombres;
	cout<<"ingresar Apellidos: ";
	cin>>apellidos;
	cout<<"ingresar Direccion: ";
	cin>>direccion;
	cout<<"ingresar Telefono: ";
	cin>>telefono;
	//instancia del objeto
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();
	
	
	
}
