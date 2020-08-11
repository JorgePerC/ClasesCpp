#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <vector>

using namespace std;

//----------Empresa
class Empresaurio{
    private:
        string nombreEmpresa;
    public:
        int pago;
        string dato;
        Empresaurio();
        Empresaurio (string);
        virtual void mostrar();
        virtual void datosPersonales();
        void setPago(int);
};
Empresaurio::Empresaurio(){
    nombreEmpresa = "Neri Inc";
    pago = 0;
}
Empresaurio::Empresaurio(string nombre_){
    nombreEmpresa = nombre_;
    pago = 0;
}
void Empresaurio::mostrar(){
    cout << "El empleado de la empresa " << nombreEmpresa << endl;
}
void Empresaurio::setPago(int money){
    pago = money;
}
void Empresaurio:: datosPersonales(){
    cout << "Dame tu signo sodical" << endl;
    string dato;
    cin >> dato;
}

//----------Dire
class Director: protected Empresaurio{
    public:
        Director(string);
        void mostrar();
        void datosPersonales();
};
Director::Director(string nombre): Empresaurio(nombre){
    Empresaurio::setPago(800);
}
void Director::mostrar(){
    Empresaurio::mostrar();
    cout << "El Director gana al mes: " << pago*30 << endl;
}
void Director:: datosPersonales(){
    cout << "Dame tu apodo" << endl;
    string dato;
    cin >> dato;
}

//----------Gerente
class Gerente: Empresaurio{
    public:
        Gerente(string);
        void mostrar();
        void datosPersonales();
};
Gerente::Gerente(string nombre): Empresaurio(nombre){
    Empresaurio::setPago(500);
}
void Gerente::mostrar(){
    Empresaurio::mostrar();
    cout << "El Gerente gana al mes: " << pago*30 << endl;
}
void Gerente:: datosPersonales(){
    cout << "Dame tu apellido" << endl;
    string dato;
    cin >> dato;
}

//----------Inge
class Ingeniero: Empresaurio{
    public:
        Ingeniero(string);
        void mostrar();
        void datosPersonales();
};
Ingeniero::Ingeniero(string nombre): Empresaurio(nombre){
    Empresaurio::setPago(400);
}
void Ingeniero::mostrar(){
    Empresaurio::mostrar();
    cout << "El Ingeniero gana al mes: " << pago*30 << endl;
}
void Ingeniero:: datosPersonales(){
    cout << "Dame tu carro" << endl;
    string dato;
    cin >> dato;
}

//----------Vendedor
class Vendedor: Empresaurio{
    public:
        Vendedor(){Empresaurio::setPago(300);};
        Vendedor(string);
        void mostrar();
        void datosPersonales();
};
Vendedor::Vendedor(string nombre): Empresaurio(nombre){
    Empresaurio::setPago(300);
}
void Vendedor::mostrar(){
    Empresaurio::mostrar();
    cout << "El Vendedor gana al mes: " << pago*30 << endl;
}
void Vendedor:: datosPersonales(){
    cout << "Dame tu calle" << endl;
    string dato;
    cin >> dato;
}

int main (){
    //Sin for
    // Director dire("Neri Inc.");
    // Gerente godin("Neri Inc.");
    // Ingeniero inge("Neri Inc.");
    // Vendedor vende("Neri Inc.");

    // dire.mostrar();
    // godin.mostrar();
    // inge.mostrar();
    // vende.mostrar();
    
    int repeticiones;
    cout << "Dame el numero que quieres (entero)" << endl;
    cin >> repeticiones;
    Vendedor * p1 = new Vendedor[repeticiones];
    for (int x = 0; x<repeticiones; x++){
        p1[x].datosPersonales();
    }
    for (int x = 0; x<repeticiones; x++){
        p1[x].mostrar();
    }
    return 1;
}