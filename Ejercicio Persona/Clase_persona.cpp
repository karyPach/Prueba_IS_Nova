//Ejercicio de prueba

//Librerias
#include<iostream>
#include<stdlib.h>
using namespace std;
 
//Clase Persona /*priemr cambio*/
class Persona{
	private: //Atributos
		string nombre;
		int edad;
	public: //Metodos
		Persona(string,int); //constructor
		void mostrarPersona();//Mostrar nombre y edad
};
//Clase Alumno
class Alumno : public Persona{ /*segundo cambio*/
	private: //Atributos
		string codigoAlumno;
		float promedio;
	public: //Metodos
	/*Alumno(string a, int b, string c,float d) : Persona(a,b){
		codigoAlumno = c;
		promedio = d;
	}*/
	Alumno (string,int,string,float); //Constructor
	void mostrarAlumno();
};
/*Nuevo cambio usando una rama */
//Constructor de la clase Persona(superclase o clase padre)
Persona:: Persona(string _nombre,int _edad){
	nombre= _nombre;
	edad= _edad;
	
}
//Modificaci�n elaborado por eloy
int main(){
	Persona persona1("omar",20);
	persona1.mostrarpersona();
	cout<<"\n"<<endl;
	Alumno alumno1("omar",20,"0117010006",9.0);
	alumno1.mostrarAlumno();
	
	return 0;
}

