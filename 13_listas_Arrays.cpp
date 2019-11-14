/**
 * Jorge Pérez Chávez, A01023859
 * 11/11/2019
 * Programa que crea un array
 * Determina sus números aleatoriamente
 * Imprime la cantidad de #pares e #impares
 **/

#include <iostream>
#include <cstdlib>// #include <stdlib.h> //import rand for C, not C++
#include <ctime>

using namespace std;

/**
 * Función que recorre el array nums, de tamaño size 
 * Cuenta la cantidad de números pares en el array
 * Devuelve el #pares
 **/
int contar_pares(int nums[], int size){
    int pares = 0;
    //Disque sacar lenght --> sizeof(nums) / sizeof(int)
    //Investigar bien cómo se hace
    for (int cnt = 0; cnt < (size) ; cnt++){
        if (nums[cnt] % 2 == 0){
            pares++;
        }
    }

    return pares;
}
/**
 * Función que recorre el array nums, de tamaño size 
 * Cuenta la cantidad de números impares en el array
 * Devuelve el #impares
 * *Sería más fácil restar de la cantidad de pares :)
 **/
int contar_impares(int nums[], int size){
    int impares = 0;
    for (int cnt = 0; cnt < size ; cnt++){
        if (nums[cnt] % 2 == 1){
            impares++;
        }
    }
    return impares;
}

/**
 * Función principal del programa
 * Pregunta al usuario la cantidad de números en el array
 * Determina los números entre 1-20 aleatoriamente
 * Llama a contar los #pares e #impares con sus respectivas funciones
 * Imprime la cantida de #pares e #impares
 * Si todo sale bien, regresa 1
 **/
int main (void){
    int terminos;
    cout << "Cuántos numeros quieres en la lista?" << endl;
    cin >> terminos;
    //In c++ There are two types of arrays:
    /**
     * Statically allocated: FIXED SIZE
     *      Used when speed is needed
     * Dinamically allocated : Resizable --> List?
     * Check out VECTORS!!!
     */
    
    int numeros[terminos]; //Create array, fixed 
    
    srand(time(nullptr)); //Random seed based on time
    for (int cnt = 0; cnt < terminos; cnt++){ 
        int random = rand() % 20 + 1; //Create random number
        numeros[cnt] = random; 
    }
    int pares = contar_pares(numeros, terminos);
    int impares = contar_impares(numeros, terminos);

    cout << "Tu lista es: ";
    //Imprimir el array en un mismo renglón
    for (int cont = 0; cont < sizeof(numeros) / sizeof(int) ; cont++){
        cout << numeros[cont] << " ";
    }
    cout << endl;
    cout << "Tu lista tiene " << pares << " numeros pares" << endl;
    cout << "Tu lista tiene " << impares << " numeros impares" << endl;

    return 1;
}