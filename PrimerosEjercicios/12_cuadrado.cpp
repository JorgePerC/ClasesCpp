/**
 * Jorge Pérez Chávez, A01023859
 * 11/11/2019
 * Programa que imprime un cuadrado, usando ciclo for
 **/

#include <iostream>

using namespace std;

/**
 * Imprime en consola un cuadrado de cruces 
 * Los parámetros son el tamaño (ancho y alto) del cuadrado
 * En las aristas superior e inferior, imprime un - entre +
 **/
void cuadrado (int ancho, int alto){
    if (ancho % 2 == 0){
        ancho++;
    }
    if (alto % 2 == 0){
        alto++;
    }
    for (int row = 0; row < alto; row++){
        for (int col = 0; col < ancho; col++){
            if (( (0<row) && (row < alto-1)) && ( (0<col) && (col<ancho-1) )){
                cout << " ";
            }
            else if (col % 2 == 0){
                cout << "+";
            }
            else{
                cout << "-";
            }
        }
        cout << "" << endl;
    }
}


/**
 *Función principal del prorgama 
 * Pie el alto y ancho del cuadrado a construir
 * Ejecuta la función cuadrado
 * Regresa 1 si todo sale bien
 **/
int main (void){
    int alto;
    cout << "Dame el alto del cuadrado " << endl;
    cin >> alto;
    int ancho;
    cout << "Dame el ancho del cuadrado " << endl;
    cin >> ancho;

    cuadrado (ancho, alto);
    return 1;
}