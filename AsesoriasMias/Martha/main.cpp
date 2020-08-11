#include <iostream>
#include <string>
#include <vector>

using namespace std;
//La clase padre se queda normal
//Archivo Archivo.h
class Empresaurio{
    protected:
        string nombreEmpresa;
    public:
        int pago;
        string dato;
        Empresaurio();
        Empresaurio (string);
        //Metodo polimorfico
        //Sólo se espeficica en la clase padre (1 vez)
        virtual void mostrar();
};

// Archivo Archivo.cpp
Empresaurio::Empresaurio(string nombreEmpresa){
    
}
void Empresaurio::mostrar(){
    cout << "El Nombre de la empresa es: " << nombreEmpresa << endl;
}
class Perrito{

};

//La clase heredada : clasePadre
class Director: public Empresaurio{
    private:
        string nombreDirec;
        //Un apuntador como atributo
        Perrito* perritoDelDire;

    public:
        Director(string, string);
        void mostrar();
        ~Director();
        
};
//Constructor 
Director::Director(string nombreDirec, string nombreEmpresa): Empresaurio(nombreEmpresa){
    this -> nombreDirec = nombreDirec;
}
Director::~Director(){
    delete perritoDelDire;
}
void Director::mostrar(){
    Empresaurio :: mostrar();
    cout << "El Director gana al mes: " << pago*30 << endl;
}


class Secretario: public Director{
    public:
        int edad;
        Secretario(string, string, int);
        void mostrar();
        
};

Secretario::Secretario(string nombreDirec, string nombreEmpresa, int edad): Director(nombreDirec, nombreEmpresa){
    this -> edad = edad;
    
}
void Director::mostrar(){
    Empresaurio :: mostrar();
    Empresaurio :: mostrar();
    
    Director::mostrar();
    cout <<"Soy pobre" << endl;
}

int main (){

    vector <string> tablero [30];

    return 0;
}