/**
 * Jorge Pérez Chávez, A01023859
 * 11/11/2019
 * Programa que determina un número aleatoriamente 
 * El usuario intenta adivinar con una cantidad de intentos
 **/

#include <iostream>
#include <cstdlib> //Import random
#include <ctime>   //Import time

using namespace std;

//Las funciones van antes del main

/**
 * Determina un número aleatoriamente 
 * Permite intentar adivinar el número, ciertos intentos
 * Te indica si estás arriba o abajo del numero a adivinar
 * 
 **/
void juego_adivinar(int intentos)
{
    srand(0);             //Seed del random
    srand(time(nullptr)); //Seed basada en el tiempo
    int numero = rand() % 10; //Genera un número random

    for (int count = 0; count < intentos; count++){
        cout << "Tienes " << intentos - count << " intentos" << endl;
        int guess;
        cout << "Adivina un numero entre 0 y 10: " << endl;
        cin >> guess;
        if (guess == numero){
            cout << "Adivinaste!" << endl;
            break;
        }
        else{
            cout << "Fallaste" << endl;
            if (guess < numero){
                cout << "El numero que elegiste es menor al que buscas" << endl;
            }
            else{
                cout << "El numero que elegiste es mayor al que buscas" << endl;
            }
        }
    }
}


/**
 * Función principal del programa, determina el # de intentos
 * esto lo hace a través de parámetos
 * Regresa 1 en caso de que todo salga bien 
 **/
int main(void){
    juego_adivinar(5);
    return 1;
}

//g++ -o hello 01_HelloName.cpp
// ./hello