#include "Persona.cpp"
#include <iostream>
using namespace std;

class Cliente : Persona{
  // atributos
  private : string nit;
  // constructor
  public :
  Cliente(){
  }
  Cliente(string nom,string ape,string dir,int tel,string fn,string n) : Persona(nom,ape,dir,tel,fn){ 
  nit = n;
  }
  
  // METODOS
  //set (modificar)
  void setNit(string n){nit = n;}
  void setNombres(string nom){nombres = nom;}
  void setApellidos(string ape){apellidos = ape;}
  void setDireccion(string dir){direccion = dir;}
  void setTelefono(int tel){telefono = tel;}
  void setFecha nacimiento(string fn){fecha nacimiento = fn;}
  //get (mostrar)
  string getNit(){	return nit;}
  string getNombres(){	return nombres;}
  string getApellidos(){	return apellidos;}
  string getDireccion(){	return direccion;}
  int getTelefono(){	return telefono;}
  string getfecha nacimiento(){	return fecha nacimiento;}
  
// metodo
void mostrar(){
	cout<<"______________________"<<endl;
	cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<fecha nacimiento<<endl;
}
};
