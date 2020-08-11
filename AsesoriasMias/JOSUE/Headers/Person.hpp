/*
Class for a car with its properties

Josu� Rodr�guez Mojica
A01024035
12/02/2019
*/
#include <iostream>

using namespace std;

class Person {
    private:
        string name;
        int age;

        string setName (){
            string nombre  [8]= {
                "Josue",
                "Jorge",
                "Alberto",
                "Rosalia",
                "Ozuna",
                "Kevin",
                "Kimberly",
                "Karina"
            };
            srand(time(nullptr));
            int Key = rand() % 8;
            return nombre[Key];
        }
        int setAge(){
            srand(time(nullptr)); //Seed basada en el tiempo
            int Key = rand() % 30 + 5;
        }

    public:
        // Constructor
        Person(){
            name= setName();
            age= getAge();
        }
        
        Person(string _name, int _age){
            name = _name;
            age = _age;
        }

        string getName (){
            return name;
        }
        int getAge(){
            return age;
        }
};

// Constructor
