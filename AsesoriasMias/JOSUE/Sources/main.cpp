#include <iostream>
#include "../Headers/Plane.hpp"

using namespace std;

int main (){
    cout << "Hola" << endl;
    Plane avion1 = Plane ("Cuernavaca",20);
    avion1.printData();
    return 0;
}
