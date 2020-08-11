#include <string>
#include <stdio.h>

using namespace std;
void intento();

int main (void){
    intento();
    return 0;
}

void intento(){
    double longitudBarra;
    string hola;

    printf("Escribe un número: \n");
    scanf("%lf", &longitudBarra);

    // printf("Escribe una palabra: \n");
    // scanf("%s", hola);

    printf("P: %f \n", longitudBarra*2);
}