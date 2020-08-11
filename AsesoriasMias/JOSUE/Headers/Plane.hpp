/*
Class for a car with its properties

Josu� Rodr�guez Mojica
A01024035
12/02/2019
*/

#include <iostream>
#include <vector>
#include <unistd.h> //LINUX
//#include <windows.h>   // windows
#include "Boleto.hpp"

using namespace std;

class Plane {
    private:
        vector <Boleto> passengers;
        int seats;
        string ID;

        string abc [26]= {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T"
                            ,"U","V","W","X","Y","Z"};
        int setRandomly(int range){
            int randomNumber;
            srand(time(nullptr)); 
            randomNumber = rand() % range + 1; 
            return randomNumber;
        }

        string setId(){
            return abc[setRandomly(26)-1] + to_string(setRandomly(26)) + abc[setRandomly(26)-1] + abc[setRandomly(26)-1];
        }
    public:
        Plane (string Destination, int seats_){
            seats=seats_;
            ID = setId();
            cout << "Subiendo personas al avion..." << endl;
            for (int i = 0; i<seats; i++){
                Boleto persona = Boleto ();
                passengers.push_back(persona);
                passengers[i].setSeat(i);
                passengers[i].setDestination(Destination);
                sleep(1); //LINUX
                //Sleep(1000) //windows
            }
        }

        void printData(){
            for (int i = 0; i<seats; i++){
                string nombre = passengers[i].getOwner().getName();
                string destino = passengers[i].getDestination();
                cout << "El pasajero " << nombre << ", viaja a " << destino << endl;
            }
        }
};
