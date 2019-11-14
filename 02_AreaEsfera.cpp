#include <iostream>
#include <cmath> //All math related, power and pi

using namespace std;

float calcular_area_esfera (float radio){
    return 4* M_PI *(pow (radio, 2));
}

float calcular_volumen_esfera (float radio){
    return (4/3)* M_PI *(pow (radio, 3));
}

int main (void){
    
    //Variables
    float radio;
    float area;
    float volumen;
    
    cout << "Calculo de area y volumen" << endl;

    cout << "Dame el radio de la esfera" << endl;
    cin >> radio;

    area = calcular_area_esfera (radio);
    volumen = calcular_volumen_esfera(radio);
    
    cout << "El area es " << area << ", el volumen es " << volumen << endl;
    
    return 1;
}