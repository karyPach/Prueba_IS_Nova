//Ejercicio de prueba

//Librerias
#include<iostream>
#include<stdlib.h>
using namespace std;

//Clase Persona
class Persona{
	private: //Atributos
		string nombre;
		int edad;
	public: //Metodos
		Persona(string,int); //constructor
		void mostrarPersona();//Mostrar nombre y edad
};
//Clase Alumno
class Alumno : public Persona{
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
