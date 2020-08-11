#include <iostream>
#include "MatrizVariable.h"

using namespace std;

int main()
{
    // MatrizVariable <int> arregloNumeros = MatrizVariable <int> (3);
    // arregloNumeros.llenarMatriz();
    // arregloNumeros.mostrarMatriz();
    // cout << "----------" << endl;
    // arregloNumeros.ordenarMatriz();
    // arregloNumeros.mostrarMatriz();

    MatrizVariable <char> arregloChars = MatrizVariable <char> (5);
    cout << "Matriz sin ordenar" << endl;
    arregloChars.llenarMatriz();
    arregloChars.mostrarMatriz();
    cout << "----------" << endl;
    cout << "Matriz ordenada" << endl;
    arregloChars.ordenarMatriz();
    arregloChars.mostrarMatriz();
    return 0;
}
