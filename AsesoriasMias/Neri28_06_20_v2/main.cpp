#include <iostream>
#include "MatrizVariable.h"

using namespace std;

int main()
{
    MatrizVariable <int> arregloNumeros = MatrizVariable <int> (3);
    arregloNumeros.llenarMatrizAleatoriamente();
    cout << "Matriz sin ordenar" << endl;
    arregloNumeros.mostrarMatriz();
    cout << "----------" << endl;
    cout << "Matriz ordenada" << endl;
    arregloNumeros.ordenarMatriz();
    arregloNumeros.mostrarMatriz();

    cout << "" << endl;

    MatrizVariable <char> arregloChars = MatrizVariable <char> (5);
    
    arregloChars.llenarMatrizAleatoriamente();
    cout << "Matriz sin ordenar" << endl;
    arregloChars.mostrarMatriz();
    cout << "----------" << endl;
    cout << "Matriz ordenada" << endl;
    arregloChars.ordenarMatriz();
    arregloChars.mostrarMatriz();

    cout << "" << endl;
    
    MatrizVariable <float> arreglofloats = MatrizVariable <float> (5);
    
    arreglofloats.llenarMatrizAleatoriamente();
    cout << "Matriz sin ordenar" << endl;
    arreglofloats.mostrarMatriz();
    cout << "----------" << endl;
    cout << "Matriz ordenada" << endl;
    arreglofloats.ordenarMatriz();
    arreglofloats.mostrarMatriz();
    return 0;
}
