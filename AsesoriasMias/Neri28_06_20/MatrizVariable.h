#include <vector>

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
void MatrizVariable <T> ::mostrarMatriz(){
    for (int i = 0; i < tamano; i++){
        cout << matriz[i] << endl; 
    }
}