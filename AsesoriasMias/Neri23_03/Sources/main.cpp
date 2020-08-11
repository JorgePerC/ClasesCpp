#include<iostream>
#include<stdlib.h>

using namespace std;

class Persona{
    private:
        int edad;
        string estadoCivil;
        string nombre;
    public:   
        Persona(string, int, string);
        void mostrarPersona();
};

Persona :: Persona (string nombre_, int edad_, string estadoCivil_){
    nombre = nombre_;
    edad = edad_;
    estadoCivil = estadoCivil_;
}

class Alumno : public Persona{
    private:
        int curso;
        int numeroMaterias;
    public:
        Alumno(string, int, string, int, int);
        void mostrarAlumno();
};
/*Herencia*/

void Persona::mostrarPersona(){
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "EstadoCivil: " << estadoCivil << endl;
}


Alumno::Alumno(string nombre_, int edad_, string estadoCivil_, 
                int curso_, int numeroMaterias_) : Persona(nombre_, edad_, estadoCivil_){
    curso = curso_;
    numeroMaterias = numeroMaterias_;
}
void Alumno:: mostrarAlumno(){
    mostrarPersona();
    cout << "Curso: " << curso << endl;
    cout << "Numero de materias: " << numeroMaterias << endl;
}

    int main (){
        cout<<"Dame tu nombre:"<<endl;
        string nom;
        cin>>nom;
        cout<<"Dame tu edad:"<<endl;
        int age;
        cin>>age;
        cout<<"Dame tu estado civil"<<endl;
        string estado;
        cin>>estado;
        cout<<"Dame tu curso"<<endl;
        int curso;
        cin>>curso;
        cout<<"Dame tu numero de materias"<<endl;
        int mat;
        cin>>mat;
        
        Alumno alum(nom,age,estado,curso,mat);
        alum.mostrarAlumno();

        return 0;
}
