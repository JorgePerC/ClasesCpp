#include <iostream>
#include <cmath>

using namespace std;

void dentro_fuera (float p_x, float p_y, float c_x, float c_y, float r){
    float distancia = sqrt(pow(p_x-c_x,2)+pow(p_y-c_y,2));
    if (distancia > r){
        cout << "Fuera de la circunferencia" << endl;
    }
    else if (distancia < r){
        cout << "Dentro de la circunferencia" << endl;
    }
    else{
        cout << "Sobre la circunferencia" << endl;
    }
}


int main (void){
    float radio;
    cout << "Dame el radio: " << endl;
    cin >> radio;

    float coordenada_central_x;
    cout << "Dame el coordenada central x: " << endl;
    cin >> coordenada_central_x;

    float coordenada_central_y;
    cout << "Dame el coordenada central y: " << endl;
    cin >> coordenada_central_y;

    float punto_x;
    cout << "Dame el punto x: " << endl;
    cin >> punto_x;

    float punto_y;
    cout << "Dame el punto y: " << endl;
    cin >> punto_y;

    dentro_fuera(punto_x, punto_y, coordenada_central_x, coordenada_central_y, radio);

    return 1;
}