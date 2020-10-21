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
