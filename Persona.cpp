#include <iostream>
using namespace std;

//1-Nombre de la Clase (Persona)
class Persona {
	//2-Atributos = caracteristicas de la clase (objeto)
	//2.1- Controles de Acceso (Private, Protected (clases heredadas), Public)
	protected : 
		string nombres,apellidos,direccion,fecha_nacimiento;
		int telefono;
	//3-Constructor
	protected :
		Persona (){
		}
		Persona(string nom, string ape, string dir, string fn, int tl){
			nombres = nom;
			apellidos = ape;
			direccion = dir;
			fecha_nacimiento = fn;
			telefono = tl;
		}
		
	//4-Metodos
	//CRUD = Crear, leer, Actualizar y Eliminar
	void crear ();
	void leer();
	void actualizar();
	void borrar();
	
	
	
	
};
