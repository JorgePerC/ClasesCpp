#include <iostream> //Meter y mostrar datos
#include <vector>

using namespace std;

int main (){
    // //Un vector es como una variable
    // //Declarar un vector
    // vector <int> vector1 = {1,2,3,4,5};
    // vector1.push_back(6);
    // vector1.push_back(7);
    // vector1.push_back(8);
    // vector1.push_back(9);
    // vector1.push_back(10);

    // for (int pos = 0; pos < vector1.size(); pos++){
    //     cout <<vector1[pos]<< endl;
    // }

    // vector <int> vector2 ;
    // //Cuando tienes un vector, la posición empieza en 0
    // //la ultima posición vector1[9] = 10
    // for (int pos = vector1.size() - 1 ; pos > 0 -1; pos--){
    //     cout <<vector1[pos]<< endl;
    // }

    // cout <<"Hola " << endl;

    // En c++ hay diferencia entre vector y array
    //Los arreglo no pueden cambiar de tamaño
    int array [10];
    for (int i = 0; i< 10; i++){
    cout << ": " << array[i] << endl;
    }

    int array2 [10] = {2,3};

    for (int i = 0; i< 10; i++){
    cout << ": " << array2[i] << endl;
    }
    
}
