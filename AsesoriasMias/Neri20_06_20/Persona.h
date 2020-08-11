#include <string>

using namespace std;

class Persona{

protected:
    /* Solo con herencia */
    int edad;
    string nombre, numeroSeguro, telefono;

public:
    Persona();
    Persona(string, int, string, string );
    //Set -> asignar un valor
        // Tiene que ser void
    void setEdad(int);
    void setNombre(string);
    void setNumeroSeguro(string);
    void setTelefono(string);
    //Get -> obtener el valor
        //Nunca se les pone argumentos
        //Varía el dato que regresan
    int getEdad();
    string getNombre();
    string getSeguro();
    string getTelefono();

};

Persona::Persona(string nombre, int edad, string telefono, string seguro){
    //This es un apuntador al mismo objeto
    this -> nombre = nombre;
    this -> edad = edad;
    this -> telefono = telefono;
    this -> numeroSeguro = seguro;
    //Lista de inicialización -> después
}

//SETTERS
void Persona::setEdad(int nuevaEdad){
    //edad = nuevaEdad;
    this -> edad = nuevaEdad;
}
void Persona::setNombre(string nuevaNombre){
    this -> nombre = nuevaNombre;
}
void Persona::setNumeroSeguro(string nuevoNumeroSeguro){
    this -> numeroSeguro = nuevoNumeroSeguro;
}
void Persona::setTelefono(string nuevoTelefono){
    this -> telefono = nuevoTelefono;
}
//GETTERS
int Persona::getEdad(){
    //edad = nuevaEdad;
    return edad;
}
string Persona::getNombre(){
    return nombre;
}

string Persona::getSeguro(){
    return numeroSeguro;
}
string Persona::getTelefono(){
    return telefono;
}