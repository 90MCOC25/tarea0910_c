#include "Persona.cpp"
#include <iostream>
using namespace std;
class Empleado : Persona{
private : string cod_empleado, puesto;

public :
Empleado(){
}
Empleado(string nom,string ape,string dir,string f,int tel,string n,string cod_empleado,string puesto) : Persona(nom,ape,dir,f,tel){
  cod_empleado = cod_empleado;
  puesto = puesto;
  }
void agregar(){
    cout<<"_________"<<endl;
    cout<<nombres<<","<<apellidos<<","<<direccion<<","<<fn<<","<<telefono<<","<<cod_empleado<<","<<puesto<<endl;
   }

  void setNombres(string nom){nombres = nom;}
  void setApellidos(string ape){apellidos = ape;}
  void setDireccion(string dir){direccion = dir;}
  void setFn(string f){
fn = f;
}
  void setTelefono(int tel){telefono = tel;}
  void setcod_empleado(string cod_empleado){
  cod_empleado = cod_empleado;
  }
  void setpuesto(string puesto){
  puesto = puesto;
  }
  //get (mostrar)
 
  string getNombres(){ return nombres;}
  string getApellidos(){ return apellidos;}
  string getDireccion(){ return direccion;}
  string getFn(){
return fn;
}
  int getTelefono(){ return telefono;}
  string getcod_empleado(){
  return cod_empleado;
  }
  string getpuesto(){
  return puesto;
  }
 



};
