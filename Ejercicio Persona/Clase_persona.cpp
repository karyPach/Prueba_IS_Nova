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
//Modificación elaborado por eloy
int main(){
	Persona persona1("omar",20);
	persona1.mostrarpersona();
	cout<<"\n"<<endl;
	Alumno alumno1("omar",20,"0117010006",9.0);
	alumno1.mostrarAlumno();
	
	return 0;
}


//cambio elaborado por NoÃ©, nueva rama

//constructor de la clase Alumno(subclase o clase hija)
Alumno::Alumno(string _nombre, int _edad, string _codigoAlumno, float _promedio):Persona(_nombre,_edad){
	codigoAlumno= _codigoAlumno;
	promedio= _promedio;
}

//mostrar nombre y edad de la clase Persona
void Persona::mostrarPersona(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}

/****************************Cambio del usuario Monery :D************************/
//Mostrar nombre y edad de la clase Alumno
void Alumno::mostrarAlumno(){
	mostrarPersona();
	cout<<"Codigo del alumno: "<<codigoAlumno<<endl;
	cout<<"Promedio: "<<promedio<<endl;
}
