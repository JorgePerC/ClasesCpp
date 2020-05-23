#include <iostream>
#include <cmath>

using namespace std;

//Pregunta para el prof: ¿PODEMOS TENER UNA FUNCION VOID?
void cacular_ims (float h, float m){
    float indice = m/ pow(h,2);
    cout << "Tu indice es: " << indice << endl;
    
    if (indice < 20){
        cout << "Peso bajo" << endl;
    }
    else if (indice <25){
        cout << "Normal" << endl;
    }
    else if (indice <30){
        cout << "Sobre peso" << endl;
    }
    else if (indice <40){
        cout << "Obesidad" << endl;
    }
    else {
        cout << "Obesidad morbida" << endl;
    }

}

int main (void){
    float peso, altura;
    cout << "Dame tu peso (KG): " << endl;
    cin >> peso;
    cout << "Dame tu altura (M): " << endl;
    cin >> altura;
    cacular_ims(altura, peso);
    return 1;
}