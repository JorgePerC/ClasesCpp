#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

class Agencia{
    private:
       string nombre, Ntarjeta;
       int  edad;
    public:
        Agencia();
        Agencia(string,string,int);
        virtual void mostrar();
};
//-----------Viaje en auto
class Vauto: public Agencia{
    private:
        float c;
        string d;
    public:
        Vauto(string,string,int);
        float costo();
        void destino(string);
        void mostrar();
};
//-----------Viaje en avion
class Vavion: public Agencia{
 private:
    float c;
    string d;
 public:
        Vavion(string,string,int);
        float costo();
        void destino(string);
        void mostrar();
};
Agencia::Agencia(){}
Agencia::Agencia(string nombre_, string Ntarjeta_, int edad_){
       nombre=nombre_;
       Ntarjeta=Ntarjeta_;
       edad=edad_;
}
void Agencia::mostrar(){
     cout<<"Nombre de la persona: "<<nombre<<endl;
     cout<<"Numero de tarjeta: "<<Ntarjeta<<endl;
     cout<<"Edad de la persona: "<<edad<<endl;
}
// Vauto
Vauto::Vauto(string nombre_, string Ntarjeta_, int edad_): Agencia(nombre_, Ntarjeta_,edad_){
    float c = costo();

}
float Vauto::costo(){
    cout<<"Dame el costo del viaje: "<< endl;
    cin>>c;
    return c;
}
void Vauto::destino(string destino_){
    d = destino_;
}

void Vauto::mostrar(){
    Agencia::mostrar();
    cout << "El costo del viaje en auto es: "<< c <<endl;
    cout << "El destino del viaje en auto es: "<< d << endl;
}
// Vavion
Vavion::Vavion(string nombre_, string Ntarjeta_, int edad_): Agencia(nombre_, Ntarjeta_,edad_){
    float a = costo();
}
float Vavion::costo(){
    cout<<"Dame el costo del viaje:"<<endl;
    cin>>c;
    return c;
}
void Vavion::destino(string destino_){
    d = destino_;
}
void Vavion::mostrar(){
    Agencia::mostrar();
    cout << "Costo " << c << endl;
    cout << "Destino " << d << endl;
}
int main(){
    string Localidades [5] = {
        "Acapulco",
        "CDMX",
        "Monterrey",
        "Cancun",
        "Guadalajara"
    };
    string nombres [5] = {
        "Pedro",
        "Juan",
        "Jorge",
        "Emma",
        "Britany"
    };
    string tarjetas [5] = {
        "22Ax",
        "25Bz",
        "89xD",
        "69mM",
        "34fV"
    };
    
    vector <Agencia*> viajes;

    int x = 0;
    do
    {
        Vauto vA(
            nombres[x],
            tarjetas[x],
            30+x);
        vA.destino(Localidades[x]);
        vA.mostrar();
        viajes.push_back( &vA);
        cout << "----------" << endl;
        x++;
    } while (x<5);

    vector <Agencia*> vuelos;
    cout << "Aviones" << endl;
    cout <<"    __!__    "<< "               " <<"    __!__    "<< endl;
    cout <<"_____(_)_____"<< "  Vuelos AICM  " <<"_____(_)_____"<< endl;
    cout <<"   !  !  !   "<< "               " <<"   !  !  !   "<< endl;
    int y = 0;
    do
    {
        Vavion vA(
            nombres[y],
            tarjetas[y],
            30+y);
        vA.destino(Localidades[y]);
        vA.mostrar();
        viajes.push_back( &vA);
        cout << "----------" << endl;
        y++;
    } while (y<5);

    vector <Agencia*> :: iterator i;
    for ( i = viajes.begin(); i != viajes.end(); ++i){
        cout <<&i << " ";
    }
    
}
