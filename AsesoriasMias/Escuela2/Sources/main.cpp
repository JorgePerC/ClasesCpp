#include <iostream>
#include <stdlib.h>
#include <vector>
#include <unistd.h> //Porque lo corro en Linux

using namespace std;

class Alumno{
    private:
        string nombre, ID;
    public:
        Alumno ();
        Alumno (string, string);
        void mostrar();
};

class Escuela {
    private:
        int maxAlumnos;
    public:
        string nombre;
        Escuela (int);
        void pedirLibro(Alumno);
        virtual void mostrar();
};

class BibliotecaCentral: Escuela{
    private:
        string libros [5] = {
            "Amor y Prejuicio",
            "Romeo y Julieta",
            "Conde de MC",
            "Aura",
            "100 anos de soledad"
        };

        string fechas [5] = {
            "17.04.2020",
            "27.04.2020",
            "30.04.2020",
            "24.04.2020",
            "8.04.2020"
        };
        string libroEscogido, fechaInicio, fechaFinal;
    public:
        Alumno alumno;
        BibliotecaCentral(Alumno);
        void mostrar();
};

Escuela:: Escuela (int maxAlumnos_){
    maxAlumnos = maxAlumnos_;
    nombre = "tlacaelel";
}

void Escuela:: mostrar (){
    cout << "Nombre de la Escuela: " << nombre << endl;
    cout << "No. de alumnos: " << maxAlumnos << endl;
    cout << "" << endl;
}
void Escuela:: pedirLibro (Alumno alum){
    BibliotecaCentral prestamo(alum);
    prestamo.mostrar();
}
//------------------
BibliotecaCentral:: BibliotecaCentral (Alumno alum) : Escuela(5){
    alumno = alum;
    int randomNumber;
    srand(time(nullptr));
    sleep(1);
    // Nos da un libro random
    libroEscogido = libros[rand() % 5]; 
    fechaInicio = "07.04.2020";
    fechaFinal = fechas[rand() % 5];
}
void BibliotecaCentral :: mostrar (){
    cout <<" (\\ " << endl;
    cout <<" \\'\\ " << endl;
    cout <<"  \\'\\       __________  " << endl;
    cout <<"  / '|     ()__________)" << endl;
    cout <<"  \\ '/     \\ Bibliotk \\ " << endl;
    cout <<"    \\       \\ ~~~~~~   \\ " << endl;
    cout <<"   (==)      \\ _________\\ " << endl;
    cout <<"   (__)       ()__________)" << endl;
    
    alumno.mostrar();
    cout <<"\tLibro : "<< libroEscogido << endl;
    cout <<"\tFecha de Inicio : " << fechaInicio << endl;
    cout <<"\tFecha de entrega : " << fechaFinal << endl;
}

//-------------------------------------------------------------------

Alumno :: Alumno (string nombre_, string id_) {
    nombre = nombre_;
    ID = id_;
}
Alumno :: Alumno () {
    nombre = "Neri";
    ID = "K89P";
}
  
void Alumno :: mostrar (){
    cout <<"\tAlumno : "<< nombre << endl;
    cout <<"\tNo. ID: " << ID << endl;
}

///-----------------------------------------------------------


int main (){

    Escuela tlacaelel (5);
    // vector <Alumno*> alumnos[maxAlumnos];
    
    Alumno jp ("Jorge", "54P5");
    Alumno em ("EMMA", "54K4");
    Alumno an ("Antonio", "A57D");
    Alumno om ("Omar", "6AE7");
    Alumno al ("Alan", "147E");

    tlacaelel.mostrar();
    tlacaelel.pedirLibro(jp);
    tlacaelel.pedirLibro(em);
    tlacaelel.pedirLibro(an);
    tlacaelel.pedirLibro(om);
    tlacaelel.pedirLibro(al);
    return 0;
}