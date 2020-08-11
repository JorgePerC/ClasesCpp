#include <vector>
#include <time.h>

using namespace std;
//int, char, double, float

template <typename T>
class MatrizVariable{
private:
    int tamano;
    vector <T> matriz; //De una dimensión aka, arreglo[]
    bool estaOrdenada();
public:
    MatrizVariable(int);
    void ordenarMatriz();
    void llenarMatriz();
    void mostrarMatriz();
    void llenarMatrizAleatoriamente();
};

template <typename T>
MatrizVariable <T> ::MatrizVariable(int tamano){
    this -> tamano = tamano;
}

template <typename T>
void MatrizVariable <T> ::ordenarMatriz(){
    //Ordenar de mayor a menor
    do{
        for (int i = 0; i < tamano-1; i++){
        
            if (matriz[i+1] > matriz[i]){
                //valor siguiente es mayor al actual
                //el valor actual se mueve antes
                T menor = matriz[i];
                matriz[i] = matriz[i+1];
                matriz[i+1] = menor;
                // matriz[i] = menor;
            }
        }
    }while(!(estaOrdenada())); 
}

template <typename T>
bool MatrizVariable <T> ::estaOrdenada(){
    for (int i = 0; i < tamano-1; i++){
        if (matriz[i+1] > matriz[i]){
            return false;
        }
    }
    return true;
}

template <typename T>
void MatrizVariable <T> ::llenarMatriz(){
    for (int i = 0; i < tamano; i++){
        T input;
        cout << "Dame el valor: ";
        cin >> input;
        matriz.push_back(input);
    }
}

template <typename T>
void MatrizVariable <T> ::llenarMatrizAleatoriamente(){
    srand( (unsigned)time(NULL) );

    for (int i = 0; i < tamano; i++){
        T random  = rand();
        matriz.push_back(random);
    }
}
template <>
void MatrizVariable <int> ::llenarMatrizAleatoriamente(){
    srand( (unsigned)time(NULL) );

    for (int i = 0; i < tamano; i++){
        int random  = rand() % tamano + 1;
        matriz.push_back(random);
    }
}
template <> 
void MatrizVariable <char> ::llenarMatrizAleatoriamente(){
    srand( (unsigned)time(NULL) );

    for (int i = 0; i < tamano; i++){
        int random  = rand() % 126 + 1;
        matriz.push_back((char)random);
    }
    
} 

template <typename T>
void MatrizVariable <T> ::mostrarMatriz(){
    for (int i = 0; i < tamano; i++){
        cout << matriz[i] << endl; 
    }
}