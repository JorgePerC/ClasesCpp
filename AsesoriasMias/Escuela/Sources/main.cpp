#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

class Escuela {
    private:
        int maxAlumnos, maxMaterias, maxGrupos;
    public:
        Escuela (int, int, int);
        void biblioteca();
        virtual void mostrar();
};

class Alumno : Escuela{
    private:
        string nombre, boleta;
        int edad;
        vector <double> calificaciones;
    public:
        Alumno ();
        Alumno (string, string, int);
        void califMaterias();
        double promedioSemestre();
        void mostrar();
};
class Profesor : Escuela {
    private:
        string nombre, ID;
        int edad;
        
    public:
        vector <Alumno> alumnos;
        Profesor(string, string, int);
        void mostrar();
        double califGrupo();
        double promedioGrupos();
};

Escuela:: Escuela (int maxAlumnos_, int maxMaterias_, int maxGrupos_){
    maxAlumnos = maxAlumnos_;
    maxMaterias = maxMaterias_;
    maxGrupos = maxGrupos_;
}

void Escuela:: biblioteca (){

    cout <<" (\\ " << endl;
    cout <<" \\'\\ " << endl;
    cout <<"  \\'\\       __________  " << endl;
    cout <<"  / '|     ()__________)" << endl;
    cout <<"  \\ '/     \\ Bibliotk \\ " << endl;
    cout <<"    \\       \\ ~~~~~~   \\ " << endl;
    cout <<"   (==)      \\ _________\\ " << endl;
    cout <<"   (__)       ()__________)" << endl;

}
void Escuela:: mostrar (){
    cout << "Maximo de grupos: " << maxGrupos << endl;
    cout << "Maximo de alumnos: " << maxAlumnos << endl;
    cout << "Maximo de materias: " << maxMaterias << endl;
    cout << "" << endl;
}
//-------------------------------------------------------------------
Alumno :: Alumno() : Escuela(5, 2, 1){
}

Alumno :: Alumno (string nombre_, string boleta_, int edad_) : Escuela(5, 2, 1){
    nombre = nombre_;
    boleta = boleta_;
    edad = edad_;
}

void Alumno :: califMaterias () {
    
    for (int i = 0; i < 2 ; i++){
        // cout << "ID del alumno: " << boleta << endl;
        cout << "Dame la calificacion " << i+1 << endl;
        int calificacion;
        cin >> calificacion;
        calificaciones.push_back(calificacion);
    }
}
double Alumno :: promedioSemestre(){
    double suma;
    vector<double>::iterator i; 
    for ( i = calificaciones.begin(); i != calificaciones.end(); ++i){
        suma += *i;
    }
    return suma/2;
}
void Alumno :: mostrar (){
    //Escuela :: mostrar();
    cout <<"Alumno : "<< nombre << endl;
    cout <<"\tNo. boleta: " << boleta << endl;
    cout <<"\tEdad del alumno: " << edad << endl;
}

//                                                                Valores predeterminados
Profesor:: Profesor(string nombre_, string ID_, int edad_) : Escuela (5, 2, 1){
    nombre = nombre_;
    ID = ID_;
    edad = edad_;
}

double Profesor :: califGrupo (){
    
    for (int x = 0; x < 5; x++){
        Alumno alumno = Alumno ("Antonio", "0"+ to_string(x), 18);
        alumno.mostrar();
        alumnos.push_back(alumno);
    }
    double sumaPromedios = 0;
    
    for (int i = 0; i < 5 ; i++){
        alumnos[i].califMaterias();
        sumaPromedios += alumnos[i].promedioSemestre();
    }
    float promedio = sumaPromedios/5;
    cout << "La calificacion del grupo es: " << promedio << endl;
    cout << "------ Fin del grupo " << endl;
    alumnos.clear(); // Eliminar el grupo
    return promedio;
}
double Profesor :: promedioGrupos(){
    double sumaPromedioGrupos = 0;
    for (int x = 0; x < 2 ; x++){
        sumaPromedioGrupos += califGrupo();
    }
    return sumaPromedioGrupos/2;

}
void Profesor :: mostrar (){
    // Escuela :: mostrar();
    cout << "Nombre del prof: " << nombre << endl;
    cout << "\tEdad: " << edad << endl;
    cout << "\tID: " << ID << endl;
    
}
///-----------------------------------------------------------


int main (){
    Profesor profe ("Pedro", "AX92", 50);
    profe.mostrar();
    float promedio = profe.promedioGrupos();
    cout << "El promedio de los grupos es " << promedio <<endl;
    Escuela tlacaelel (6,6,6);
    tlacaelel.biblioteca();
    return 0;
}