#include <string>
#include "Persona.h"

using namespace std;

class Asalariado : public Persona
{
protected:
    int salarioBase;
    string cargo;
public:
    Asalariado(string, int, string, string, int, string) ;
    virtual int getSalarioMensual();
};

Asalariado::Asalariado(string nombre, int edad, string telefono, string seguro, int salario, string cargo) 
    : Persona(nombre, edad, telefono, seguro)
{
    this -> salarioBase = salario;
    this -> cargo = cargo;
}

int Asalariado::getSalarioMensual(){
    return salarioBase;
}
