#include "Asalariado.h"
#include <string>

using namespace std;

class Medico : public Asalariado
{
private:
    int costoConsulta;
    int numeroPacientesSemanales;
public:
    Medico(string, int, string, string, int, string, int, int);
    int getSalarioMensual(); //Podemos poner override
};

Medico::Medico(string nombre, int edad, string telefono, string seguro, 
                    int salario, string cargo,
                    int consulta, int pacientes)
    : Asalariado(nombre, edad, telefono, seguro, salario, cargo)
{
    this -> costoConsulta = consulta;
    this -> numeroPacientesSemanales = pacientes;
}
int Medico::getSalarioMensual(){
    int total = 0;
    //Salario base diario
    total = salarioBase * 30;
    //Salario con consultas
    total += costoConsulta*numeroPacientesSemanales*4;
    return total;
}