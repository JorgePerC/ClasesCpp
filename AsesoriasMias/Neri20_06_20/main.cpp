#include "Medico.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main (){
    
    vector <Medico*> docs;
    
    string nombre, telefono, seguro, cargo;
    int edad, salario, consulta, pacientes;
    
    for (int i = 0; i < 3; i++){
        cout << "Medico " << i + 1 << "-----------" << endl;

        cout << "Dame el nombre: "<< endl;
        cin >> nombre;

        cout << "Dame el edad: "<< endl;
        cin >> edad;

        cout << "Dame el telefono: "<< endl;
        cin >> telefono;

        cout << "Dame el seguro: "<< endl;
        cin >> seguro;

        cout << "Dame el salario base por día: "<< endl;
        cin >> salario;

        cout << "Dame el cargo: "<< endl;
        cin >> cargo;
        
        cout << "Dame el costo consulta: "<< endl;
        cin >> consulta;

        cout << "Dame el numero de pacientes: "<< endl;
        cin >> pacientes;
        docs.push_back(new Medico(nombre, edad, 
                                    telefono, seguro, 
                                    salario, cargo, 
                                    consulta, pacientes));
        
    }

    for (int i = 0; i< docs.size(); i++){
            cout <<"El salario mensual es: ";
            cout << docs[i] -> getSalarioMensual() << endl;
        }
}

