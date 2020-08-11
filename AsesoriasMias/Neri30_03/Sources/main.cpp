#include <iostream>
#include <stdlib.h>

using namespace std;
//----------------------------Triangulo
class Triangulo{
    private:
         float base;
         float altura;
    public:
        Triangulo(float, float);
        float area(float, float);
        float perimetro(float, float, float);
};

Triangulo:: Triangulo (float base_, float altura_){
    base = base_;
    altura = altura_;
}

float Triangulo::area(float base_, float altura_){
    return (base_*altura_)/2;
}

float Triangulo::perimetro(float lado1, float lado2, float lado3){
    return lado1+lado2+lado3;
}
//----------------------------Piramide
class PiramideTriangular: public Triangulo{
    private:
        float alturaVolumen;
    public:
        PiramideTriangular(float, float, float);
        float volumen(float, float, float);

};

PiramideTriangular:: PiramideTriangular(float base_, float altura_, float alturaVolumen_):
                    Triangulo(base_, altura_){
        alturaVolumen = alturaVolumen_;
}

float PiramideTriangular::volumen(float base_, float altura_, float alturaVolumen_){
    float areaBase = Triangulo::area(base_, altura_);
    return (areaBase*alturaVolumen)/3;
}

int main (){
    cout<<"Dame la base:"<<endl;
    float base;
    cin>>base;
    
    cout<<"Dame la altura:"<<endl;
    float altura;
    cin>>altura;
    
    cout<<"Dame la altura del volumen:"<<endl;
    float alturaVolumen;
    cin>>alturaVolumen;
    
    cout<<"Dame el lado 1:"<<endl;
    float lado1;
    cin>>lado1;
    
    cout<<"Dame el lado 2:"<<endl;
    float lado2;
    cin>>lado2;
    
    cout<<"Dame el lado 3:"<<endl;
    float lado3;
    cin>>lado3;

    PiramideTriangular pt (base, altura, alturaVolumen);
    cout << "Area: " << pt.area(base, altura) << endl;
    cout << "Volumen: " << pt.volumen(base, altura, alturaVolumen) << endl;
    cout << "Perimetro: " << pt.perimetro(lado1, lado2, lado3) << endl;
    
    return 1;
}