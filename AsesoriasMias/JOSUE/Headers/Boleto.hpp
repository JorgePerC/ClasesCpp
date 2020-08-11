/*
Class for a car with its properties

Josu� Rodr�guez Mojica
A01024035
12/02/2019
*/

#include <iostream>
#include <vector>
#include "Person.hpp"

using namespace std;

class Boleto{
    private:
        int day, month;
        string destiny;
        string destination [5] = {
            "Guadalajara",
            "Chihuahua",
            "Mexico",
            "Alemania",
            "Australia"
        };
        int seat;
        Person persona;
    public:
        Boleto(int _day, int _month, string _destiny, int _seat, Person _persona){
            day = _day;
            month = _month;
            destiny =_destiny;
            seat = _seat;
            persona = _persona;

        }

        Boleto(){
            srand(time(nullptr)); //Seed basada en el tiempo
            day = rand() % 30 + 1;
            month = rand() % 12 + 1;
            destiny = destination[rand() % 5];
            seat = 0;
            
            Person fakePerson = Person();
            persona = fakePerson;
        }
        
        void setSeat (int number){
            seat = number;
        }
        void setDestination (string destination_){
            destiny = destination_;
        }

        string getDestination(){
            return destiny;
        }
        Person getOwner(){
            return persona;
        }
        int getSeat(){
            return seat;
        }
        int getDay(){
            return day;
        }
        int getMonth(){
            return month;
        }

};
