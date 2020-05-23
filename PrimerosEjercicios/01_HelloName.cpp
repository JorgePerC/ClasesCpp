#include <iostream>
//Se añade con #include

using namespace std; //Agrupación de cosas

/*Se acostumbra que el main sea un int porque
* a veces queremos que el programa principal
* regrese un número
*/

int main (void){ //Si queremos dejar una función sin parámetros, void
    cout << "Hola C++" << endl;
    // Es un print in console con un enter al final
    
    string nombre;
    int edad;
    
    cout << "Dime tu nombre, plox: " << endl; //Mostrar mensaje
    cin >> nombre; //Input

    cout << "Dime tu edad: " << endl;
    cin >> edad;

    cout << "Hola " << nombre << " en 20 anos tendrás, " << edad+20 << endl;
    //En vez de un +, se usan los <<
    
    //OJO con el sentido de los SIGNOS

    return 1; //NO OLVIDES EL RETURN
}
