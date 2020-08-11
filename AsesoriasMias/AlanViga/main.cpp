#include <stdio.h>
#include <math.h>

using namespace std;

//Declaración de métodos
double gradosARadianes(double grados);
double calcularComponenteX(double magnitud, double anguloGrados);
double calcularComponenteY(double magnitud, double anguloGrados);
double calcularNb(double angulo, double longTotal, double longFuerzaAplicada, double fuerza);
double calcularNa_a(double angulo, double Nb);
double calcularVa_a(double angulo, double Nb, double fuerza);
double calcularMa_a(double Nb, double angulo, double fuerza, double longTotal, double longFuerzaAplicada);
double calcularNb_b(double angulo, double Nb, double fuerza);
double calcularVb_b(double angulo, double fuerza);
double calcularMb_b(double Nb, double angulo, double fuerza, double longTotal, double longFuerzaAplicada);

int main(void){
    //Declarar variables
    double longitudBarra = 6;
    double distanciaFuerzaAplicada = 1.5;
    double fuerza = 5;
    double anguloGrados = 45;

    printf("Dame la longitud de la barra (m): ");
    scanf("%f", &longitudBarra);
    printf("Dame la distancia donde se aplica la fuerza (m): ");
    scanf("%f", &distanciaFuerzaAplicada);

    printf("Dame la magnitud de la fuerza en (kN): ");
    scanf("%f", &fuerza);
    printf("Dame el ángulo en grados: ");
    scanf("%f", &anguloGrados);
    
    // cout << calcularComponenteY(4,90) << endl;
    double Nb = calcularNb(anguloGrados, longitudBarra , distanciaFuerzaAplicada , fuerza);
    printf("El valor de Nb es: %f \n", Nb);
    
    double Na_a = calcularNa_a(anguloGrados, Nb);
    printf("El valor de Na_a es: %f \n", Na_a);

    double Va_a = calcularVa_a(anguloGrados, Nb, fuerza);
    printf("El valor de Va_a es: %f \n", Va_a);

    double Ma_a = calcularMa_a( Nb, anguloGrados, fuerza, longitudBarra, distanciaFuerzaAplicada);
    printf("El valor de Ma_a es: %f \n", Ma_a);

    double Nb_b = calcularNb_b(anguloGrados, Nb, fuerza);
    printf("El valor de Nb_b es: %f \n", Nb_b);

    double Vb_b = calcularVb_b(anguloGrados, fuerza);
    printf("El valor de Vb_b es: %f \n", Vb_b);
    
    double Mb_b = calcularMb_b( Nb, anguloGrados, fuerza, longitudBarra, distanciaFuerzaAplicada);
    printf("El valor de Mb_b es: %f \n", Mb_b);

    return 0;
}

double calcularNb(double angulo, double longTotal, double longFuerzaAplicada, double fuerza){
    double deltaLong = longTotal-longFuerzaAplicada;
    return (fuerza*(deltaLong))/(sin(gradosARadianes(45))*longTotal);
}

double calcularNa_a(double angulo, double Nb){
    return -(Nb*cos(gradosARadianes(45)));
}

double calcularVa_a(double angulo, double Nb, double fuerza){
    return (Nb*sin(gradosARadianes(45))) - fuerza;
}

double calcularMa_a(double Nb, double angulo, double fuerza, double longTotal, double longFuerzaAplicada){
    double centro = longTotal/2;
    double parte1 = Nb*sin(gradosARadianes(angulo)) * centro;
    return parte1 - fuerza*(longFuerzaAplicada);
}

double calcularNb_b(double angulo, double Nb, double fuerza){
    return fuerza*cos(gradosARadianes(45)) - Nb;
}

double calcularVb_b(double angulo, double fuerza){
    return fuerza*sin(gradosARadianes(angulo));
}

double calcularMb_b(double Nb, double angulo, double fuerza, double longTotal, double longFuerzaAplicada){
    double centro = longTotal/2;
    double parte1 = Nb*sin(gradosARadianes(angulo)) * centro;
    return parte1 - fuerza*(longFuerzaAplicada);
}

double gradosARadianes(double grados){
    return (grados*M_PI)/180;
}

double calcularComponenteX(double magnitud, double anguloGrados){
    return magnitud*cos( gradosARadianes(anguloGrados)) ;
}

double calcularComponenteY(double magnitud, double anguloGrados){
    return magnitud*sin( gradosARadianes(anguloGrados)) ;
}