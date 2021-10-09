#include <iostream>
using namespace std;
class Persona{
	// atributos
	protected : string nombres,apellidos,direccion,fn;
				int telefono,
	// costructor
	protected : Persona(){
		}
		Persona(string nom,string ape,string dir,int tel, string fn){
			nombres = nom;
			apellidos = ape;
			direccion = dir;
			telefono = tel;
			fecha nacimiento=fn;
		}
	
	// metodos
	void mostrar();
	
};
