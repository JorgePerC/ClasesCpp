#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;
//----------------------------Circulo
class Circulo{      
    public:
        float radio;
        Circulo(float);
        float area();
        float perimetro();
};

Circulo:: Circulo (float r){
    radio = r;
}

float Circulo::area(){
    return (M_PI*radio*radio);
}

float Circulo::perimetro(){
    return radio*2*M_PI;
}
//----------------------------Esfera
class Esfera: public Circulo{
    private:
        float pi;
    public:
        Esfera(float, float);
        Esfera();
        float volumen();

};

Esfera:: Esfera(float r, float pi_): Circulo(r){
    pi = pi_;
}

Esfera:: Esfera() : Circulo(1){
            cout << "El default es 1" << endl;
            pi= M_PI;
}

float Esfera::volumen(){
    cout << "cuando Pi es: " << pi << endl;
    return (4*pi*radio*radio*radio)/3;
}

int main (){
    cout<<"Dame el radio:"<<endl;
    float radio;
    cin>>radio;
    
    cout << "Esfera 1 :"<< endl;

    Esfera esfera (radio, M_PI);
    cout << "Area: " << esfera.area() << endl;
    cout << "Volumen: " << esfera.volumen() << endl;
    cout << "Perimetro: " << esfera.perimetro() << endl;

    cout << ""<< endl;
    cout << "Esfera 2 :"<< endl;
    Esfera esfera2;
    //Como no lleva paramétros, no se le ponen los paréntesis
    cout << "Area: " << esfera2.area() << endl;
    cout << "Volumen: " << esfera2.volumen() << endl;
    cout << "Perimetro: " << esfera2.perimetro() << endl;

    return 1;
}