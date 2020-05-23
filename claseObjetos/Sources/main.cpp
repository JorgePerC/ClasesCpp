#include <iostream> //Este busca en las carpetas default
#include "../Headers/Vector3D.hpp" //Este busca la dirección dentro del proyecto
                                   //La ruta bien es salirse de la carpeta actual, y entrar

using namespace std;


int main (void){

    Vector3D vector1 (5,4,3); //This line calls the constructor
    Vector3D vector2 (3,5,8); //Same object, different instance

    cout << "Tu componentes del vector1 son: " << vector1.x << vector1.y << vector1.z << endl;
    cout << "Tu componentes del vector2 son: " << vector2.x << vector2.y << vector2.z << endl;

    Vector3D vectorUnitario = vector1.unitario(); //Method that return another vector

    cout << "Tu componentes del vectorUnitario son: " << vectorUnitario.x << vectorUnitario.y << vectorUnitario.z << endl;

    return 1;
}